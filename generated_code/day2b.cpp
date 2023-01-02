// Generated C++ code compiled from AmyScript
//=========================================================================

//=========================================================================
//### LIBRARY CODE #######################################################
//=========================================================================

// AmyScript Built-in library
// Author: Amy Burnett
// ========================================================================

#include <vector>
#include <iostream>
// std::memcpy
#include <cstring>

// ========================================================================

// Exits the program with the given exit code 
// void exit(int exit_code)
// - exit_code : [rbp + 16]
// - uses external exit function from libc
void __builtin__exit__int (long exit_code) {
    exit ((int) exit_code);
}

// ========================================================================

// Frees memory of the given pointer
// *this is not used - delete keyword is used instead
// void free()
// def __builtin__free (ptr):
//     # do nothing, python has its own garbage collection
//     pass

// ========================================================================
// Prints a given string to the screen
// void print (char[] stringToPrint)
void __builtin__print__char__1 (char* v) {
    printf ("%s", v);
}

// ========================================================================

// Prints an int to the screen
// Utilizes printf "%d"
// void print (int valueToPrint)
void __builtin__print__int (long v) {
    printf ("%ld", v);
}

// ========================================================================

// Prints a char to the screen
// void print (char valueToPrint)
void __builtin__print__char (char v) {
    printf ("%c", v);
}

// ========================================================================

// Prints a float to the screen
// void print (float valueToPrint)
void __builtin__print__float (double v) {
    // printf ("%f", v);
    // this removes trailing zeros
    std::cout << v;
}

//========================================================================
// Prints a given string to the screen with a newline at the end
// void println (char[] stringToPrint)
void __builtin__println__char__1 (char* v) {
    printf ("%s\n", v);
}

// ========================================================================

// Prints an int to the screen with a newline
// Utilizes printf "%d"
// void println (int valueToPrint)
void __builtin__println__int (long v) {
    printf ("%ld\n", v);
}

// ========================================================================
// Prints a float to the screen with a newline
// void println (float floatToPrint)
void __builtin__println__float (double v) {
    // printf ("%f\n", v);
    // this removes trailing zeros
    std::cout << v << std::endl;
}

//========================================================================
// Prints a char to the screen with a newline
// void println (char charToPrint)
void __builtin__println__char (char v) {
    printf ("%c\n", v);
}

//========================================================================
// Prints an enum's integer value with a newline
// void println (Enum e)#
// def __builtin__println__Enum (v):
//     print (v)

//========================================================================
// Prints a newline to the console
// void println ()
void __builtin__println () {
    printf ("\n");
}

//========================================================================
// grabs input from the console 
// this waits for a line if there isnt one
// char[] input ()
char* __builtin__input ()
{
    char* buffer = nullptr;
    size_t buflen = 0;
    long num_chars = getline (&buffer, &buflen, stdin);
    // check for eof
    if (num_chars == -1)
        // return null for eof
        return nullptr;
    // return line
    return buffer;
}

//========================================================================
// returns default float value
// float float ()
double __builtin__float () {
    return 0.0;
}

//========================================================================
// returns default int value
// int int ()
long __builtin__int () {
    return 0l;
}

//========================================================================
// returns default char value
// char char ()
char __builtin__char () {
    return 0;
}

//========================================================================
// converts int to float
// float intToFloat (int value)
double __builtin__intToFloat__int (long v)
{
    return double (v);
}

//========================================================================
// parses a float from a given char[]
// float stringToFloat (char[])
double __builtin__stringToFloat__char__1 (char* s)
{
    return std::atof (s);
}

//========================================================================
// converts float to int
// int floatToInt (float)
long __builtin__floatToInt__float (double f)
{
    return long (f);
}


//========================================================================
// parses an int from a given char[]
// int stringToInt (char[] str)
long __builtin__stringToInt__char__1 (char* s)
{
    return std::atoi (s);
}


//========================================================================
// parses an int from a given char
// int charToInt (char)
long __builtin__charToInt__char (char c)
{
    return long (c);
}

//========================================================================
// converts int to string
// char[] string (int)
char* __builtin__string__int (long i)
{
    std::string str = std::to_string (i);
    // convert to heap string
    char* c_str = new char[str.length()];
    std::memcpy (c_str, str.c_str(), str.length());
    return c_str;
}

//========================================================================
// converts float to string
// char[] string (float)
char* __builtin__string__float (double f)
{
    std::string str = std::to_string (f);
    // convert to heap string
    char* c_str = new char[str.length()];
    std::memcpy (c_str, str.c_str(), str.length());
    return c_str;
}

//========================================================================

// returns default value for array and object (null)
// null null ()
// def __builtin__null ():
//     return None

//========================================================================

