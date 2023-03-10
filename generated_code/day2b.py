# Python compiled from AmyScript
#=========================================================================

#=========================================================================
#### LIBRARY CODE #######################################################
#=========================================================================

# # AmyScript Built-in library
# # Author: Amy Burnett
# # ========================================================================

# # ========================================================================

# # Exits the program with the given exit code 
# # void exit(int exit_code)
# # - exit_code : [rbp + 16]
# # - uses external exit function from libc
def __builtin__exit__int (exit_code):
    exit (exit_code)

# # ========================================================================

# # Frees memory of the given pointer
# # void free()
# # - exit_code : [rbp + 16]
# # - uses external exit function from libc
def __builtin__free (ptr):
    # do nothing, python has its own garbage collection
    pass

# # ========================================================================
# # Prints a given string to the screen
# # void print (char[] stringToPrint)#
# # stringToPrint : [rbp + 16]
def __builtin__print__char__1 (s):
    # collapse char[] to python string
    # -1 to ignore null terminator
    print (''.join(s[:-1]), end="")

# # ========================================================================

# # Prints an int to the screen
# # Utilizes printf "%d"
# # void print (int valueToPrint)#
# # valueToPrint : [rbp + 16]
def __builtin__print__int (v):
    print (v, end="")

# # ========================================================================

# # Prints a char to the screen
# # Utilizes printf "%c"
# # void print (char valueToPrint)#
# # valueToPrint : [rbp + 16]
def __builtin__print__char (v):
    print (v, end="")

# # ========================================================================

# # Prints a float to the screen
# # void print (float valueToPrint)
def __builtin__print__float (v):
    print (v, end="")

# # //========================================================================
# # // Prints a given string to the screen with a newline at the end
# # // void println (char[] stringToPrint)#
# # stringToPrint : [rbp + 16]
def __builtin__println__char__1 (v):
    # collapse char[] to python string
    # -1 to ignore null terminator
    print (''.join(v[:-1]))

# # ========================================================================

# # Prints an int to the screen with a newline
# # Utilizes printf "%d"
# # void println (int valueToPrint)#
# # valueToPrint : [rbp + 16]
def __builtin__println__int (v):
    print (v)

# # ========================================================================
# # // Prints a float to the screen with a newline
# # // void println (float floatToPrint)#
# # valueToPrint : [rbp + 16]
def __builtin__println__float (v):
    print (v)

# # //========================================================================
# # // Prints a char to the screen with a newline
# # // void println (char charToPrint)#
def __builtin__println__char (v):
    print (v)

# # //========================================================================
# # // Prints an enum's integer value with a newline
# # // void println (Enum e)#
def __builtin__println__Enum (v):
    print (v)

# # //========================================================================
# # // Prints a newline to the console
# # // void println ()#
def __builtin__println ():
    print ()

# # //========================================================================
# # // grabs input from the console 
# # this waits for a line if there isnt one
# # // char[] input ()#
def __builtin__input ():
    try:
        # amyscript expects the newline and null character
        line = input () + "\n" + '\0'
    except EOFError:
        # return null if eof is encountered
        line = None
    return line


# # //========================================================================
# # // returns default float value
# # // float float ()#
def __builtin__float ():
    return 0.0

# # //========================================================================
# # // converts int to float
# # // float intToFloat (int value)#
# # value : [rbp + 16]
def __builtin__intToFloat__int (v):
    return float (v)

# # //========================================================================
# # // parses a float from a given char[]
# # // float stringToFloat (char[])#
# # str : [rbp + 16]
def __builtin__stringToFloat__char__1 (s):
    return float (s)

# # //========================================================================
# # // returns default int value
# # // int int ()#
def __builtin__int ():
    return 0

# # //========================================================================
# # // returns default char value
# # // char char ()#
def __builtin__char ():
 return '0'

# # //========================================================================
# # // converts float to int
# # // int floatToInt (float)#
def __builtin__floatToInt__float (f):
    # -1 to ignore the null terminator
    if f[-1] == '\0':
        return int(''.join(f[:-1]))
    return int(''.join(f))

