# Advent of Code 2022 solutions runner
# Author: Amy Burnett
# ========================================================================

import os
import subprocess
import time
import argparse

# ========================================================================

# System call
os.system("")

# Class of different styles
class style():
    BLACK = '\033[30m'
    RED = '\033[31m'
    GREEN = '\033[32m'
    YELLOW = '\033[33m'
    BLUE = '\033[34m'
    MAGENTA = '\033[35m'
    CYAN = '\033[36m'
    WHITE = '\033[37m'
    UNDERLINE = '\033[4m'
    RESET = '\033[0m'

# ========================================================================

AMYSCRIPT_COMPILER_PATH = 'amyc'
# AMYSCRIPT_COMPILER_PATH = '../code/amyc/amyScriptCompiler.py'
AMYASM_PATH = "amyasmi"
# AMYASM_PATH = "../code/amyasmi/amyAssemblyInterpreter.py"
CPP_COMPILER = "g++"

SOLUTIONS_DIR = "solutions"
SAMPLE_INPUTS_DIR = "sample_inputs"
FULL_INPUTS_DIR = "full_inputs"
SAMPLE_ANSWERS_DIR = "sample_answers"
FULL_ANSWERS_DIR = "full_answers"
GENERATED_CODE_DIR = "generated_code"

libraries = ["lib/Vector.amy", "lib/algorithms.amy", "lib/LinkedList.amy"]

SAMPLE = 0
INPUT = 1

# ========================================================================

class Run:
    def __init__ (self, day, part, target):
        self.day = day
        self.part = part
        self.target = target
        self.is_compiled = False
        self.compile_time = 0
        self.ran_successfully = False
        self.result = "N/A"
        self.is_correct = False
        self.runtime = 0

# ========================================================================