// the root class of all objects
class __builtin____main__Object
{
    public:
    // all objects will have a dispatch table
    void** dtable;
};
//=========================================================================
//### Header section #####################################################
//=========================================================================

//=========================================================================
//### Functions section ##################################################
//=========================================================================

//=========================================================================
//### Main function ######################################################
//=========================================================================

int main () {
    // Function Header
    // This stack is used to store results of expressions
    std::vector<long> stack;
    // Declare general purpose variables
    // These are longs and can store anything up to 8 bytes via casting
    long __stackval = 0;
    long __pointer = 0;
    long __offset = 0;
    long __parent = 0;
    long __child = 0;
    long __obj = 0;
    long __lhs = 0;
    long __rhs = 0;
    long __res = 0;

    // Main body
    //---------------------------------------------------------------------
    // Statement
    // Assignment - '='
    // RHS
    // Function Call - input() -> char[]
    {
        // Arguments
        // input
        char* __res = __builtin__input ();
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // LHS
    // Variable declaration
    char* __main__line;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__line = *reinterpret_cast<char**>(&__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__line));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Char Literal
    stack.push_back (static_cast<long>(static_cast<unsigned char>('A')));
    // LHS
    // Variable declaration
    char __main__ROCK0;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__ROCK0 = static_cast<char>(static_cast<unsigned char>(__rhs));
    // Result of assignment
    stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__ROCK0)));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Char Literal
    stack.push_back (static_cast<long>(static_cast<unsigned char>('B')));
    // LHS
    // Variable declaration
    char __main__PAPER0;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__PAPER0 = static_cast<char>(static_cast<unsigned char>(__rhs));
    // Result of assignment
    stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__PAPER0)));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Char Literal
    stack.push_back (static_cast<long>(static_cast<unsigned char>('C')));
    // LHS
    // Variable declaration
    char __main__SCISSORS0;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__SCISSORS0 = static_cast<char>(static_cast<unsigned char>(__rhs));
    // Result of assignment
    stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__SCISSORS0)));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Char Literal
    stack.push_back (static_cast<long>(static_cast<unsigned char>('X')));
    // LHS
    // Variable declaration
    char __main__LOSE;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__LOSE = static_cast<char>(static_cast<unsigned char>(__rhs));
    // Result of assignment
    stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__LOSE)));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Char Literal
    stack.push_back (static_cast<long>(static_cast<unsigned char>('Y')));
    // LHS
    // Variable declaration
    char __main__DRAW;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__DRAW = static_cast<char>(static_cast<unsigned char>(__rhs));
    // Result of assignment
    stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__DRAW)));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Char Literal
    stack.push_back (static_cast<long>(static_cast<unsigned char>('Z')));
    // LHS
    // Variable declaration
    char __main__WIN;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__WIN = static_cast<char>(static_cast<unsigned char>(__rhs));
    // Result of assignment
    stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__WIN)));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (1);
    // LHS
    // Variable declaration
    long __main__SCORE_ROCK;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__SCORE_ROCK = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_ROCK));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (2);
    // LHS
    // Variable declaration
    long __main__SCORE_PAPER;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__SCORE_PAPER = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_PAPER));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (3);
    // LHS
    // Variable declaration
    long __main__SCORE_SCISSORS;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__SCORE_SCISSORS = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_SCISSORS));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (0);
    // LHS
    // Variable declaration
    long __main__SCORE_LOSE;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__SCORE_LOSE = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_LOSE));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (3);
    // LHS
    // Variable declaration
    long __main__SCORE_DRAW;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__SCORE_DRAW = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_DRAW));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (6);
    // LHS
    // Variable declaration
    long __main__SCORE_WIN;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__SCORE_WIN = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_WIN));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (0);
    // LHS
    // Variable declaration
    long __main__totalScore;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__totalScore = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__totalScore));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
    // While-Loop
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Not Equal
        {
            // LHS
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__line));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
            }
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('$')));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __cond = stack.back ();
        stack.pop_back ();
        // break out of loop if condition is false
        if (__cond == 0) break;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__line));
            // OFFSET
            // Int Literal
            stack.push_back (0);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
        }
        // LHS
        // Variable declaration
        char __main__while__0__block__1__lhs;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__0__block__1__lhs = static_cast<char>(static_cast<unsigned char>(__rhs));
        // Result of assignment
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__lhs)));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__line));
            // OFFSET
            // Int Literal
            stack.push_back (2);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
        }
        // LHS
        // Variable declaration
        char __main__while__0__block__1__rhs;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__0__block__1__rhs = static_cast<char>(static_cast<unsigned char>(__rhs));
        // Result of assignment
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__rhs)));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Variable declaration
        long __main__while__0__block__1__localScore;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__0__block__1__localScore = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__localScore));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // If-Statement
        // Precomputing all if/elif conditions and give unique names
        // bc we can't have code between if and elif
        // Condition
        // Equal
        {
            // LHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__rhs)));
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__WIN)));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__2__cond = stack.back ();
        stack.pop_back ();
        // Condition for elif #0
        // Equal
        {
            // LHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__rhs)));
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__DRAW)));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __elif__2x0__cond = stack.back ();
        stack.pop_back ();
        // Condition for elif #1
        // Equal
        {
            // LHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__rhs)));
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__LOSE)));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __elif__2x1__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__2__cond)
        {
            // Body
            //-------------------------------------------------------------
            // Code Block
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Equal
            {
                // LHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__lhs)));
                // RHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__ROCK0)));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__4__cond = stack.back ();
            stack.pop_back ();
            // Condition for elif #0
            // Equal
            {
                // LHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__lhs)));
                // RHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__PAPER0)));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __elif__4x0__cond = stack.back ();
            stack.pop_back ();
            // Condition for elif #1
            // Equal
            {
                // LHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__lhs)));
                // RHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__SCISSORS0)));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __elif__4x1__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__4__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '+='
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_PAPER));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__localScore));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // Elif-Statement
            // Condition
            else if (__elif__4x0__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '+='
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_SCISSORS));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__localScore));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Elif-Statement
            // Condition
            else if (__elif__4x1__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '+='
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_ROCK));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__localScore));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '+='
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_WIN));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__localScore));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
        }
        //-----------------------------------------------------------------
        // Elif-Statement
        // Condition
        else if (__elif__2x0__cond)
        {
            // Body
            //-------------------------------------------------------------
            // Code Block
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Equal
            {
                // LHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__lhs)));
                // RHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__ROCK0)));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__9__cond = stack.back ();
            stack.pop_back ();
            // Condition for elif #0
            // Equal
            {
                // LHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__lhs)));
                // RHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__PAPER0)));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __elif__9x0__cond = stack.back ();
            stack.pop_back ();
            // Condition for elif #1
            // Equal
            {
                // LHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__lhs)));
                // RHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__SCISSORS0)));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __elif__9x1__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__9__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '+='
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_ROCK));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__localScore));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // Elif-Statement
            // Condition
            else if (__elif__9x0__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '+='
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_PAPER));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__localScore));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Elif-Statement
            // Condition
            else if (__elif__9x1__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '+='
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_SCISSORS));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__localScore));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '+='
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_DRAW));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__localScore));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
        }
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // Elif-Statement
        // Condition
        else if (__elif__2x1__cond)
        {
            // Body
            //-------------------------------------------------------------
            // Code Block
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Equal
            {
                // LHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__lhs)));
                // RHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__ROCK0)));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__14__cond = stack.back ();
            stack.pop_back ();
            // Condition for elif #0
            // Equal
            {
                // LHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__lhs)));
                // RHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__PAPER0)));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __elif__14x0__cond = stack.back ();
            stack.pop_back ();
            // Condition for elif #1
            // Equal
            {
                // LHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__lhs)));
                // RHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__SCISSORS0)));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __elif__14x1__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__14__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '+='
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_SCISSORS));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__localScore));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // Elif-Statement
            // Condition
            else if (__elif__14x0__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '+='
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_ROCK));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__localScore));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Elif-Statement
            // Condition
            else if (__elif__14x1__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '+='
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_PAPER));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__localScore));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '+='
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__SCORE_LOSE));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__0__block__1__localScore = __main__while__0__block__1__localScore + *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__localScore));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
        }
        //-----------------------------------------------------------------
        // End of if
        //-----------------------------------------------------------------
        // Statement
        // Assignment - '+='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__localScore));
        __rhs = stack.back ();
        stack.pop_back ();
        __main__totalScore = __main__totalScore + *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__totalScore));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        stack.push_back (reinterpret_cast<long>(__main__line));
        __stackval = stack.back ();
        stack.pop_back ();
        delete *reinterpret_cast<char**>(&__stackval);
        stack.push_back (0);
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Function Call - input() -> char[]
        {
            // Arguments
            // input
            char* __res = __builtin__input ();
            stack.push_back (reinterpret_cast<long>(__res));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        __main__line = *reinterpret_cast<char**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__line));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End of While
    //---------------------------------------------------------------------
    // Statement
    // Function Call - println(int) -> void
    {
        // Arguments
        stack.push_back (*reinterpret_cast<long*>(&__main__totalScore));
        
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        long __arg0 = *reinterpret_cast<long*>(&__stackval);
        // println
        __builtin__println__int (__arg0);
        // push dummy value - funcall returns void
        stack.push_back (0);
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

}
//=========================================================================
//### END OF MAIN ########################################################
//=========================================================================