# # //========================================================================
# # // parses an int from a given char[]
# # // int stringToInt (char[] str)#
# # str : [rbp + 16]
def __builtin__stringToInt__char__1 (s):
    # print (s)
    # try:
    #     res = int(''.join(s))
    # except:
    #     res = 0
    # return res
    # -1 to ignore the null terminator
    # count till null terminator
    i = 0
    while s[i] != '\0':
        i += 1
    if s[-1] == '\0':
        return int(''.join(s[:-1]))
    return int(''.join(s[:i]))


# # //========================================================================
# # // parses an int from a given char
# # // int charToInt (char)#
def __builtin__charToInt__char (c):
    return int(c)

# # //========================================================================
# # // converts int to string
# # // char[] string (int)#
def __builtin__string__int (i):
    return str(i)

# # //========================================================================
# # // converts float to string
# # // char[] string (float)#
def __builtin__string__float (f):
    return str(f)

# # //========================================================================

# # // returns default value for array and object (null)
# # // null null ()#
def __builtin__null ():
    return None

# # //========================================================================
#=========================================================================
#### SETUP EXPRESSION RESULT STACK ######################################
#=========================================================================

# This stack is used to store results of expressions
stack = []

#=========================================================================
#### COMPILED CODE ######################################################
#=========================================================================

# Statement
# Assignment - '='
# RHS
# Function Call - input() -> char[]
# Arguments
# *** input
__res = __builtin__input ()
stack.append (__res) # function call result
# LHS
__main__line = 0
__rhs = stack.pop()
__main__line = __rhs
stack.append (__main__line)
# Statement results can be ignored
stack.pop ()
# End Statement

# Statement
# Assignment - '='
# RHS
# Char Literal
stack.append('A')
# LHS
__main__ROCK0 = 0
__rhs = stack.pop()
__main__ROCK0 = __rhs
stack.append (__main__ROCK0)
# Statement results can be ignored
stack.pop ()
# End Statement

# Statement
# Assignment - '='
# RHS
# Char Literal
stack.append('B')
# LHS
__main__PAPER0 = 0
__rhs = stack.pop()
__main__PAPER0 = __rhs
stack.append (__main__PAPER0)
# Statement results can be ignored
stack.pop ()
# End Statement

# Statement
# Assignment - '='
# RHS
# Char Literal
stack.append('C')
# LHS
__main__SCISSORS0 = 0
__rhs = stack.pop()
__main__SCISSORS0 = __rhs
stack.append (__main__SCISSORS0)
# Statement results can be ignored
stack.pop ()
# End Statement

# Statement
# Assignment - '='
# RHS
# Char Literal
stack.append('X')
# LHS
__main__LOSE = 0
__rhs = stack.pop()
__main__LOSE = __rhs
stack.append (__main__LOSE)
# Statement results can be ignored
stack.pop ()
# End Statement

# Statement
# Assignment - '='
# RHS
# Char Literal
stack.append('Y')
# LHS
__main__DRAW = 0
__rhs = stack.pop()
__main__DRAW = __rhs
stack.append (__main__DRAW)
# Statement results can be ignored
stack.pop ()
# End Statement

# Statement
# Assignment - '='
# RHS
# Char Literal
stack.append('Z')
# LHS
__main__WIN = 0
__rhs = stack.pop()
__main__WIN = __rhs
stack.append (__main__WIN)
# Statement results can be ignored
stack.pop ()
# End Statement

# Statement
# Assignment - '='
# RHS
# Int Literal
stack.append(1)
# LHS
__main__SCORE_ROCK = 0
__rhs = stack.pop()
__main__SCORE_ROCK = __rhs
stack.append (__main__SCORE_ROCK)
# Statement results can be ignored
stack.pop ()
# End Statement

# Statement
# Assignment - '='
# RHS
# Int Literal
stack.append(2)
# LHS
__main__SCORE_PAPER = 0
__rhs = stack.pop()
__main__SCORE_PAPER = __rhs
stack.append (__main__SCORE_PAPER)
# Statement results can be ignored
stack.pop ()
# End Statement