def run (days, parts, targets, inputset, hide_answers, timeout, verbose):
    runs = []

    for day in days:
        for part in parts:
            for target in targets:
                runs.append (Run (day, part, target))

    # execute runs
    for run in runs:

        if verbose:
            print ("======================================================================")
            print (f"Day {run.day}, Part {run.part}, Target {run.target}:")

        code_filename = f"{SOLUTIONS_DIR}/day{run.day}{run.part}.amy"
        sample_filename = f"{SAMPLE_INPUTS_DIR}/day{run.day}.sample"
        input_filename = f"{FULL_INPUTS_DIR}/day{run.day}.input"
        if inputset == "input":
            acting_input_filename = input_filename
        elif inputset == "sample":
            acting_input_filename = sample_filename
        sample_answer_filename = f"{SAMPLE_ANSWERS_DIR}/day{run.day}{run.part}.sample.answer"
        input_answer_filename = f"{FULL_ANSWERS_DIR}/day{run.day}{run.part}.input.answer"
        if inputset == "input":
            acting_answer_filename = input_answer_filename
        elif inputset == "sample":
            acting_answer_filename = sample_answer_filename

        dest_filename = f"{GENERATED_CODE_DIR}/day{run.day}{run.part}"
        if (run.target == "amyasm"):
            dest_filename += ".amy.assembly"
        elif (run.target == "x86"):
            dest_filename += ".asm"
        elif (run.target == "python"):
            dest_filename += ".py"
        elif (run.target == "cpp"):
            dest_filename += ".cpp"
        else: 
            print ("{style.RED}Error{style.RESET}: invalid target:", run.target)
            exit (1)

        # print (code_filename, run.target, input_filename, dest_filename)

        # Compile
        if verbose:
            print ("\tcompiling...")
        cstart = time.perf_counter()
        cmd_args = [AMYSCRIPT_COMPILER_PATH, code_filename, *libraries, '--target', run.target, '-o', dest_filename]
        if verbose:
            print (' '.join(cmd_args))
        compiler_output = subprocess.run (cmd_args, capture_output=True, text=True)
        cend = time.perf_counter ()
        run.compile_time = cend - cstart

        # Ensure it compiled succesfully
        run.is_compiled = compiler_output.returncode == 0
        # print (run.is_compiled)

        if (not run.is_compiled):
            print (f"{style.RED}Error{style.RESET}: run failed to compile")
            print (compiler_output.stdout)
            print (compiler_output.stderr)
            # move on to next run
            continue

        # extra compiling/assembling/linking step
        passes_extra_step = True
        if (run.target == "amyasm"):
            # nothing extra to do
            pass
        elif (run.target == "x86"):
            # x86 needs to be assembled
            assembled_filename = f"{GENERATED_CODE_DIR}/day{day}{part}.o"
            nasm_args = ['nasm', '-f','elf64',dest_filename,'-o', assembled_filename]
            if verbose:
                print ("\tassembling...")
                print (' '.join(nasm_args))
            nasm_output = subprocess.run (nasm_args, capture_output=True, text=True)

            # ensure nasm succeeded
            if nasm_output.returncode != 0:
                print (f"{style.RED}Error{style.RESET}: assembling via nasm failed")
                print (nasm_output.stdout)
                print (nasm_output.stderr)
                run.result = "[assembling]"
                continue

            # link
            bin_filename = f"{GENERATED_CODE_DIR}/day{day}{part}.out"
            linking_args = ['ld', assembled_filename, '-o', bin_filename, '-lc', '--dynamic-linker', '/lib/x86_64-linux-gnu/ld-linux-x86-64.so.2']
            if verbose:
                print ("\tlinking...")
                print (' '.join (linking_args))
            linking_output = subprocess.run (linking_args, capture_output=True, text=True)

            # ensure linking succeeded
            if linking_output.returncode != 0:
                print (f"{style.RED}Error{style.RESET}: linking via ld failed")
                print (linking_output.stdout)
                print (linking_output.stderr)
                run.result = "[linking]"
                continue
        elif (run.target == "python"):
            # nothing extra to do
            pass
        elif (run.target == "cpp"):
            # cpp needs to be compiled
            bin_filename = f"{GENERATED_CODE_DIR}/day{day}{part}.cpp_exe"
            cpp_compile_args = [CPP_COMPILER, dest_filename, '-o', bin_filename]
            if verbose:
                print ("\tcompiling cpp code...")
                print (' '.join(cpp_compile_args))
            cpp_compile_args = subprocess.run (cpp_compile_args, capture_output=True, text=True)

            # ensure compiling succeeded
            if cpp_compile_args.returncode != 0:
                print (f"{style.RED}Error{style.RESET}: compiling via {CPP_COMPILER} failed")
                print (cpp_compile_args.stdout)
                print (cpp_compile_args.stderr)
                run.result = "[g++ failed]"
                continue

        # get input
        with open (acting_input_filename, "r") as f:
            input_data = f.read()
        
        # get answer
        with open (acting_answer_filename, "r") as f:
            expected_answer = f.read ().strip ()

        # Run generated code
        try:  
            rstart = time.perf_counter()
            if (run.target == "amyasm"):
                cmd_args = [AMYASM_PATH, dest_filename]
                if verbose:
                    print ("\trunning...")
                    print (' '.join(cmd_args))
                run_output = subprocess.run (cmd_args, input=input_data, capture_output=True, text=True, timeout=timeout)
            elif (run.target == "x86"):
                # we're finally ready to run the code
                cmd_args = [f"./{bin_filename}"]
                if verbose:
                    print ("\trunning...")
                    print (" ".join(cmd_args))
                run_output = subprocess.run (cmd_args, input=input_data, capture_output=True, text=True, timeout=timeout)
            elif (run.target == "python"):
                cmd_args = [f'python3', dest_filename]
                if verbose:
                    print ("\trunning...")
                    print (" ".join(cmd_args))
                run_output = subprocess.run (cmd_args, input=input_data, capture_output=True, text=True, timeout=timeout)
            elif (run.target == "cpp"):
                # we're finally ready to run the code
                cmd_args = [f"./{bin_filename}"]
                if verbose:
                    print ("\trunning...")
                    print (" ".join(cmd_args))
                run_output = subprocess.run (cmd_args, input=input_data, capture_output=True, text=True, timeout=timeout)
            else: 
                print ("{style.RED}Error{style.RESET}: invalid target:", run.target)
                exit (1)
            rend = time.perf_counter ()
            run.runtime = rend - rstart
        except subprocess.TimeoutExpired:
                # catch timeout errors
                print (f"{style.RED}Error{style.RESET}: timeout of {style.CYAN}{timeout}{style.RESET} seconds exceeded")
                print (f"   Maybe there is a hang or the timeout needs to be increased or the process is waiting on input or your implementation is too slow")
                run.result = f"[timed-out]"
                continue

        # Ensure code ran successfully
        run.ran_successfully = run_output.returncode == 0
        if not run.ran_successfully:
            print (f"{style.RED}Error{style.RESET}: run failed")
            print (run_output.stdout)
            print (run_output.stderr)
            run.result = f"[error {run_output.returncode}]"
            continue

        # Grab result
        # print ("result =>", run_output.stdout)
        run.result = run_output.stdout.strip()
        
        # Check if it is correct
        run.is_correct = run.result == expected_answer


    # day, part, target, compiled?, compiletime, result, time

    # if inputset == "input":
    #     print ("results are from 'input' datasets")
    # elif inputset == "sample":
    #     print ("results are from 'sample' datasets")

    print     (f"+-{  '---':>3}-+-{  '----':>4}-+-{  '------':>6}-+-{               '-'*9}-+-{                   '-'*10}-+-{                    '-'*8}-+-{        '-'*12}-+-{              '-'*8}-+-{               '-'*9}-+")
    print     (f"| {  'day':^3} | {  'part':^4} | {  'target':^6} | {             'is':^9} | {            'compile':^10} | {                'exit':^8} | {  'result':^12} | {            'is':^8} | {        'runtime':^9} |")
    print     (f"| {     '':^3} | {      '':^4} | {    'lang':^6} | {      'compiled?':^9} | {         'time (sec)':^10} | {            'success?':^8} | {        '':^12} | {      'correct?':^8} | {          '(sec)':^9} |")
    print     (f"+-{  '---':>3}-+-{  '----':>4}-+-{  '------':>6}-+-{               '-'*9}-+-{                   '-'*10}-+-{                    '-'*8}-+-{        '-'*12}-+-{              '-'*8}-+-{               '-'*9}-+")
    total_compile_time = 0
    total_run_time = 0
    for run in runs:
        if run.target == "amyasm":
            print (style.GREEN, end="")
        elif run.target == "x86":
            print (style.RED, end="")
        elif run.target == "python":
            print (style.CYAN, end="")
        elif run.target == "cpp":
            print (style.MAGENTA, end="")
        if hide_answers:
            result = f"{'-'*10}"
        else:
            result = run.result
        print (f"| {run.day:>3} | {run.part:>4} | {run.target:>6} | {run.is_compiled!s:>9} | {  run.compile_time:>10.4f} | {run.ran_successfully!s:>8} | {    result:>12} | {run.is_correct!s:>8} | {   run.runtime:>9.4f} |")
        print(style.RESET, end="")
        total_compile_time += run.compile_time
        total_run_time += run.runtime
    print     (f"+-{  '---':>3}-+-{  '----':>4}-+-{  '------':>6}-+-{               '-'*9}-+-{                   '-'*10}-+-{                    '-'*8}-+-{        '-'*12}-+-{              '-'*8}-+-{               '-'*9}-+")
    print     (f"| {               'total':^10} | {  '      ':>6} | {               ' '*9} | {total_compile_time:>10.4f} | {                    ' '*8} | {        ' '*12} | {              ' '*8} | {total_run_time:>9.4f} |")
    print     (f"+-{  '---':>3}-+-{  '----':>4}-+-{  '------':>6}-+-{               '-'*9}-+-{                   '-'*10}-+-{                    '-'*8}-+-{        '-'*12}-+-{              '-'*8}-+-{               '-'*9}-+")

    print ()

