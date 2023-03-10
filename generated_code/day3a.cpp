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
    //=====================================================================
    // Class Template - 
    // End Class Template - 
    //=====================================================================

    //=====================================================================
    // Function Template - 
    // End Function Template - 
    //=====================================================================

    //=====================================================================
    // Function Template - 
    // End Function Template - 
    //=====================================================================

    // Statement
    // Assignment - '='
    // RHS
    // String Literal
    {
        char str_literal[] = " abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        // convert to a heap string
        char* str = new char[54];
        // copy string to heap allocation
        std::memcpy (str, &str_literal, 54);
        stack.push_back (reinterpret_cast<long> (str));
    }
    // LHS
    // Variable declaration
    char* __main__letters;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__letters = *reinterpret_cast<char**>(&__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__letters));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (53);
    // LHS
    // Variable declaration
    long __main__letters_size;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__letters_size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__letters_size));
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
    // Int Literal
    stack.push_back (0);
    // LHS
    // Variable declaration
    long __main__total;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__total = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__total));
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
        // Int Literal
        stack.push_back (0);
        // LHS
        // Variable declaration
        long __main__while__0__block__1__size;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__0__block__1__size = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__size));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
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
                    // Post-Increment
                    {
                        long __res = __main__while__0__block__1__size;
                        __main__while__0__block__1__size = __main__while__0__block__1__size + 1;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                }
                // RHS
                // Char Literal
                stack.push_back (static_cast<long>(static_cast<unsigned char>('\0')));
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
        }
        // End of While
        //-----------------------------------------------------------------
        // Statement
        // Pre-Decrement
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__size));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__0__block__1__size = __main__while__0__block__1__size - 1;
            __res = __main__while__0__block__1__size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
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
        long __main__while__0__block__1__c0;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__0__block__1__c0 = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__c0));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Division
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__size));
            // RHS
            // Int Literal
            stack.push_back (2);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) / *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Variable declaration
        long __main__while__0__block__1__e0;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__0__block__1__e0 = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__e0));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__e0));
        // LHS
        // Variable declaration
        long __main__while__0__block__1__c1;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__0__block__1__c1 = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__c1));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__size));
        // LHS
        // Variable declaration
        long __main__while__0__block__1__e1;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__0__block__1__e1 = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__e1));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Char Literal
        stack.push_back (static_cast<long>(static_cast<unsigned char>('0')));
        // LHS
        // Variable declaration
        char __main__while__0__block__1__common;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__0__block__1__common = static_cast<char>(static_cast<unsigned char>(__rhs));
        // Result of assignment
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__common)));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // For-Loop
        // Init
        // Assignment - '='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__c0));
        // LHS
        // Variable declaration
        long __main__while__0__block__1__for__3__i;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__0__block__1__for__3__i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__for__3__i));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__for__3__i));
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__e0));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) < *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __cond = stack.back ();
            stack.pop_back ();
            // break out of loop if condition is false
            if (__cond == 0) break;
            // Body
            //-------------------------------------------------------------
            // Code Block
            //-------------------------------------------------------------
            // For-Loop
            // Init
            // Assignment - '='
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__c1));
            // LHS
            // Variable declaration
            long __main__while__0__block__1__for__3__block__4__for__5__j;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__0__block__1__for__3__block__4__for__5__j = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__for__3__block__4__for__5__j));
            // We can ignore the init result
            stack.pop_back ();
            // Using an infinite loop so we can write a separate multi-line condition
            while (1)
            {
                // Condition
                // Less Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__for__3__block__4__for__5__j));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__e1));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = *reinterpret_cast<long*>(&__lhs) < *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                long __cond = stack.back ();
                stack.pop_back ();
                // break out of loop if condition is false
                if (__cond == 0) break;
                // Body
                //---------------------------------------------------------
                // Code Block
                //---------------------------------------------------------
                // If-Statement
                // Precomputing all if/elif conditions and give unique names
                // bc we can't have code between if and elif
                // Condition
                // Equal
                {
                    // LHS
                    // Subscript Expression
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__line));
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__for__3__i));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Subscript Expression
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__line));
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__for__3__block__4__for__5__j));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                long __if__7__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__7__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '='
                    // RHS
                    // Subscript Expression
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__line));
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__for__3__i));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__while__0__block__1__common = static_cast<char>(static_cast<unsigned char>(__rhs));
                    // Result of assignment
                    stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__common)));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
                // Update
                // Pre-Increment
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__for__3__block__4__for__5__j));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__while__0__block__1__for__3__block__4__for__5__j = __main__while__0__block__1__for__3__block__4__for__5__j + 1;
                    __res = __main__while__0__block__1__for__3__block__4__for__5__j;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // We can ignore the update result
                stack.pop_back ();
            }
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Update
            // Pre-Increment
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__for__3__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__0__block__1__for__3__i = __main__while__0__block__1__for__3__i + 1;
                __res = __main__while__0__block__1__for__3__i;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // We can ignore the update result
            stack.pop_back ();
        }
        //-----------------------------------------------------------------
        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Variable declaration
        long __main__while__0__block__1__score;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__0__block__1__score = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__score));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // For-Loop
        // Init
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Variable declaration
        long __main__while__0__block__1__for__9__i;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__0__block__1__for__9__i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__for__9__i));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__for__9__i));
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__letters_size));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) < *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __cond = stack.back ();
            stack.pop_back ();
            // break out of loop if condition is false
            if (__cond == 0) break;
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
                // Subscript Expression
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__letters));
                    // OFFSET
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__for__9__i));
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                }
                // RHS
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__0__block__1__common)));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__11__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__11__cond)
            {
                // Body
                // Statement
                // Assignment - '='
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__for__9__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__0__block__1__score = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__score));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

            }
            // End of if
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Update
            // Pre-Increment
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__for__9__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__0__block__1__for__9__i = __main__while__0__block__1__for__9__i + 1;
                __res = __main__while__0__block__1__for__9__i;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // We can ignore the update result
            stack.pop_back ();
        }
        //-----------------------------------------------------------------
        // Statement
        // Assignment - '+='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main__while__0__block__1__score));
        __rhs = stack.back ();
        stack.pop_back ();
        __main__total = __main__total + *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__total));
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
        stack.push_back (*reinterpret_cast<long*>(&__main__total));
        
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