# Statement
# Assignment - '='
# RHS
# Int Literal
stack.append(3)
# LHS
__main__SCORE_SCISSORS = 0
__rhs = stack.pop()
__main__SCORE_SCISSORS = __rhs
stack.append (__main__SCORE_SCISSORS)
# Statement results can be ignored
stack.pop ()
# End Statement

# Statement
# Assignment - '='
# RHS
# Int Literal
stack.append(0)
# LHS
__main__SCORE_LOSE = 0
__rhs = stack.pop()
__main__SCORE_LOSE = __rhs
stack.append (__main__SCORE_LOSE)
# Statement results can be ignored
stack.pop ()
# End Statement

# Statement
# Assignment - '='
# RHS
# Int Literal
stack.append(3)
# LHS
__main__SCORE_DRAW = 0
__rhs = stack.pop()
__main__SCORE_DRAW = __rhs
stack.append (__main__SCORE_DRAW)
# Statement results can be ignored
stack.pop ()
# End Statement

# Statement
# Assignment - '='
# RHS
# Int Literal
stack.append(6)
# LHS
__main__SCORE_WIN = 0
__rhs = stack.pop()
__main__SCORE_WIN = __rhs
stack.append (__main__SCORE_WIN)
# Statement results can be ignored
stack.pop ()
# End Statement

# Statement
# Assignment - '='
# RHS
# Int Literal
stack.append(0)
# LHS
__main__totalScore = 0
__rhs = stack.pop()
__main__totalScore = __rhs
stack.append (__main__totalScore)
# Statement results can be ignored
stack.pop ()
# End Statement