# ========================================================================

if __name__ == "__main__":
    argparser = argparse.ArgumentParser (description="Arguments")

    argparser.add_argument("-d", "--days", nargs="+", default=["all"], help="days to run [default all] (1, 2, ..., 24 | all)")
    argparser.add_argument("-p", "--parts", choices=["a", "b", "both"], default="both", help="parts to run per day [default both] (a | b | both)")
    argparser.add_argument("-t", "--targets", nargs="+", default=["all"], help="targets to compile to for each run [default all] (amyasm, x86, python, cpp, all)")
    argparser.add_argument("-i", "--input", choices=["sample", "input"], default="input", help="specifies the input dataset [default input] (sample, input)")
    argparser.add_argument("--timeout", default="3600", help="number of seconds before timing out a run [default 1 hour]")
    argparser.add_argument("--hide_answers", action="store_true", help="hides the outputted answers")
    argparser.add_argument("-v", "--verbose", action="store_true", help="outputs info while running")

    args = argparser.parse_args ()

    # print (args)

    valid_days = [str(i) for i in range(1, 15)]
    days = args.days
    if "all" in args.days:
        days = valid_days
    # ensure valid targets 
    for day in days:
        if day not in valid_days:
            print (f"{style.RED}Error{style.RESET}: '{day}' is not a valid day")
            exit (1)

    # print (days)

    if args.parts == "both":
        parts = ["a", "b"]
    else:
        parts = [args.parts]

    # print (parts)

    valid_targets = ["amyasm", "x86", "python", "cpp"]

    targets = args.targets
    if "all" in args.targets:
        targets = valid_targets
    # ensure valid targets 
    for target in targets:
        if target not in valid_targets:
            print (f"{style.RED}Error{style.RESET}: '{target}' is not a valid target")
            exit (1)

    # print (targets)

    run (days, parts, targets, args.input, args.hide_answers, int(args.timeout), args.verbose)
    