#-------------------------------------------------------------------------
# While-Loop
# Using an infinite loop so we can write a separate multi-line condition
while (1):
    # Condition
    # Not Equal
    # LHS
    # Subscript
    # LHS
    stack.append(__main__line)
    # OFFSET
    # Int Literal
    stack.append(0)
    __offset = stack.pop ()
    __pointer = stack.pop ()
    stack.append (__pointer[__offset])
    # RHS
    # Char Literal
    stack.append('$')
    __rhs = stack.pop ()
    __lhs = stack.pop ()
    __res = __lhs != __rhs
    stack.append (__res)
    __cond = stack.pop ()
    # break out of loop if condition is false
    if (__cond == 0): break
    # Body
    #---------------------------------------------------------------------
    # Code Block
    # Statement
    # Assignment - '='
    # RHS
    # Subscript
    # LHS
    stack.append(__main__line)
    # OFFSET
    # Int Literal
    stack.append(0)
    __offset = stack.pop ()
    __pointer = stack.pop ()
    stack.append (__pointer[__offset])
    # LHS
    __main__while__0__block__1__lhs = 0
    __rhs = stack.pop()
    __main__while__0__block__1__lhs = __rhs
    stack.append (__main__while__0__block__1__lhs)
    # Statement results can be ignored
    stack.pop ()
    # End Statement

    # Statement
    # Assignment - '='
    # RHS
    # Subscript
    # LHS
    stack.append(__main__line)
    # OFFSET
    # Int Literal
    stack.append(2)
    __offset = stack.pop ()
    __pointer = stack.pop ()
    stack.append (__pointer[__offset])
    # LHS
    __main__while__0__block__1__rhs = 0
    __rhs = stack.pop()
    __main__while__0__block__1__rhs = __rhs
    stack.append (__main__while__0__block__1__rhs)
    # Statement results can be ignored
    stack.pop ()
    # End Statement

    # Statement
    # Assignment - '='
    # RHS
    # Int Literal
    stack.append(0)
    # LHS
    __main__while__0__block__1__localScore = 0
    __rhs = stack.pop()
    __main__while__0__block__1__localScore = __rhs
    stack.append (__main__while__0__block__1__localScore)
    # Statement results can be ignored
    stack.pop ()
    # End Statement

    #---------------------------------------------------------------------
    # If-Statement
    # Precomputing all if/elif conditions and give unique names
    # bc we can't have code between if and elif
    # Condition
    # Equal
    # LHS
    stack.append(__main__while__0__block__1__rhs)
    # RHS
    stack.append(__main__WIN)
    __rhs = stack.pop ()
    __lhs = stack.pop ()
    __res = __lhs == __rhs
    stack.append (__res)
    __if__2__cond = stack.pop ()
    # Condition for elif #0
    # Equal
    # LHS
    stack.append(__main__while__0__block__1__rhs)
    # RHS
    stack.append(__main__DRAW)
    __rhs = stack.pop ()
    __lhs = stack.pop ()
    __res = __lhs == __rhs
    stack.append (__res)
    __elif__2x0__cond = stack.pop ()
    # Condition for elif #1
    # Equal
    # LHS
    stack.append(__main__while__0__block__1__rhs)
    # RHS
    stack.append(__main__LOSE)
    __rhs = stack.pop ()
    __lhs = stack.pop ()
    __res = __lhs == __rhs
    stack.append (__res)
    __elif__2x1__cond = stack.pop ()
    # get condition from stack
    if (__if__2__cond):
        # Body
        #-----------------------------------------------------------------
        # Code Block
        #-----------------------------------------------------------------
        # If-Statement
        # Precomputing all if/elif conditions and give unique names
        # bc we can't have code between if and elif
        # Condition
        # Equal
        # LHS
        stack.append(__main__while__0__block__1__lhs)
        # RHS
        stack.append(__main__ROCK0)
        __rhs = stack.pop ()
        __lhs = stack.pop ()
        __res = __lhs == __rhs
        stack.append (__res)
        __if__4__cond = stack.pop ()
        # Condition for elif #0
        # Equal
        # LHS
        stack.append(__main__while__0__block__1__lhs)
        # RHS
        stack.append(__main__PAPER0)
        __rhs = stack.pop ()
        __lhs = stack.pop ()
        __res = __lhs == __rhs
        stack.append (__res)
        __elif__4x0__cond = stack.pop ()
        # Condition for elif #1
        # Equal
        # LHS
        stack.append(__main__while__0__block__1__lhs)
        # RHS
        stack.append(__main__SCISSORS0)
        __rhs = stack.pop ()
        __lhs = stack.pop ()
        __res = __lhs == __rhs
        stack.append (__res)
        __elif__4x1__cond = stack.pop ()
        # get condition from stack
        if (__if__4__cond):
            # Body
            #-------------------------------------------------------------
            # Code Block
            # Statement
            # Assignment - '+='
            # RHS
            stack.append(__main__SCORE_PAPER)
            __rhs = stack.pop()
            __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + __rhs
            stack.append (__main__while__0__block__1__localScore)
            # Statement results can be ignored
            stack.pop ()
            # End Statement

            #-------------------------------------------------------------
        #-----------------------------------------------------------------
        # Elif-Statement
        # Condition
        elif (__elif__4x0__cond):
            # Body
            #-------------------------------------------------------------
            # Code Block
            # Statement
            # Assignment - '+='
            # RHS
            stack.append(__main__SCORE_SCISSORS)
            __rhs = stack.pop()
            __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + __rhs
            stack.append (__main__while__0__block__1__localScore)
            # Statement results can be ignored
            stack.pop ()
            # End Statement

            #-------------------------------------------------------------
        #-----------------------------------------------------------------
        #-----------------------------------------------------------------
        # Elif-Statement
        # Condition
        elif (__elif__4x1__cond):
            # Body
            #-------------------------------------------------------------
            # Code Block
            # Statement
            # Assignment - '+='
            # RHS
            stack.append(__main__SCORE_ROCK)
            __rhs = stack.pop()
            __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + __rhs
            stack.append (__main__while__0__block__1__localScore)
            # Statement results can be ignored
            stack.pop ()
            # End Statement

            #-------------------------------------------------------------
        #-----------------------------------------------------------------
        # End of if
        #-----------------------------------------------------------------
        # Statement
        # Assignment - '+='
        # RHS
        stack.append(__main__SCORE_WIN)
        __rhs = stack.pop()
        __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + __rhs
        stack.append (__main__while__0__block__1__localScore)
        # Statement results can be ignored
        stack.pop ()
        # End Statement

        #-----------------------------------------------------------------
    #---------------------------------------------------------------------
    # Elif-Statement
    # Condition
    elif (__elif__2x0__cond):
        # Body
        #-----------------------------------------------------------------
        # Code Block
        #-----------------------------------------------------------------
        # If-Statement
        # Precomputing all if/elif conditions and give unique names
        # bc we can't have code between if and elif
        # Condition
        # Equal
        # LHS
        stack.append(__main__while__0__block__1__lhs)
        # RHS
        stack.append(__main__ROCK0)
        __rhs = stack.pop ()
        __lhs = stack.pop ()
        __res = __lhs == __rhs
        stack.append (__res)
        __if__9__cond = stack.pop ()
        # Condition for elif #0
        # Equal
        # LHS
        stack.append(__main__while__0__block__1__lhs)
        # RHS
        stack.append(__main__PAPER0)
        __rhs = stack.pop ()
        __lhs = stack.pop ()
        __res = __lhs == __rhs
        stack.append (__res)
        __elif__9x0__cond = stack.pop ()
        # Condition for elif #1
        # Equal
        # LHS
        stack.append(__main__while__0__block__1__lhs)
        # RHS
        stack.append(__main__SCISSORS0)
        __rhs = stack.pop ()
        __lhs = stack.pop ()
        __res = __lhs == __rhs
        stack.append (__res)
        __elif__9x1__cond = stack.pop ()
        # get condition from stack
        if (__if__9__cond):
            # Body
            #-------------------------------------------------------------
            # Code Block
            # Statement
            # Assignment - '+='
            # RHS
            stack.append(__main__SCORE_ROCK)
            __rhs = stack.pop()
            __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + __rhs
            stack.append (__main__while__0__block__1__localScore)
            # Statement results can be ignored
            stack.pop ()
            # End Statement

            #-------------------------------------------------------------
        #-----------------------------------------------------------------
        # Elif-Statement
        # Condition
        elif (__elif__9x0__cond):
            # Body
            #-------------------------------------------------------------
            # Code Block
            # Statement
            # Assignment - '+='
            # RHS
            stack.append(__main__SCORE_PAPER)
            __rhs = stack.pop()
            __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + __rhs
            stack.append (__main__while__0__block__1__localScore)
            # Statement results can be ignored
            stack.pop ()
            # End Statement

            #-------------------------------------------------------------
        #-----------------------------------------------------------------
        #-----------------------------------------------------------------
        # Elif-Statement
        # Condition
        elif (__elif__9x1__cond):
            # Body
            #-------------------------------------------------------------
            # Code Block
            # Statement
            # Assignment - '+='
            # RHS
            stack.append(__main__SCORE_SCISSORS)
            __rhs = stack.pop()
            __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + __rhs
            stack.append (__main__while__0__block__1__localScore)
            # Statement results can be ignored
            stack.pop ()
            # End Statement

            #-------------------------------------------------------------
        #-----------------------------------------------------------------
        # End of if
        #-----------------------------------------------------------------
        # Statement
        # Assignment - '+='
        # RHS
        stack.append(__main__SCORE_DRAW)
        __rhs = stack.pop()
        __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + __rhs
        stack.append (__main__while__0__block__1__localScore)
        # Statement results can be ignored
        stack.pop ()
        # End Statement

        #-----------------------------------------------------------------
    #---------------------------------------------------------------------
    #---------------------------------------------------------------------
    # Elif-Statement
    # Condition
    elif (__elif__2x1__cond):
        # Body
        #-----------------------------------------------------------------
        # Code Block
        #-----------------------------------------------------------------
        # If-Statement
        # Precomputing all if/elif conditions and give unique names
        # bc we can't have code between if and elif
        # Condition
        # Equal
        # LHS
        stack.append(__main__while__0__block__1__lhs)
        # RHS
        stack.append(__main__ROCK0)
        __rhs = stack.pop ()
        __lhs = stack.pop ()
        __res = __lhs == __rhs
        stack.append (__res)
        __if__14__cond = stack.pop ()
        # Condition for elif #0
        # Equal
        # LHS
        stack.append(__main__while__0__block__1__lhs)
        # RHS
        stack.append(__main__PAPER0)
        __rhs = stack.pop ()
        __lhs = stack.pop ()
        __res = __lhs == __rhs
        stack.append (__res)
        __elif__14x0__cond = stack.pop ()
        # Condition for elif #1
        # Equal
        # LHS
        stack.append(__main__while__0__block__1__lhs)
        # RHS
        stack.append(__main__SCISSORS0)
        __rhs = stack.pop ()
        __lhs = stack.pop ()
        __res = __lhs == __rhs
        stack.append (__res)
        __elif__14x1__cond = stack.pop ()
        # get condition from stack
        if (__if__14__cond):
            # Body
            #-------------------------------------------------------------
            # Code Block
            # Statement
            # Assignment - '+='
            # RHS
            stack.append(__main__SCORE_SCISSORS)
            __rhs = stack.pop()
            __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + __rhs
            stack.append (__main__while__0__block__1__localScore)
            # Statement results can be ignored
            stack.pop ()
            # End Statement

            #-------------------------------------------------------------
        #-----------------------------------------------------------------
        # Elif-Statement
        # Condition
        elif (__elif__14x0__cond):
            # Body
            #-------------------------------------------------------------
            # Code Block
            # Statement
            # Assignment - '+='
            # RHS
            stack.append(__main__SCORE_ROCK)
            __rhs = stack.pop()
            __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + __rhs
            stack.append (__main__while__0__block__1__localScore)
            # Statement results can be ignored
            stack.pop ()
            # End Statement

            #-------------------------------------------------------------
        #-----------------------------------------------------------------
        #-----------------------------------------------------------------
        # Elif-Statement
        # Condition
        elif (__elif__14x1__cond):
            # Body
            #-------------------------------------------------------------
            # Code Block
            # Statement
            # Assignment - '+='
            # RHS
            stack.append(__main__SCORE_PAPER)
            __rhs = stack.pop()
            __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + __rhs
            stack.append (__main__while__0__block__1__localScore)
            # Statement results can be ignored
            stack.pop ()
            # End Statement

            #-------------------------------------------------------------
        #-----------------------------------------------------------------
        # End of if
        #-----------------------------------------------------------------
        # Statement
        # Assignment - '+='
        # RHS
        stack.append(__main__SCORE_LOSE)
        __rhs = stack.pop()
        __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + __rhs
        stack.append (__main__while__0__block__1__localScore)
        # Statement results can be ignored
        stack.pop ()
        # End Statement

        #-----------------------------------------------------------------
    #---------------------------------------------------------------------
    # End of if
    #---------------------------------------------------------------------
    # Statement
    # Assignment - '+='
    # RHS
    stack.append(__main__while__0__block__1__localScore)
    __rhs = stack.pop()
    __main__totalScore = __main__totalScore + __rhs
    stack.append (__main__totalScore)
    # Statement results can be ignored
    stack.pop ()
    # End Statement

    # Statement
    stack.append(__main__line)
    __arr = stack.pop ()
    __builtin__free (__arr)
    stack.append (0)
    # Statement results can be ignored
    stack.pop ()
    # End Statement

    # Statement
    # Assignment - '='
    # RHS
    # Function Call - input() -> char[]
    # Arguments
    # *** input
    __res = __builtin__input ()
    stack.append (__res) # function call result
    __rhs = stack.pop()
    __main__line = __rhs
    stack.append (__main__line)
    # Statement results can be ignored
    stack.pop ()
    # End Statement

    #---------------------------------------------------------------------
# End of While
#-------------------------------------------------------------------------
# Statement
# Function Call - println(int) -> void
# Arguments
stack.append(__main__totalScore)
__arg0 = stack.pop ()
# *** println
__res = __builtin__println__int (__arg0)
stack.append (__res) # function call result
# Statement results can be ignored
stack.pop ()
# End Statement


#=========================================================================
#### END OF CODE ########################################################
#=========================================================================

