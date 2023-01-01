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
// Add forward decl for any inner functions and methods
class __main____Vector__char__1;
//=========================================================================
// Class Declaration - __main____Vector__char__1 inherits __builtin____main__Object
// Creating Dispatch Table (will be populated later)
void* __dtable____main____Vector__char__1[5];
class __main____Vector__char__1 : public __builtin____main__Object
{
    public:
    //---------------------------------------------------------------------
    // Field - char[][] Vector<:char[]:>::data
    // __field____main____Vector__char__1____data = 1
    char** __field____main____Vector__char__1____data;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Field - int Vector<:char[]:>::size
    // __field____main____Vector__char__1____size = 2
    long __field____main____Vector__char__1____size;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Field - int Vector<:char[]:>::capacity
    // __field____main____Vector__char__1____capacity = 3
    long __field____main____Vector__char__1____capacity;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Constructor Declaration - Vector<:char[]:>::Vector() -> Vector<:char[]:>
    __main____Vector__char__1 ()
    {
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
        // Add dispatch table to instance
        dtable = __dtable____main____Vector__char__1;
        __main____Vector__char__1* __this = this;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (10);
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____capacity = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____capacity));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Allocator
        {
            // Member Accessor obj.capacity
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____capacity;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __stackval = stack.back ();
            stack.pop_back ();
            char** __res = new char*[__stackval];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data = *reinterpret_cast<char***>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End Constructor Declaration - __ctor____main____Vector__char__1____Vector
    //---------------------------------------------------------------------

    //---------------------------------------------------------------------
    // Constructor Declaration - Vector<:char[]:>::Vector(int) -> Vector<:char[]:>
    __main____Vector__char__1 (long __main____Vector__char__1__Vector__size)
    {
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
        // Add dispatch table to instance
        dtable = __dtable____main____Vector__char__1;
        __main____Vector__char__1* __this = this;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Addition
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__1__Vector__size));
            // RHS
            // Int Literal
            stack.push_back (10);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____capacity = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____capacity));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__1__Vector__size));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Allocator
        {
            // Member Accessor obj.capacity
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____capacity;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __stackval = stack.back ();
            stack.pop_back ();
            char** __res = new char*[__stackval];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data = *reinterpret_cast<char***>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End Constructor Declaration - __ctor____main____Vector__char__1____Vector__int
    //---------------------------------------------------------------------

};
//-------------------------------------------------------------------------
// Method Declaration - Vector<:char[]:>::pushBack(char[]) -> void
void __method____main____Vector__char__1____pushBack__char__1 (__main____Vector__char__1* __this, char* __main____Vector__char__1__pushBack__val)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    //---------------------------------------------------------------------
    // If-Statement
    // Precomputing all if/elif conditions and give unique names
    // bc we can't have code between if and elif
    // Condition
    // Greater Than or Equal to
    {
        // LHS
        // Addition
        {
            // LHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Int Literal
            stack.push_back (1);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // RHS
        // Member Accessor obj.capacity
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____capacity;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) >= *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__3__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__3__cond)
    {
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Multiplication
        {
            // LHS
            // Member Accessor obj.capacity
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____capacity;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Int Literal
            stack.push_back (2);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) * *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____capacity = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____capacity));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Allocator
        {
            // Member Accessor obj.capacity
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____capacity;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __stackval = stack.back ();
            stack.pop_back ();
            char** __res = new char*[__stackval];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        char** __main____Vector__char__1__pushBack__block__2__if__3__block__4__nData;
        __rhs = stack.back ();
        stack.pop_back ();
        __main____Vector__char__1__pushBack__block__2__if__3__block__4__nData = *reinterpret_cast<char***>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main____Vector__char__1__pushBack__block__2__if__3__block__4__nData));
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
        long __main____Vector__char__1__pushBack__block__2__if__3__block__4__for__5__i;
        __rhs = stack.back ();
        stack.pop_back ();
        __main____Vector__char__1__pushBack__block__2__if__3__block__4__for__5__i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__1__pushBack__block__2__if__3__block__4__for__5__i));
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__1__pushBack__block__2__if__3__block__4__for__5__i));
                // RHS
                // Member Accessor obj.size
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__this));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
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
            // Statement
            // Assignment - '='
            // RHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__this));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__1__pushBack__block__2__if__3__block__4__for__5__i));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // LHS
            // Subscript assignment
            // LHS
            stack.push_back (reinterpret_cast<long>(__main____Vector__char__1__pushBack__block__2__if__3__block__4__nData));
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__1__pushBack__block__2__if__3__block__4__for__5__i));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            __rhs = stack.back ();
            stack.pop_back ();
            (*reinterpret_cast<char***>(&__pointer))[__offset] = *reinterpret_cast<char**>(&__rhs);
            // Result of assignment
            stack.push_back (reinterpret_cast<long>((*reinterpret_cast<char***>(&__pointer))[__offset]));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // Update
            // Pre-Increment
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__1__pushBack__block__2__if__3__block__4__for__5__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main____Vector__char__1__pushBack__block__2__if__3__block__4__for__5__i = __main____Vector__char__1__pushBack__block__2__if__3__block__4__for__5__i + 1;
                __res = __main____Vector__char__1__pushBack__block__2__if__3__block__4__for__5__i;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
        }
        //-----------------------------------------------------------------
        // Statement
        // Member Accessor obj.data
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        __stackval = stack.back ();
        stack.pop_back ();
        delete *reinterpret_cast<char***>(&__stackval);
        stack.push_back (0);
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (reinterpret_cast<long>(__main____Vector__char__1__pushBack__block__2__if__3__block__4__nData));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data = *reinterpret_cast<char***>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End of if
    //---------------------------------------------------------------------
    // Statement
    // Assignment - '='
    // RHS
    stack.push_back (reinterpret_cast<long>(__main____Vector__char__1__pushBack__val));
    // LHS
    // Subscript assignment
    // LHS
    // Member Accessor obj.data
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // OFFSET
    // Member Accessor obj.size
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        long __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    __offset = stack.back ();
    stack.pop_back ();
    __pointer = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (*reinterpret_cast<char***>(&__pointer))[__offset] = *reinterpret_cast<char**>(&__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((*reinterpret_cast<char***>(&__pointer))[__offset]));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Pre-Increment
    {
        // RHS
        // Member Accessor obj.size
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size + 1;
        __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__char__1____pushBack__char__1
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:char[]:>::popBack() -> char[]
char* __method____main____Vector__char__1____popBack (__main____Vector__char__1* __this)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Return
    // Subscript Expression
    {
        // LHS
        // Member Accessor obj.data
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Pre-Decrement
        {
            // RHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            // LHS
            // Member Accessor Assignment
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size - 1;
            __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __offset = stack.back ();
        stack.pop_back ();
        __pointer = stack.back ();
        stack.pop_back ();
        char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<void*>(__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__char__1____popBack
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:char[]:>::clear() -> void
void __method____main____Vector__char__1____clear (__main____Vector__char__1* __this)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    //---------------------------------------------------------------------
    // While-Loop
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Greater Than
        {
            // LHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Int Literal
            stack.push_back (0);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) > *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __cond = stack.back ();
        stack.pop_back ();
        // break out of loop if condition is false
        if (__cond == 0) break;
        // Body
        // Statement
        // Method Call - Vector<:char[]:>::popBack() -> char[]
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        {
            // Arguments
            __obj = stack.back ();
            stack.pop_back ();
            char* __res = __method____main____Vector__char__1____popBack (reinterpret_cast<__main____Vector__char__1*>(__obj));
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

    }
    // End of While
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__char__1____clear
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:char[]:>::get(int) -> char[]
char* __method____main____Vector__char__1____get__int (__main____Vector__char__1* __this, long __main____Vector__char__1__get__index)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Return
    // Subscript Expression
    {
        // LHS
        // Member Accessor obj.data
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__1__get__index));
        __offset = stack.back ();
        stack.pop_back ();
        __pointer = stack.back ();
        stack.pop_back ();
        char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<void*>(__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__char__1____get__int
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:char[]:>::set(int, char[]) -> void
void __method____main____Vector__char__1____set__int__char__1 (__main____Vector__char__1* __this, long __main____Vector__char__1__set__index, char* __main____Vector__char__1__set__value)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Assignment - '='
    // RHS
    stack.push_back (reinterpret_cast<long>(__main____Vector__char__1__set__value));
    // LHS
    // Subscript assignment
    // LHS
    // Member Accessor obj.data
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // OFFSET
    stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__1__set__index));
    __offset = stack.back ();
    stack.pop_back ();
    __pointer = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (*reinterpret_cast<char***>(&__pointer))[__offset] = *reinterpret_cast<char**>(&__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((*reinterpret_cast<char***>(&__pointer))[__offset]));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__char__1____set__int__char__1
//-------------------------------------------------------------------------

// End Class Declaration - __main____Vector__char__1
//=========================================================================

// Add forward decl for any inner functions and methods
class __main____Vector__Vector;
//=========================================================================
// Class Declaration - __main____Vector__Vector inherits __builtin____main__Object
// Creating Dispatch Table (will be populated later)
void* __dtable____main____Vector__Vector[5];
class __main____Vector__Vector : public __builtin____main__Object
{
    public:
    //---------------------------------------------------------------------
    // Field - Vector<:int:>[] Vector<:Vector<:int:>:>::data
    // __field____main____Vector__Vector____data = 1
    ** __field____main____Vector__Vector____data;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Field - int Vector<:Vector<:int:>:>::size
    // __field____main____Vector__Vector____size = 2
    long __field____main____Vector__Vector____size;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Field - int Vector<:Vector<:int:>:>::capacity
    // __field____main____Vector__Vector____capacity = 3
    long __field____main____Vector__Vector____capacity;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Constructor Declaration - Vector<:Vector<:int:>:>::Vector() -> Vector<:Vector<:int:>:>
    __main____Vector__Vector ()
    {
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
        // Add dispatch table to instance
        dtable = __dtable____main____Vector__Vector;
        __main____Vector__Vector* __this = this;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (10);
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____capacity = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____capacity));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Allocator
        {
            // Member Accessor obj.capacity
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____capacity;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __stackval = stack.back ();
            stack.pop_back ();
            ** __res = new *[__stackval];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data = reinterpret_cast<**>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End Constructor Declaration - __ctor____main____Vector__Vector____Vector
    //---------------------------------------------------------------------

    //---------------------------------------------------------------------
    // Constructor Declaration - Vector<:Vector<:int:>:>::Vector(int) -> Vector<:Vector<:int:>:>
    __main____Vector__Vector (long __main____Vector__Vector__Vector__size)
    {
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
        // Add dispatch table to instance
        dtable = __dtable____main____Vector__Vector;
        __main____Vector__Vector* __this = this;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Addition
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Vector__Vector__size));
            // RHS
            // Int Literal
            stack.push_back (10);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____capacity = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____capacity));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Vector__Vector__size));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Allocator
        {
            // Member Accessor obj.capacity
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____capacity;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __stackval = stack.back ();
            stack.pop_back ();
            ** __res = new *[__stackval];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data = reinterpret_cast<**>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End Constructor Declaration - __ctor____main____Vector__Vector____Vector__int
    //---------------------------------------------------------------------

};
//-------------------------------------------------------------------------
// Method Declaration - Vector<:Vector<:int:>:>::pushBack(Vector<:int:>) -> void
void __method____main____Vector__Vector____pushBack__Vector (__main____Vector__Vector* __this, * __main____Vector__Vector__pushBack__val)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    //---------------------------------------------------------------------
    // If-Statement
    // Precomputing all if/elif conditions and give unique names
    // bc we can't have code between if and elif
    // Condition
    // Greater Than or Equal to
    {
        // LHS
        // Addition
        {
            // LHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Int Literal
            stack.push_back (1);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // RHS
        // Member Accessor obj.capacity
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____capacity;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) >= *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__15__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__15__cond)
    {
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Multiplication
        {
            // LHS
            // Member Accessor obj.capacity
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____capacity;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Int Literal
            stack.push_back (2);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) * *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____capacity = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____capacity));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Allocator
        {
            // Member Accessor obj.capacity
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____capacity;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __stackval = stack.back ();
            stack.pop_back ();
            ** __res = new *[__stackval];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        ** __main____Vector__Vector__pushBack__block__14__if__15__block__16__nData;
        __rhs = stack.back ();
        stack.pop_back ();
        __main____Vector__Vector__pushBack__block__14__if__15__block__16__nData = reinterpret_cast<**>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main____Vector__Vector__pushBack__block__14__if__15__block__16__nData));
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
        long __main____Vector__Vector__pushBack__block__14__if__15__block__16__for__17__i;
        __rhs = stack.back ();
        stack.pop_back ();
        __main____Vector__Vector__pushBack__block__14__if__15__block__16__for__17__i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Vector__pushBack__block__14__if__15__block__16__for__17__i));
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Vector__pushBack__block__14__if__15__block__16__for__17__i));
                // RHS
                // Member Accessor obj.size
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__this));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
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
            // Statement
            // Assignment - '='
            // RHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__this));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    ** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Vector__pushBack__block__14__if__15__block__16__for__17__i));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                * __res = (reinterpret_cast<**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // LHS
            // Subscript assignment
            // LHS
            stack.push_back (reinterpret_cast<long>(__main____Vector__Vector__pushBack__block__14__if__15__block__16__nData));
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Vector__pushBack__block__14__if__15__block__16__for__17__i));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            __rhs = stack.back ();
            stack.pop_back ();
            (reinterpret_cast<**>(__pointer))[__offset] = reinterpret_cast<*>(__rhs);
            // Result of assignment
            stack.push_back (reinterpret_cast<long>((reinterpret_cast<**>(__pointer))[__offset]));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // Update
            // Pre-Increment
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Vector__pushBack__block__14__if__15__block__16__for__17__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main____Vector__Vector__pushBack__block__14__if__15__block__16__for__17__i = __main____Vector__Vector__pushBack__block__14__if__15__block__16__for__17__i + 1;
                __res = __main____Vector__Vector__pushBack__block__14__if__15__block__16__for__17__i;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
        }
        //-----------------------------------------------------------------
        // Statement
        // Member Accessor obj.data
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            ** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        __stackval = stack.back ();
        stack.pop_back ();
        delete reinterpret_cast<**>(__stackval);
        stack.push_back (0);
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (reinterpret_cast<long>(__main____Vector__Vector__pushBack__block__14__if__15__block__16__nData));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data = reinterpret_cast<**>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End of if
    //---------------------------------------------------------------------
    // Statement
    // Assignment - '='
    // RHS
    stack.push_back (reinterpret_cast<long>(__main____Vector__Vector__pushBack__val));
    // LHS
    // Subscript assignment
    // LHS
    // Member Accessor obj.data
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        ** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // OFFSET
    // Member Accessor obj.size
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        long __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    __offset = stack.back ();
    stack.pop_back ();
    __pointer = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (reinterpret_cast<**>(__pointer))[__offset] = reinterpret_cast<*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<**>(__pointer))[__offset]));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Pre-Increment
    {
        // RHS
        // Member Accessor obj.size
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size + 1;
        __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__Vector____pushBack__Vector
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Vector<:int:>:>::popBack() -> Vector<:int:>
* __method____main____Vector__Vector____popBack (__main____Vector__Vector* __this)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Return
    // Subscript Expression
    {
        // LHS
        // Member Accessor obj.data
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            ** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Pre-Decrement
        {
            // RHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            // LHS
            // Member Accessor Assignment
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size - 1;
            __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __offset = stack.back ();
        stack.pop_back ();
        __pointer = stack.back ();
        stack.pop_back ();
        * __res = (reinterpret_cast<**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<void*>(__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__Vector____popBack
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Vector<:int:>:>::clear() -> void
void __method____main____Vector__Vector____clear (__main____Vector__Vector* __this)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    //---------------------------------------------------------------------
    // While-Loop
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Greater Than
        {
            // LHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Int Literal
            stack.push_back (0);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) > *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __cond = stack.back ();
        stack.pop_back ();
        // break out of loop if condition is false
        if (__cond == 0) break;
        // Body
        // Statement
        // Method Call - Vector<:Vector<:int:>:>::popBack() -> Vector<:int:>
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        {
            // Arguments
            __obj = stack.back ();
            stack.pop_back ();
            * __res = __method____main____Vector__Vector____popBack (reinterpret_cast<__main____Vector__Vector*>(__obj));
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

    }
    // End of While
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__Vector____clear
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Vector<:int:>:>::get(int) -> Vector<:int:>
* __method____main____Vector__Vector____get__int (__main____Vector__Vector* __this, long __main____Vector__Vector__get__index)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Return
    // Subscript Expression
    {
        // LHS
        // Member Accessor obj.data
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            ** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Vector__get__index));
        __offset = stack.back ();
        stack.pop_back ();
        __pointer = stack.back ();
        stack.pop_back ();
        * __res = (reinterpret_cast<**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<void*>(__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__Vector____get__int
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Vector<:int:>:>::set(int, Vector<:int:>) -> void
void __method____main____Vector__Vector____set__int__Vector (__main____Vector__Vector* __this, long __main____Vector__Vector__set__index, * __main____Vector__Vector__set__value)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Assignment - '='
    // RHS
    stack.push_back (reinterpret_cast<long>(__main____Vector__Vector__set__value));
    // LHS
    // Subscript assignment
    // LHS
    // Member Accessor obj.data
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        ** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // OFFSET
    stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Vector__set__index));
    __offset = stack.back ();
    stack.pop_back ();
    __pointer = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (reinterpret_cast<**>(__pointer))[__offset] = reinterpret_cast<*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<**>(__pointer))[__offset]));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__Vector____set__int__Vector
//-------------------------------------------------------------------------

// End Class Declaration - __main____Vector__Vector
//=========================================================================

// Add forward decl for any inner functions and methods
class __main____Vector__int;
//=========================================================================
// Class Declaration - __main____Vector__int inherits __builtin____main__Object
// Creating Dispatch Table (will be populated later)
void* __dtable____main____Vector__int[5];
class __main____Vector__int : public __builtin____main__Object
{
    public:
    //---------------------------------------------------------------------
    // Field - int[] Vector<:int:>::data
    // __field____main____Vector__int____data = 1
    long* __field____main____Vector__int____data;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Field - int Vector<:int:>::size
    // __field____main____Vector__int____size = 2
    long __field____main____Vector__int____size;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Field - int Vector<:int:>::capacity
    // __field____main____Vector__int____capacity = 3
    long __field____main____Vector__int____capacity;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Constructor Declaration - Vector<:int:>::Vector() -> Vector<:int:>
    __main____Vector__int ()
    {
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
        // Add dispatch table to instance
        dtable = __dtable____main____Vector__int;
        __main____Vector__int* __this = this;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (10);
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____capacity = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____capacity));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Allocator
        {
            // Member Accessor obj.capacity
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____capacity;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __stackval = stack.back ();
            stack.pop_back ();
            long* __res = new long[__stackval];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End Constructor Declaration - __ctor____main____Vector__int____Vector
    //---------------------------------------------------------------------

    //---------------------------------------------------------------------
    // Constructor Declaration - Vector<:int:>::Vector(int) -> Vector<:int:>
    __main____Vector__int (long __main____Vector__int__Vector__size)
    {
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
        // Add dispatch table to instance
        dtable = __dtable____main____Vector__int;
        __main____Vector__int* __this = this;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Addition
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main____Vector__int__Vector__size));
            // RHS
            // Int Literal
            stack.push_back (10);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____capacity = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____capacity));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__int__Vector__size));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Allocator
        {
            // Member Accessor obj.capacity
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____capacity;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __stackval = stack.back ();
            stack.pop_back ();
            long* __res = new long[__stackval];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End Constructor Declaration - __ctor____main____Vector__int____Vector__int
    //---------------------------------------------------------------------

};
//-------------------------------------------------------------------------
// Method Declaration - Vector<:int:>::pushBack(int) -> void
void __method____main____Vector__int____pushBack__int (__main____Vector__int* __this, long __main____Vector__int__pushBack__val)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    //---------------------------------------------------------------------
    // If-Statement
    // Precomputing all if/elif conditions and give unique names
    // bc we can't have code between if and elif
    // Condition
    // Greater Than or Equal to
    {
        // LHS
        // Addition
        {
            // LHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Int Literal
            stack.push_back (1);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // RHS
        // Member Accessor obj.capacity
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____capacity;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) >= *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__27__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__27__cond)
    {
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Multiplication
        {
            // LHS
            // Member Accessor obj.capacity
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____capacity;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Int Literal
            stack.push_back (2);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) * *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____capacity = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____capacity));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Allocator
        {
            // Member Accessor obj.capacity
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____capacity;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __stackval = stack.back ();
            stack.pop_back ();
            long* __res = new long[__stackval];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        long* __main____Vector__int__pushBack__block__26__if__27__block__28__nData;
        __rhs = stack.back ();
        stack.pop_back ();
        __main____Vector__int__pushBack__block__26__if__27__block__28__nData = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main____Vector__int__pushBack__block__26__if__27__block__28__nData));
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
        long __main____Vector__int__pushBack__block__26__if__27__block__28__for__29__i;
        __rhs = stack.back ();
        stack.pop_back ();
        __main____Vector__int__pushBack__block__26__if__27__block__28__for__29__i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__int__pushBack__block__26__if__27__block__28__for__29__i));
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__int__pushBack__block__26__if__27__block__28__for__29__i));
                // RHS
                // Member Accessor obj.size
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__this));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
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
            // Statement
            // Assignment - '='
            // RHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__this));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__int__pushBack__block__26__if__27__block__28__for__29__i));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // LHS
            // Subscript assignment
            // LHS
            stack.push_back (reinterpret_cast<long>(__main____Vector__int__pushBack__block__26__if__27__block__28__nData));
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main____Vector__int__pushBack__block__26__if__27__block__28__for__29__i));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            __rhs = stack.back ();
            stack.pop_back ();
            (*reinterpret_cast<long**>(&__pointer))[__offset] = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // Update
            // Pre-Increment
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__int__pushBack__block__26__if__27__block__28__for__29__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main____Vector__int__pushBack__block__26__if__27__block__28__for__29__i = __main____Vector__int__pushBack__block__26__if__27__block__28__for__29__i + 1;
                __res = __main____Vector__int__pushBack__block__26__if__27__block__28__for__29__i;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
        }
        //-----------------------------------------------------------------
        // Statement
        // Member Accessor obj.data
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        __stackval = stack.back ();
        stack.pop_back ();
        delete *reinterpret_cast<long**>(&__stackval);
        stack.push_back (0);
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (reinterpret_cast<long>(__main____Vector__int__pushBack__block__26__if__27__block__28__nData));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End of if
    //---------------------------------------------------------------------
    // Statement
    // Assignment - '='
    // RHS
    stack.push_back (*reinterpret_cast<long*>(&__main____Vector__int__pushBack__val));
    // LHS
    // Subscript assignment
    // LHS
    // Member Accessor obj.data
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // OFFSET
    // Member Accessor obj.size
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        long __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    __offset = stack.back ();
    stack.pop_back ();
    __pointer = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (*reinterpret_cast<long**>(&__pointer))[__offset] = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Pre-Increment
    {
        // RHS
        // Member Accessor obj.size
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size + 1;
        __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__int____pushBack__int
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:int:>::popBack() -> int
long __method____main____Vector__int____popBack (__main____Vector__int* __this)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Return
    // Subscript Expression
    {
        // LHS
        // Member Accessor obj.data
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Pre-Decrement
        {
            // RHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            // LHS
            // Member Accessor Assignment
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size - 1;
            __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __offset = stack.back ();
        stack.pop_back ();
        __pointer = stack.back ();
        stack.pop_back ();
        long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return *reinterpret_cast<long*>(&__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__int____popBack
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:int:>::clear() -> void
void __method____main____Vector__int____clear (__main____Vector__int* __this)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    //---------------------------------------------------------------------
    // While-Loop
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Greater Than
        {
            // LHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__this));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Int Literal
            stack.push_back (0);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) > *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __cond = stack.back ();
        stack.pop_back ();
        // break out of loop if condition is false
        if (__cond == 0) break;
        // Body
        // Statement
        // Method Call - Vector<:int:>::popBack() -> int
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        {
            // Arguments
            __obj = stack.back ();
            stack.pop_back ();
            long __res = __method____main____Vector__int____popBack (reinterpret_cast<__main____Vector__int*>(__obj));
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

    }
    // End of While
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__int____clear
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:int:>::get(int) -> int
long __method____main____Vector__int____get__int (__main____Vector__int* __this, long __main____Vector__int__get__index)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Return
    // Subscript Expression
    {
        // LHS
        // Member Accessor obj.data
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__int__get__index));
        __offset = stack.back ();
        stack.pop_back ();
        __pointer = stack.back ();
        stack.pop_back ();
        long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return *reinterpret_cast<long*>(&__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__int____get__int
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:int:>::set(int, int) -> void
void __method____main____Vector__int____set__int__int (__main____Vector__int* __this, long __main____Vector__int__set__index, long __main____Vector__int__set__value)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Assignment - '='
    // RHS
    stack.push_back (*reinterpret_cast<long*>(&__main____Vector__int__set__value));
    // LHS
    // Subscript assignment
    // LHS
    // Member Accessor obj.data
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // OFFSET
    stack.push_back (*reinterpret_cast<long*>(&__main____Vector__int__set__index));
    __offset = stack.back ();
    stack.pop_back ();
    __pointer = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (*reinterpret_cast<long**>(&__pointer))[__offset] = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__int____set__int__int
//-------------------------------------------------------------------------

// End Class Declaration - __main____Vector__int
//=========================================================================

//=========================================================================
// Function Declaration - strlen(char[]) -> int
long __main____strlen__char__1 (char* __main__strlen__str)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    //---------------------------------------------------------------------
    // If-Statement
    // Precomputing all if/elif conditions and give unique names
    // bc we can't have code between if and elif
    // Condition
    // Equal
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__main__strlen__str));
        // RHS
        // Null Literal
        stack.push_back (None)
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<char**>(&__lhs) == <unknown-conversion>*;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__37__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__37__cond)
    {
        // Body
        // Return
        // Negative
        {
            // RHS
            // Int Literal
            stack.push_back (1);
            __rhs = stack.back ();
            stack.pop_back ();
            long __res = -*reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __res = stack.back ();
        stack.pop_back ();
        return *reinterpret_cast<long*>(&__res);
    }
    // End of if
    //---------------------------------------------------------------------
    // Statement
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (0);
    // LHS
    // Variable declaration
    long __main__strlen__block__36__size;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strlen__block__36__size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strlen__block__36__size));
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
                stack.push_back (reinterpret_cast<long>(__main__strlen__str));
                // OFFSET
                // Post-Increment
                {
                    long __res = __main__strlen__block__36__size;
                    __main__strlen__block__36__size = __main__strlen__block__36__size + 1;
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
    //---------------------------------------------------------------------
    // Return
    // Subtraction
    {
        // LHS
        stack.push_back (*reinterpret_cast<long*>(&__main__strlen__block__36__size));
        // RHS
        // Int Literal
        stack.push_back (1);
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return *reinterpret_cast<long*>(&__res);
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____strlen__char__1
//=========================================================================

//=========================================================================
// Function Declaration - strcmp(char[], char[]) -> int
long __main____strcmp__char__1__char__1 (char* __main__strcmp__a, char* __main__strcmp__b)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Assignment - '='
    // RHS
    // Function Call - strlen(char[]) -> int
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(__main__strcmp__a));
        
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        char* __arg0 = *reinterpret_cast<char**>(&__stackval);
        // strlen
        long __res = __main____strlen__char__1 (__arg0);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // LHS
    // Variable declaration
    long __main__strcmp__block__39__asize;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strcmp__block__39__asize = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__39__asize));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Function Call - strlen(char[]) -> int
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(__main__strcmp__b));
        
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        char* __arg0 = *reinterpret_cast<char**>(&__stackval);
        // strlen
        long __res = __main____strlen__char__1 (__arg0);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // LHS
    // Variable declaration
    long __main__strcmp__block__39__bsize;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strcmp__block__39__bsize = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__39__bsize));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
    // If-Statement
    // Precomputing all if/elif conditions and give unique names
    // bc we can't have code between if and elif
    // Condition
    // Not Equal
    {
        // LHS
        stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__39__asize));
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__39__bsize));
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) != *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__40__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__40__cond)
    {
        // Body
        // Return
        // Int Literal
        stack.push_back (0);
        __res = stack.back ();
        stack.pop_back ();
        return *reinterpret_cast<long*>(&__res);
    }
    // End of if
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // For-Loop
    // Init
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (0);
    // LHS
    // Variable declaration
    long __main__strcmp__block__39__for__41__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strcmp__block__39__for__41__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__39__for__41__i));
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__39__for__41__i));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__39__asize));
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
        //-----------------------------------------------------------------
        // Code Block
        //-----------------------------------------------------------------
        // If-Statement
        // Precomputing all if/elif conditions and give unique names
        // bc we can't have code between if and elif
        // Condition
        // Not Equal
        {
            // LHS
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__strcmp__a));
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__39__for__41__i));
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
                stack.push_back (reinterpret_cast<long>(__main__strcmp__b));
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__39__for__41__i));
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
            long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__43__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__43__cond)
        {
            // Body
            //-------------------------------------------------------------
            // Code Block
            // Return
            // Int Literal
            stack.push_back (0);
            __res = stack.back ();
            stack.pop_back ();
            return *reinterpret_cast<long*>(&__res);
            //-------------------------------------------------------------
        }
        // End of if
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // Update
        // Pre-Increment
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__39__for__41__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__strcmp__block__39__for__41__i = __main__strcmp__block__39__for__41__i + 1;
            __res = __main__strcmp__block__39__for__41__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
    }
    //---------------------------------------------------------------------
    // Return
    // Int Literal
    stack.push_back (1);
    __res = stack.back ();
    stack.pop_back ();
    return *reinterpret_cast<long*>(&__res);
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____strcmp__char__1__char__1
//=========================================================================

//=========================================================================
// Function Declaration - substr(char[], int, int) -> char[]
char* __main____substr__char__1__int__int (char* __main__substr__a, long __main__substr__start, long __main__substr__end)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Assignment - '='
    // RHS
    // Array Allocator
    {
        // Addition
        {
            // LHS
            // Subtraction
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__substr__end));
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__substr__start));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Int Literal
            stack.push_back (1);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __stackval = stack.back ();
        stack.pop_back ();
        char* __res = new char[__stackval];
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // LHS
    // Variable declaration
    char* __main__substr__block__45__res;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__substr__block__45__res = *reinterpret_cast<char**>(&__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__substr__block__45__res));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
    // For-Loop
    // Init
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (0);
    // LHS
    // Variable declaration
    long __main__substr__block__45__for__46__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__substr__block__45__for__46__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__45__for__46__i));
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__45__for__46__i));
            // RHS
            // Subtraction
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__substr__end));
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__substr__start));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
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
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__substr__a));
            // OFFSET
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__45__for__46__i));
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__substr__start));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
        }
        // LHS
        // Subscript assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__main__substr__block__45__res));
        // OFFSET
        stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__45__for__46__i));
        __offset = stack.back ();
        stack.pop_back ();
        __pointer = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (*reinterpret_cast<char**>(&__pointer))[__offset] = static_cast<char>(static_cast<unsigned char>(__rhs));
        // Result of assignment
        stack.push_back (static_cast<long>(static_cast<unsigned char>((*reinterpret_cast<char**>(&__pointer))[__offset])));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // Update
        // Pre-Increment
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__45__for__46__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__substr__block__45__for__46__i = __main__substr__block__45__for__46__i + 1;
            __res = __main__substr__block__45__for__46__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
    }
    //---------------------------------------------------------------------
    // Statement
    // Assignment - '='
    // RHS
    // Char Literal
    stack.push_back (static_cast<long>(static_cast<unsigned char>('\0')));
    // LHS
    // Subscript assignment
    // LHS
    stack.push_back (reinterpret_cast<long>(__main__substr__block__45__res));
    // OFFSET
    // Subtraction
    {
        // LHS
        stack.push_back (*reinterpret_cast<long*>(&__main__substr__end));
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main__substr__start));
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    __offset = stack.back ();
    stack.pop_back ();
    __pointer = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (*reinterpret_cast<char**>(&__pointer))[__offset] = static_cast<char>(static_cast<unsigned char>(__rhs));
    // Result of assignment
    stack.push_back (static_cast<long>(static_cast<unsigned char>((*reinterpret_cast<char**>(&__pointer))[__offset])));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Return
    stack.push_back (reinterpret_cast<long>(__main__substr__block__45__res));
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<void*>(__res);
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____substr__char__1__int__int
//=========================================================================

//=========================================================================
// Function Declaration - first_index_of(char[], char) -> int
long __main____first_index_of__char__1__char (char* __main__first_index_of__arr, char __main__first_index_of__c)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Assignment - '='
    // RHS
    // Function Call - strlen(char[]) -> int
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(__main__first_index_of__arr));
        
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        char* __arg0 = *reinterpret_cast<char**>(&__stackval);
        // strlen
        long __res = __main____strlen__char__1 (__arg0);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // LHS
    // Variable declaration
    long __main__first_index_of__block__48__size;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__first_index_of__block__48__size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__48__size));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
    // For-Loop
    // Init
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (0);
    // LHS
    // Variable declaration
    long __main__first_index_of__block__48__for__49__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__first_index_of__block__48__for__49__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__48__for__49__i));
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__48__for__49__i));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__48__size));
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
        //-----------------------------------------------------------------
        // Code Block
        //-----------------------------------------------------------------
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
                stack.push_back (reinterpret_cast<long>(__main__first_index_of__arr));
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__48__for__49__i));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
            }
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__first_index_of__c)));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__51__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__51__cond)
        {
            // Body
            // Return
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__48__for__49__i));
            __res = stack.back ();
            stack.pop_back ();
            return *reinterpret_cast<long*>(&__res);
        }
        // End of if
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // Update
        // Pre-Increment
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__48__for__49__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__first_index_of__block__48__for__49__i = __main__first_index_of__block__48__for__49__i + 1;
            __res = __main__first_index_of__block__48__for__49__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
    }
    //---------------------------------------------------------------------
    // Return
    // Negative
    {
        // RHS
        // Int Literal
        stack.push_back (1);
        __rhs = stack.back ();
        stack.pop_back ();
        long __res = -*reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return *reinterpret_cast<long*>(&__res);
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____first_index_of__char__1__char
//=========================================================================

//=========================================================================
// Function Declaration - split(char[], char) -> Vector<:char[]:>
__main____Vector__char__1* __main____split__char__1__char (char* __main__split__str, char __main__split__delim)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - Vector<:char[]:>::Vector() -> Vector<:char[]:>
    // Arguments
    stack.push_back (reinterpret_cast<long>(new __main____Vector__char__1 ()));
    // LHS
    // Variable declaration
    __main____Vector__char__1* __main__split__block__52__tokens;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__52__tokens = reinterpret_cast<__main____Vector__char__1*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__split__block__52__tokens));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Function Call - strlen(char[]) -> int
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(__main__split__str));
        
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        char* __arg0 = *reinterpret_cast<char**>(&__stackval);
        // strlen
        long __res = __main____strlen__char__1 (__arg0);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // LHS
    // Variable declaration
    long __main__split__block__52__size;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__52__size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__size));
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
    long __main__split__block__52__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__52__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__i));
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
    long __main__split__block__52__j;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__52__j = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__j));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
    // While-Loop
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__i));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__size));
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
        //-----------------------------------------------------------------
        // Code Block
        //-----------------------------------------------------------------
        // If-Statement
        // Precomputing all if/elif conditions and give unique names
        // bc we can't have code between if and elif
        // Condition
        // Not Equal
        {
            // LHS
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__split__str));
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__i));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
            }
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__split__delim)));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__55__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__55__cond)
        {
            // Body
            //-------------------------------------------------------------
            // Code Block
            // Statement
            // Assignment - '='
            // RHS
            // Int Literal
            stack.push_back (0);
            // LHS
            // Variable declaration
            long __main__split__block__52__while__53__block__54__if__55__block__56__count;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__52__while__53__block__54__if__55__block__56__count = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__while__53__block__54__if__55__block__56__count));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__i));
            // LHS
            // Variable declaration
            long __main__split__block__52__while__53__block__54__if__55__block__56__k;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__52__while__53__block__54__if__55__block__56__k = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__while__53__block__54__if__55__block__56__k));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // While-Loop
            // Using an infinite loop so we can write a separate multi-line condition
            while (1)
            {
                // Condition
                // Less Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__while__53__block__54__if__55__block__56__k));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__size));
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
                // If-Statement
                // Precomputing all if/elif conditions and give unique names
                // bc we can't have code between if and elif
                // Condition
                // Not Equal
                {
                    // LHS
                    // Subscript Expression
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__split__str));
                        // OFFSET
                        // Post-Increment
                        {
                            long __res = __main__split__block__52__while__53__block__54__if__55__block__56__k;
                            __main__split__block__52__while__53__block__54__if__55__block__56__k = __main__split__block__52__while__53__block__54__if__55__block__56__k + 1;
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
                    stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__split__delim)));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                long __if__58__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__58__cond)
                {
                    // Body
                    // Statement
                    // Pre-Increment
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__while__53__block__54__if__55__block__56__count));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__split__block__52__while__53__block__54__if__55__block__56__count = __main__split__block__52__while__53__block__54__if__55__block__56__count + 1;
                        __res = __main__split__block__52__while__53__block__54__if__55__block__56__count;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                }
                //---------------------------------------------------------
                // Else-Statement
                else
                {
                    // Break out of __while__57
                    break;
                }
                //---------------------------------------------------------
                // End of if
                //---------------------------------------------------------
            }
            // End of While
            //-------------------------------------------------------------
            // Statement
            // Method Call - Vector<:char[]:>::pushBack(char[]) -> void
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__split__block__52__tokens));
            // RHS
            {
                // Arguments
                // Array Allocator
                {
                    // Addition
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__while__53__block__54__if__55__block__56__count));
                        // RHS
                        // Int Literal
                        stack.push_back (1);
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __stackval = stack.back ();
                    stack.pop_back ();
                    char* __res = new char[__stackval];
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                __obj = stack.back ();
                stack.pop_back ();
                __method____main____Vector__char__1____pushBack__char__1 (reinterpret_cast<__main____Vector__char__1*>(__obj), __arg0);
                // push dummy value - method rtype is void
                stack.push_back (0);
            }
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // For-Loop
            // Init
            // Assignment - '='
            // RHS
            // Int Literal
            stack.push_back (0);
            // LHS
            // Variable declaration
            long __main__split__block__52__while__53__block__54__if__55__block__56__for__59__k;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__52__while__53__block__54__if__55__block__56__for__59__k = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__while__53__block__54__if__55__block__56__for__59__k));
            // Using an infinite loop so we can write a separate multi-line condition
            while (1)
            {
                // Condition
                // Less Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__while__53__block__54__if__55__block__56__for__59__k));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__while__53__block__54__if__55__block__56__count));
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
                // Statement
                // Assignment - '='
                // RHS
                // Subscript Expression
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__split__str));
                    // OFFSET
                    // Post-Increment
                    {
                        long __res = __main__split__block__52__i;
                        __main__split__block__52__i = __main__split__block__52__i + 1;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                }
                // LHS
                // Subscript assignment
                // LHS
                // Subscript Expression
                {
                    // LHS
                    // Member Accessor obj.data
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__split__block__52__tokens));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__j));
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__while__53__block__54__if__55__block__56__for__59__k));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                __rhs = stack.back ();
                stack.pop_back ();
                (*reinterpret_cast<char**>(&__pointer))[__offset] = static_cast<char>(static_cast<unsigned char>(__rhs));
                // Result of assignment
                stack.push_back (static_cast<long>(static_cast<unsigned char>((*reinterpret_cast<char**>(&__pointer))[__offset])));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
                // Update
                // Pre-Increment
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__while__53__block__54__if__55__block__56__for__59__k));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__split__block__52__while__53__block__54__if__55__block__56__for__59__k = __main__split__block__52__while__53__block__54__if__55__block__56__for__59__k + 1;
                    __res = __main__split__block__52__while__53__block__54__if__55__block__56__for__59__k;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
            }
            //-------------------------------------------------------------
            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('\0')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__split__block__52__tokens));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__j));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__while__53__block__54__if__55__block__56__count));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            __rhs = stack.back ();
            stack.pop_back ();
            (*reinterpret_cast<char**>(&__pointer))[__offset] = static_cast<char>(static_cast<unsigned char>(__rhs));
            // Result of assignment
            stack.push_back (static_cast<long>(static_cast<unsigned char>((*reinterpret_cast<char**>(&__pointer))[__offset])));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Pre-Increment
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__j));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__split__block__52__j = __main__split__block__52__j + 1;
                __res = __main__split__block__52__j;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
        }
        // End of if
        //-----------------------------------------------------------------
        // Statement
        // Pre-Increment
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__52__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__52__i = __main__split__block__52__i + 1;
            __res = __main__split__block__52__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End of While
    //---------------------------------------------------------------------
    // Return
    stack.push_back (reinterpret_cast<long>(__main__split__block__52__tokens));
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<void*>(__res);
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____split__char__1__char
//=========================================================================

//=========================================================================
// Function Declaration - max(int, int) -> int
long __main____max__int__int (long __main__max__a, long __main__max__b)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    //---------------------------------------------------------------------
    // If-Statement
    // Precomputing all if/elif conditions and give unique names
    // bc we can't have code between if and elif
    // Condition
    // Greater Than or Equal to
    {
        // LHS
        stack.push_back (*reinterpret_cast<long*>(&__main__max__a));
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main__max__b));
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) >= *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__62__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__62__cond)
    {
        // Body
        // Return
        stack.push_back (*reinterpret_cast<long*>(&__main__max__a));
        __res = stack.back ();
        stack.pop_back ();
        return *reinterpret_cast<long*>(&__res);
    }
    // End of if
    //---------------------------------------------------------------------
    // Return
    stack.push_back (*reinterpret_cast<long*>(&__main__max__b));
    __res = stack.back ();
    stack.pop_back ();
    return *reinterpret_cast<long*>(&__res);
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____max__int__int
//=========================================================================

//=========================================================================
// Function Declaration - max(float, float) -> float
double __main____max__float__float (double __main__max__a, double __main__max__b)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    //---------------------------------------------------------------------
    // If-Statement
    // Precomputing all if/elif conditions and give unique names
    // bc we can't have code between if and elif
    // Condition
    // Greater Than or Equal to
    {
        // LHS
        stack.push_back (*reinterpret_cast<long*>(&__main__max__a));
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main__max__b));
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<double*>(&__lhs) >= *reinterpret_cast<double*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__64__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__64__cond)
    {
        // Body
        // Return
        stack.push_back (*reinterpret_cast<long*>(&__main__max__a));
        __res = stack.back ();
        stack.pop_back ();
        return *reinterpret_cast<double*>(&__res);
    }
    // End of if
    //---------------------------------------------------------------------
    // Return
    stack.push_back (*reinterpret_cast<long*>(&__main__max__b));
    __res = stack.back ();
    stack.pop_back ();
    return *reinterpret_cast<double*>(&__res);
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____max__float__float
//=========================================================================

//=========================================================================
// Function Declaration - min(int, int) -> int
long __main____min__int__int (long __main__min__a, long __main__min__b)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    //---------------------------------------------------------------------
    // If-Statement
    // Precomputing all if/elif conditions and give unique names
    // bc we can't have code between if and elif
    // Condition
    // Less Than or Equal to
    {
        // LHS
        stack.push_back (*reinterpret_cast<long*>(&__main__min__a));
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main__min__b));
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) <= *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__66__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__66__cond)
    {
        // Body
        // Return
        stack.push_back (*reinterpret_cast<long*>(&__main__min__a));
        __res = stack.back ();
        stack.pop_back ();
        return *reinterpret_cast<long*>(&__res);
    }
    // End of if
    //---------------------------------------------------------------------
    // Return
    stack.push_back (*reinterpret_cast<long*>(&__main__min__b));
    __res = stack.back ();
    stack.pop_back ();
    return *reinterpret_cast<long*>(&__res);
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____min__int__int
//=========================================================================

//=========================================================================
// Function Declaration - min(float, float) -> float
double __main____min__float__float (double __main__min__a, double __main__min__b)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    //---------------------------------------------------------------------
    // If-Statement
    // Precomputing all if/elif conditions and give unique names
    // bc we can't have code between if and elif
    // Condition
    // Less Than or Equal to
    {
        // LHS
        stack.push_back (*reinterpret_cast<long*>(&__main__min__a));
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main__min__b));
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<double*>(&__lhs) <= *reinterpret_cast<double*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__68__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__68__cond)
    {
        // Body
        // Return
        stack.push_back (*reinterpret_cast<long*>(&__main__min__a));
        __res = stack.back ();
        stack.pop_back ();
        return *reinterpret_cast<double*>(&__res);
    }
    // End of if
    //---------------------------------------------------------------------
    // Return
    stack.push_back (*reinterpret_cast<long*>(&__main__min__b));
    __res = stack.back ();
    stack.pop_back ();
    return *reinterpret_cast<double*>(&__res);
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____min__float__float
//=========================================================================

//=========================================================================
// Function Declaration - abs(int) -> int
long __main____abs__int (long __main__abs__v)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    //---------------------------------------------------------------------
    // If-Statement
    // Precomputing all if/elif conditions and give unique names
    // bc we can't have code between if and elif
    // Condition
    // Less Than
    {
        // LHS
        stack.push_back (*reinterpret_cast<long*>(&__main__abs__v));
        // RHS
        // Int Literal
        stack.push_back (0);
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) < *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__70__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__70__cond)
    {
        // Body
        // Return
        // Negative
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__abs__v));
            __rhs = stack.back ();
            stack.pop_back ();
            long __res = -*reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __res = stack.back ();
        stack.pop_back ();
        return *reinterpret_cast<long*>(&__res);
    }
    // End of if
    //---------------------------------------------------------------------
    // Return
    stack.push_back (*reinterpret_cast<long*>(&__main__abs__v));
    __res = stack.back ();
    stack.pop_back ();
    return *reinterpret_cast<long*>(&__res);
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____abs__int
//=========================================================================

//=========================================================================
// Function Declaration - abs(float) -> float
double __main____abs__float (double __main__abs__v)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    //---------------------------------------------------------------------
    // If-Statement
    // Precomputing all if/elif conditions and give unique names
    // bc we can't have code between if and elif
    // Condition
    // Less Than
    {
        // LHS
        stack.push_back (*reinterpret_cast<long*>(&__main__abs__v));
        // RHS
        // Float Literal
        {
            double float_literal = 0.0;
            stack.push_back (*reinterpret_cast<long*>(&float_literal));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<double*>(&__lhs) < *reinterpret_cast<double*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__72__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__72__cond)
    {
        // Body
        // Return
        // Negative
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__abs__v));
            __rhs = stack.back ();
            stack.pop_back ();
            double __res = -*reinterpret_cast<double*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __res = stack.back ();
        stack.pop_back ();
        return *reinterpret_cast<double*>(&__res);
    }
    // End of if
    //---------------------------------------------------------------------
    // Return
    stack.push_back (*reinterpret_cast<long*>(&__main__abs__v));
    __res = stack.back ();
    stack.pop_back ();
    return *reinterpret_cast<double*>(&__res);
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____abs__float
//=========================================================================

// Add forward decl for any inner functions and methods
class __main____Vec;
//=========================================================================
// Class Declaration - __main____Vec inherits __builtin____main__Object
// Creating Dispatch Table (will be populated later)
void* __dtable____main____Vec[0];
class __main____Vec : public __builtin____main__Object
{
    public:
    //---------------------------------------------------------------------
    // Field - int Vec::i
    // __field____main____Vec____i = 1
    long __field____main____Vec____i;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Field - int Vec::j
    // __field____main____Vec____j = 2
    long __field____main____Vec____j;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Field - int Vec::time
    // __field____main____Vec____time = 3
    long __field____main____Vec____time;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Constructor Declaration - Vec::Vec() -> Vec
    __main____Vec ()
    {
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
        // Add dispatch table to instance
        dtable = __dtable____main____Vec;
        __main____Vec* __this = this;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____time = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____time));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End Constructor Declaration - __ctor____main____Vec____Vec
    //---------------------------------------------------------------------

    //---------------------------------------------------------------------
    // Constructor Declaration - Vec::Vec(int, int) -> Vec
    __main____Vec (long __main____Vec__Vec__i, long __main____Vec__Vec__j)
    {
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
        // Add dispatch table to instance
        dtable = __dtable____main____Vec;
        __main____Vec* __this = this;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main____Vec__Vec__i));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main____Vec__Vec__j));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____time = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____time));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End Constructor Declaration - __ctor____main____Vec____Vec__int__int
    //---------------------------------------------------------------------

    //---------------------------------------------------------------------
    // Constructor Declaration - Vec::Vec(int, int, int) -> Vec
    __main____Vec (long __main____Vec__Vec__i, long __main____Vec__Vec__j, long __main____Vec__Vec__time)
    {
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
        // Add dispatch table to instance
        dtable = __dtable____main____Vec;
        __main____Vec* __this = this;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main____Vec__Vec__i));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main____Vec__Vec__j));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main____Vec__Vec__time));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____time = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____time));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End Constructor Declaration - __ctor____main____Vec____Vec__int__int__int
    //---------------------------------------------------------------------

};
// End Class Declaration - __main____Vec
//=========================================================================

//=========================================================================
// Function Declaration - print(Vec) -> void
void __main____print__Vec (__main____Vec* __main__print__p)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Function Call - print(char) -> void
    {
        // Arguments
        // Char Literal
        stack.push_back (static_cast<long>(static_cast<unsigned char>('(')));
        
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        char __arg0 = static_cast<char>(static_cast<unsigned char>(__stackval));
        // print
        __builtin__print__char (__arg0);
        // push dummy value - funcall returns void
        stack.push_back (0);
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Function Call - print(int) -> void
    {
        // Arguments
        // Member Accessor obj.i
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__print__p));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        long __arg0 = *reinterpret_cast<long*>(&__stackval);
        // print
        __builtin__print__int (__arg0);
        // push dummy value - funcall returns void
        stack.push_back (0);
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Function Call - print(char) -> void
    {
        // Arguments
        // Char Literal
        stack.push_back (static_cast<long>(static_cast<unsigned char>(',')));
        
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        char __arg0 = static_cast<char>(static_cast<unsigned char>(__stackval));
        // print
        __builtin__print__char (__arg0);
        // push dummy value - funcall returns void
        stack.push_back (0);
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Function Call - print(char) -> void
    {
        // Arguments
        // Char Literal
        stack.push_back (static_cast<long>(static_cast<unsigned char>(' ')));
        
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        char __arg0 = static_cast<char>(static_cast<unsigned char>(__stackval));
        // print
        __builtin__print__char (__arg0);
        // push dummy value - funcall returns void
        stack.push_back (0);
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Function Call - print(int) -> void
    {
        // Arguments
        // Member Accessor obj.j
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__print__p));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        long __arg0 = *reinterpret_cast<long*>(&__stackval);
        // print
        __builtin__print__int (__arg0);
        // push dummy value - funcall returns void
        stack.push_back (0);
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Function Call - print(char) -> void
    {
        // Arguments
        // Char Literal
        stack.push_back (static_cast<long>(static_cast<unsigned char>(')')));
        
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        char __arg0 = static_cast<char>(static_cast<unsigned char>(__stackval));
        // print
        __builtin__print__char (__arg0);
        // push dummy value - funcall returns void
        stack.push_back (0);
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
};
// End Function Declaration - __main____print__Vec
//=========================================================================

//=========================================================================
// Function Declaration - println(Vec) -> void
void __main____println__Vec (__main____Vec* __main__println__p)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Function Call - print(Vec) -> void
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(__main__println__p));
        
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        __main____Vec* __arg0 = reinterpret_cast<__main____Vec*>(__stackval);
        // print
        __main____print__Vec (__arg0);
        // push dummy value - funcall returns void
        stack.push_back (0);
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Function Call - println() -> void
    {
        // Arguments
        // println
        __builtin__println ();
        // push dummy value - funcall returns void
        stack.push_back (0);
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
};
// End Function Declaration - __main____println__Vec
//=========================================================================

//=========================================================================
// Function Declaration - manhattan(int, int, int, int) -> int
long __main____manhattan__int__int__int__int (long __main__manhattan__ax, long __main__manhattan__ay, long __main__manhattan__bx, long __main__manhattan__by)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Return
    // Addition
    {
        // LHS
        // Function Call - abs(int) -> int
        {
            // Arguments
            // Subtraction
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__manhattan__ax));
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__manhattan__bx));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            long __arg0 = *reinterpret_cast<long*>(&__stackval);
            // abs
            long __res = __main____abs__int (__arg0);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // RHS
        // Function Call - abs(int) -> int
        {
            // Arguments
            // Subtraction
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__manhattan__ay));
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__manhattan__by));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            long __arg0 = *reinterpret_cast<long*>(&__stackval);
            // abs
            long __res = __main____abs__int (__arg0);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return *reinterpret_cast<long*>(&__res);
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____manhattan__int__int__int__int
//=========================================================================

// Add forward decl for any inner functions and methods
class __main____Node__Vec;
//=========================================================================
// Class Declaration - __main____Node__Vec inherits __builtin____main__Object
// Creating Dispatch Table (will be populated later)
void* __dtable____main____Node__Vec[0];
class __main____Node__Vec : public __builtin____main__Object
{
    public:
    //---------------------------------------------------------------------
    // Field - Vec Node<:Vec:>::data
    // __field____main____Node__Vec____data = 1
    __main____Vec* __field____main____Node__Vec____data;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Field - Node<:Vec:> Node<:Vec:>::prev
    // __field____main____Node__Vec____prev = 2
    __main____Node__Vec* __field____main____Node__Vec____prev;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Field - Node<:Vec:> Node<:Vec:>::next
    // __field____main____Node__Vec____next = 3
    __main____Node__Vec* __field____main____Node__Vec____next;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Constructor Declaration - Node<:Vec:>::Node(Vec, Node<:Vec:>, Node<:Vec:>) -> Node<:Vec:>
    __main____Node__Vec (__main____Vec* __main____Node__Vec__Node__data, __main____Node__Vec* __main____Node__Vec__Node__prev, __main____Node__Vec* __main____Node__Vec__Node__next)
    {
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
        // Add dispatch table to instance
        dtable = __dtable____main____Node__Vec;
        __main____Node__Vec* __this = this;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (reinterpret_cast<long>(__main____Node__Vec__Node__data));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____data = reinterpret_cast<__main____Vec*>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____data));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (reinterpret_cast<long>(__main____Node__Vec__Node__prev));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev = reinterpret_cast<__main____Node__Vec*>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (reinterpret_cast<long>(__main____Node__Vec__Node__next));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next = reinterpret_cast<__main____Node__Vec*>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End Constructor Declaration - __ctor____main____Node__Vec____Node__Vec__Node__Node
    //---------------------------------------------------------------------

};
// End Class Declaration - __main____Node__Vec
//=========================================================================

// Add forward decl for any inner functions and methods
class __main____LinkedList__Vec;
//=========================================================================
// Class Declaration - __main____LinkedList__Vec inherits __builtin____main__Object
// Creating Dispatch Table (will be populated later)
void* __dtable____main____LinkedList__Vec[9];
class __main____LinkedList__Vec : public __builtin____main__Object
{
    public:
    //---------------------------------------------------------------------
    // Field - Node<:Vec:> LinkedList<:Vec:>::header
    // __field____main____LinkedList__Vec____header = 1
    __main____Node__Vec* __field____main____LinkedList__Vec____header;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Field - int LinkedList<:Vec:>::size
    // __field____main____LinkedList__Vec____size = 2
    long __field____main____LinkedList__Vec____size;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Constructor Declaration - LinkedList<:Vec:>::LinkedList() -> LinkedList<:Vec:>
    __main____LinkedList__Vec ()
    {
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
        // Add dispatch table to instance
        dtable = __dtable____main____LinkedList__Vec;
        __main____LinkedList__Vec* __this = this;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Constructor Call - Node<:Vec:>::Node(Vec, Node<:Vec:>, Node<:Vec:>) -> Node<:Vec:>
        // Arguments
        // Function Call - Vec::Vec() -> Vec
        {
            // Arguments
            // Vec::Vec
            __main____Vec* __res = __ctor____main____Vec____Vec ();
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // Null Literal
        stack.push_back (None)
        // Null Literal
        stack.push_back (None)
        __arg2 = stack.back ();
        stack.pop_back ();
        __arg1 = stack.back ();
        stack.pop_back ();
        __arg0 = stack.back ();
        stack.pop_back ();
        stack.push_back (reinterpret_cast<long>(new __main____Node__Vec (__arg0, __arg1, __arg2)));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header = reinterpret_cast<__main____Node__Vec*>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Member Accessor obj.header
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        // Member Accessor obj.header
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next = reinterpret_cast<__main____Node__Vec*>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Member Accessor obj.header
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        // Member Accessor obj.header
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev = reinterpret_cast<__main____Node__Vec*>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End Constructor Declaration - __ctor____main____LinkedList__Vec____LinkedList
    //---------------------------------------------------------------------

};
//-------------------------------------------------------------------------
// Method Declaration - LinkedList<:Vec:>::pushBack(Vec) -> void
void __method____main____LinkedList__Vec____pushBack__Vec (__main____LinkedList__Vec* __this, __main____Vec* __main____LinkedList__Vec__pushBack__val)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Assignment - '='
    // RHS
    // Member Accessor obj.prev
    {
        // LHS
        // Member Accessor obj.header
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // LHS
    // Variable declaration
    __main____Node__Vec* __main____LinkedList__Vec__pushBack__block__83__tail;
    __rhs = stack.back ();
    stack.pop_back ();
    __main____LinkedList__Vec__pushBack__block__83__tail = reinterpret_cast<__main____Node__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__pushBack__block__83__tail));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - Node<:Vec:>::Node(Vec, Node<:Vec:>, Node<:Vec:>) -> Node<:Vec:>
    // Arguments
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__pushBack__val));
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__pushBack__block__83__tail));
    // Member Accessor obj.header
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __arg2 = stack.back ();
    stack.pop_back ();
    __arg1 = stack.back ();
    stack.pop_back ();
    __arg0 = stack.back ();
    stack.pop_back ();
    stack.push_back (reinterpret_cast<long>(new __main____Node__Vec (__arg0, __arg1, __arg2)));
    // LHS
    // Variable declaration
    __main____Node__Vec* __main____LinkedList__Vec__pushBack__block__83__node;
    __rhs = stack.back ();
    stack.pop_back ();
    __main____LinkedList__Vec__pushBack__block__83__node = reinterpret_cast<__main____Node__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__pushBack__block__83__node));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__pushBack__block__83__node));
    // LHS
    // Member Accessor Assignment
    // LHS
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__pushBack__block__83__tail));
    // RHS
    __parent = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next = reinterpret_cast<__main____Node__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__pushBack__block__83__node));
    // LHS
    // Member Accessor Assignment
    // LHS
    // Member Accessor obj.header
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // RHS
    __parent = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev = reinterpret_cast<__main____Node__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Pre-Increment
    {
        // RHS
        // Member Accessor obj.size
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size + 1;
        __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____LinkedList__Vec____pushBack__Vec
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - LinkedList<:Vec:>::pushFront(Vec) -> void
void __method____main____LinkedList__Vec____pushFront__Vec (__main____LinkedList__Vec* __this, __main____Vec* __main____LinkedList__Vec__pushFront__val)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Assignment - '='
    // RHS
    // Member Accessor obj.next
    {
        // LHS
        // Member Accessor obj.header
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // LHS
    // Variable declaration
    __main____Node__Vec* __main____LinkedList__Vec__pushFront__block__84__head;
    __rhs = stack.back ();
    stack.pop_back ();
    __main____LinkedList__Vec__pushFront__block__84__head = reinterpret_cast<__main____Node__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__pushFront__block__84__head));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - Node<:Vec:>::Node(Vec, Node<:Vec:>, Node<:Vec:>) -> Node<:Vec:>
    // Arguments
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__pushFront__val));
    // Member Accessor obj.header
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__pushFront__block__84__head));
    __arg2 = stack.back ();
    stack.pop_back ();
    __arg1 = stack.back ();
    stack.pop_back ();
    __arg0 = stack.back ();
    stack.pop_back ();
    stack.push_back (reinterpret_cast<long>(new __main____Node__Vec (__arg0, __arg1, __arg2)));
    // LHS
    // Variable declaration
    __main____Node__Vec* __main____LinkedList__Vec__pushFront__block__84__node;
    __rhs = stack.back ();
    stack.pop_back ();
    __main____LinkedList__Vec__pushFront__block__84__node = reinterpret_cast<__main____Node__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__pushFront__block__84__node));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__pushFront__block__84__node));
    // LHS
    // Member Accessor Assignment
    // LHS
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__pushFront__block__84__head));
    // RHS
    __parent = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev = reinterpret_cast<__main____Node__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__pushFront__block__84__node));
    // LHS
    // Member Accessor Assignment
    // LHS
    // Member Accessor obj.header
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // RHS
    __parent = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next = reinterpret_cast<__main____Node__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Pre-Increment
    {
        // RHS
        // Member Accessor obj.size
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size + 1;
        __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____LinkedList__Vec____pushFront__Vec
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - LinkedList<:Vec:>::popBack() -> Vec
__main____Vec* __method____main____LinkedList__Vec____popBack (__main____LinkedList__Vec* __this)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    //---------------------------------------------------------------------
    // If-Statement
    // Precomputing all if/elif conditions and give unique names
    // bc we can't have code between if and elif
    // Condition
    // Less Than or Equal to
    {
        // LHS
        // Member Accessor obj.size
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // RHS
        // Int Literal
        stack.push_back (0);
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) <= *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__86__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__86__cond)
    {
        // Body
        // Return
        // Function Call - Vec::Vec() -> Vec
        {
            // Arguments
            // Vec::Vec
            __main____Vec* __res = __ctor____main____Vec____Vec ();
            stack.push_back (reinterpret_cast<long>(__res));
        }
        __res = stack.back ();
        stack.pop_back ();
        return reinterpret_cast<void*>(__res);
    }
    // End of if
    //---------------------------------------------------------------------
    // Statement
    // Assignment - '='
    // RHS
    // Member Accessor obj.prev
    {
        // LHS
        // Member Accessor obj.header
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // LHS
    // Variable declaration
    __main____Node__Vec* __main____LinkedList__Vec__popBack__block__85__tail;
    __rhs = stack.back ();
    stack.pop_back ();
    __main____LinkedList__Vec__popBack__block__85__tail = reinterpret_cast<__main____Node__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__popBack__block__85__tail));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Member Accessor obj.header
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // LHS
    // Member Accessor Assignment
    // LHS
    // Member Accessor obj.prev
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__popBack__block__85__tail));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // RHS
    __parent = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next = reinterpret_cast<__main____Node__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Member Accessor obj.prev
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__popBack__block__85__tail));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // LHS
    // Member Accessor Assignment
    // LHS
    // Member Accessor obj.header
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // RHS
    __parent = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev = reinterpret_cast<__main____Node__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Pre-Decrement
    {
        // RHS
        // Member Accessor obj.size
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size - 1;
        __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Return
    // Member Accessor obj.data
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__popBack__block__85__tail));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Vec* __res = (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____data;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<void*>(__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____LinkedList__Vec____popBack
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - LinkedList<:Vec:>::popFront() -> Vec
__main____Vec* __method____main____LinkedList__Vec____popFront (__main____LinkedList__Vec* __this)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    //---------------------------------------------------------------------
    // If-Statement
    // Precomputing all if/elif conditions and give unique names
    // bc we can't have code between if and elif
    // Condition
    // Less Than or Equal to
    {
        // LHS
        // Member Accessor obj.size
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // RHS
        // Int Literal
        stack.push_back (0);
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) <= *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__88__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__88__cond)
    {
        // Body
        // Return
        // Function Call - Vec::Vec() -> Vec
        {
            // Arguments
            // Vec::Vec
            __main____Vec* __res = __ctor____main____Vec____Vec ();
            stack.push_back (reinterpret_cast<long>(__res));
        }
        __res = stack.back ();
        stack.pop_back ();
        return reinterpret_cast<void*>(__res);
    }
    // End of if
    //---------------------------------------------------------------------
    // Statement
    // Assignment - '='
    // RHS
    // Member Accessor obj.next
    {
        // LHS
        // Member Accessor obj.header
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // LHS
    // Variable declaration
    __main____Node__Vec* __main____LinkedList__Vec__popFront__block__87__head;
    __rhs = stack.back ();
    stack.pop_back ();
    __main____LinkedList__Vec__popFront__block__87__head = reinterpret_cast<__main____Node__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__popFront__block__87__head));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Member Accessor obj.header
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // LHS
    // Member Accessor Assignment
    // LHS
    // Member Accessor obj.next
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__popFront__block__87__head));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // RHS
    __parent = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev = reinterpret_cast<__main____Node__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Member Accessor obj.next
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__popFront__block__87__head));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // LHS
    // Member Accessor Assignment
    // LHS
    // Member Accessor obj.header
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // RHS
    __parent = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next = reinterpret_cast<__main____Node__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Pre-Decrement
    {
        // RHS
        // Member Accessor obj.size
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size - 1;
        __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Return
    // Member Accessor obj.data
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__main____LinkedList__Vec__popFront__block__87__head));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Vec* __res = (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____data;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<void*>(__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____LinkedList__Vec____popFront
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - LinkedList<:Vec:>::begin() -> Node<:Vec:>
__main____Node__Vec* __method____main____LinkedList__Vec____begin (__main____LinkedList__Vec* __this)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Return
    // Member Accessor obj.next
    {
        // LHS
        // Member Accessor obj.header
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____next;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<void*>(__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____LinkedList__Vec____begin
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - LinkedList<:Vec:>::end() -> Node<:Vec:>
__main____Node__Vec* __method____main____LinkedList__Vec____end (__main____LinkedList__Vec* __this)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Return
    // Member Accessor obj.header
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<void*>(__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____LinkedList__Vec____end
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - LinkedList<:Vec:>::rbegin() -> Node<:Vec:>
__main____Node__Vec* __method____main____LinkedList__Vec____rbegin (__main____LinkedList__Vec* __this)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Return
    // Member Accessor obj.prev
    {
        // LHS
        // Member Accessor obj.header
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____Node__Vec*>(__parent))->__field____main____Node__Vec____prev;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<void*>(__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____LinkedList__Vec____rbegin
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - LinkedList<:Vec:>::rend() -> Node<:Vec:>
__main____Node__Vec* __method____main____LinkedList__Vec____rend (__main____LinkedList__Vec* __this)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Return
    // Member Accessor obj.header
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Node__Vec* __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____header;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<void*>(__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____LinkedList__Vec____rend
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - LinkedList<:Vec:>::isEmpty() -> int
long __method____main____LinkedList__Vec____isEmpty (__main____LinkedList__Vec* __this)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Return
    // Equal
    {
        // LHS
        // Member Accessor obj.size
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__this));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____LinkedList__Vec*>(__parent))->__field____main____LinkedList__Vec____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // RHS
        // Int Literal
        stack.push_back (0);
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) == *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return *reinterpret_cast<long*>(&__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____LinkedList__Vec____isEmpty
//-------------------------------------------------------------------------

// End Class Declaration - __main____LinkedList__Vec
//=========================================================================

//=========================================================================
// Function Declaration - bfs(Vector<:Vector<:int:>:>, Vector<:Vector<:int:>:>, Vec, Vec) -> int
long __main____bfs__Vector__tparam0__Vector__Vector__tparam0__Vector__Vec__Vec (__main____Vector__Vector* __main__bfs__elevations, __main____Vector__Vector* __main__bfs__board, __main____Vec* __main__bfs__start_pos, __main____Vec* __main__bfs__end_pos)
{
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
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - LinkedList<:Vec:>::LinkedList() -> LinkedList<:Vec:>
    // Arguments
    stack.push_back (reinterpret_cast<long>(new __main____LinkedList__Vec ()));
    // LHS
    // Variable declaration
    __main____LinkedList__Vec* __main__bfs__block__103__frontier;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__bfs__block__103__frontier = reinterpret_cast<__main____LinkedList__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__frontier));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Method Call - LinkedList<:Vec:>::pushBack(Vec) -> void
    // LHS
    stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__frontier));
    // RHS
    {
        // Arguments
        // Constructor Call - Vec::Vec(int, int, int) -> Vec
        // Arguments
        // Member Accessor obj.i
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__bfs__start_pos));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // Member Accessor obj.j
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__bfs__start_pos));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // Int Literal
        stack.push_back (0);
        __arg2 = stack.back ();
        stack.pop_back ();
        __arg1 = stack.back ();
        stack.pop_back ();
        __arg0 = stack.back ();
        stack.pop_back ();
        stack.push_back (reinterpret_cast<long>(new __main____Vec (__arg0, __arg1, __arg2)));
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        __main____Vec* __arg0 = reinterpret_cast<__main____Vec*>(__stackval);
        __obj = stack.back ();
        stack.pop_back ();
        __method____main____LinkedList__Vec____pushBack__Vec (reinterpret_cast<__main____LinkedList__Vec*>(__obj), __arg0);
        // push dummy value - method rtype is void
        stack.push_back (0);
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
    // While-Loop
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Negate
        {
            // RHS
            // Method Call - LinkedList<:Vec:>::isEmpty() -> int
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__frontier));
            // RHS
            {
                // Arguments
                __obj = stack.back ();
                stack.pop_back ();
                long __res = __method____main____LinkedList__Vec____isEmpty (reinterpret_cast<__main____LinkedList__Vec*>(__obj));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            long __res = !*reinterpret_cast<long*>(&__rhs);
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
        // Method Call - LinkedList<:Vec:>::popFront() -> Vec
        // LHS
        stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__frontier));
        // RHS
        {
            // Arguments
            __obj = stack.back ();
            stack.pop_back ();
            __main____Vec* __res = __method____main____LinkedList__Vec____popFront (reinterpret_cast<__main____LinkedList__Vec*>(__obj));
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        __main____Vec* __main__bfs__block__103__while__104__block__105__pos;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__bfs__block__103__while__104__block__105__pos = reinterpret_cast<__main____Vec*>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // If-Statement
        // Precomputing all if/elif conditions and give unique names
        // bc we can't have code between if and elif
        // Condition
        // Not Equal
        {
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__board));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Member Accessor obj.i
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Member Accessor obj.j
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Negative
            {
                // RHS
                // Int Literal
                stack.push_back (1);
                __rhs = stack.back ();
                stack.pop_back ();
                long __res = -*reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) != *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__106__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__106__cond)
        {
            // Body
            //-------------------------------------------------------------
            // Code Block
            // Continue in __while__104
            continue;
            //-------------------------------------------------------------
        }
        // End of if
        //-----------------------------------------------------------------
        // Statement
        // Assignment - '='
        // RHS
        // Member Accessor obj.time
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____time;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Subscript assignment
        // LHS
        // Member Accessor obj.data
        {
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__bfs__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Member Accessor obj.i
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Member Accessor obj.j
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __offset = stack.back ();
        stack.pop_back ();
        __pointer = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (*reinterpret_cast<long**>(&__pointer))[__offset] = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // If-Statement
        // Precomputing all if/elif conditions and give unique names
        // bc we can't have code between if and elif
        // Condition
        // Greater Than or Equal to
        {
            // LHS
            // Subtraction
            {
                // LHS
                // Member Accessor obj.i
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                // Int Literal
                stack.push_back (1);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Int Literal
            stack.push_back (0);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) >= *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__108__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__108__cond)
        {
            // Body
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Less Than or Equal to
            {
                // LHS
                // Subtraction
                {
                    // LHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__bfs__elevations));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Subtraction
                                {
                                    // LHS
                                    // Member Accessor obj.i
                                    {
                                        // LHS
                                        stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                                        // RHS
                                        __parent = stack.back ();
                                        stack.pop_back ();
                                        long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                                        stack.push_back (*reinterpret_cast<long*>(&__res));
                                    }
                                    // RHS
                                    // Int Literal
                                    stack.push_back (1);
                                    __rhs = stack.back ();
                                    stack.pop_back ();
                                    __lhs = stack.back ();
                                    stack.pop_back ();
                                    long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                                    stack.push_back (*reinterpret_cast<long*>(&__res));
                                }
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Member Accessor obj.j
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // RHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__bfs__elevations));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Member Accessor obj.i
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                                    stack.push_back (*reinterpret_cast<long*>(&__res));
                                }
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Member Accessor obj.j
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                // Int Literal
                stack.push_back (1);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) <= *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__109__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__109__cond)
            {
                // Body
                // Statement
                // Method Call - LinkedList<:Vec:>::pushBack(Vec) -> void
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__frontier));
                // RHS
                {
                    // Arguments
                    // Constructor Call - Vec::Vec(int, int, int) -> Vec
                    // Arguments
                    // Subtraction
                    {
                        // LHS
                        // Member Accessor obj.i
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        // RHS
                        // Int Literal
                        stack.push_back (1);
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Member Accessor obj.j
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Addition
                    {
                        // LHS
                        // Member Accessor obj.time
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____time;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        // RHS
                        // Int Literal
                        stack.push_back (1);
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __arg2 = stack.back ();
                    stack.pop_back ();
                    __arg1 = stack.back ();
                    stack.pop_back ();
                    __arg0 = stack.back ();
                    stack.pop_back ();
                    stack.push_back (reinterpret_cast<long>(new __main____Vec (__arg0, __arg1, __arg2)));
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    __main____Vec* __arg0 = reinterpret_cast<__main____Vec*>(__stackval);
                    __obj = stack.back ();
                    stack.pop_back ();
                    __method____main____LinkedList__Vec____pushBack__Vec (reinterpret_cast<__main____LinkedList__Vec*>(__obj), __arg0);
                    // push dummy value - method rtype is void
                    stack.push_back (0);
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

            }
            // End of if
            //-------------------------------------------------------------
        }
        // End of if
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // If-Statement
        // Precomputing all if/elif conditions and give unique names
        // bc we can't have code between if and elif
        // Condition
        // Less Than
        {
            // LHS
            // Addition
            {
                // LHS
                // Member Accessor obj.j
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                // Int Literal
                stack.push_back (1);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Member Accessor obj.size
            {
                // LHS
                // Subscript Expression
                {
                    // LHS
                    // Member Accessor obj.data
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__bfs__elevations));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) < *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__110__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__110__cond)
        {
            // Body
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Less Than or Equal to
            {
                // LHS
                // Subtraction
                {
                    // LHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__bfs__elevations));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Member Accessor obj.i
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                                    stack.push_back (*reinterpret_cast<long*>(&__res));
                                }
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Addition
                        {
                            // LHS
                            // Member Accessor obj.j
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                                stack.push_back (*reinterpret_cast<long*>(&__res));
                            }
                            // RHS
                            // Int Literal
                            stack.push_back (1);
                            __rhs = stack.back ();
                            stack.pop_back ();
                            __lhs = stack.back ();
                            stack.pop_back ();
                            long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // RHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__bfs__elevations));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Member Accessor obj.i
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                                    stack.push_back (*reinterpret_cast<long*>(&__res));
                                }
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Member Accessor obj.j
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                // Int Literal
                stack.push_back (1);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) <= *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__111__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__111__cond)
            {
                // Body
                // Statement
                // Method Call - LinkedList<:Vec:>::pushBack(Vec) -> void
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__frontier));
                // RHS
                {
                    // Arguments
                    // Constructor Call - Vec::Vec(int, int, int) -> Vec
                    // Arguments
                    // Member Accessor obj.i
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Addition
                    {
                        // LHS
                        // Member Accessor obj.j
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        // RHS
                        // Int Literal
                        stack.push_back (1);
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Addition
                    {
                        // LHS
                        // Member Accessor obj.time
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____time;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        // RHS
                        // Int Literal
                        stack.push_back (1);
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __arg2 = stack.back ();
                    stack.pop_back ();
                    __arg1 = stack.back ();
                    stack.pop_back ();
                    __arg0 = stack.back ();
                    stack.pop_back ();
                    stack.push_back (reinterpret_cast<long>(new __main____Vec (__arg0, __arg1, __arg2)));
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    __main____Vec* __arg0 = reinterpret_cast<__main____Vec*>(__stackval);
                    __obj = stack.back ();
                    stack.pop_back ();
                    __method____main____LinkedList__Vec____pushBack__Vec (reinterpret_cast<__main____LinkedList__Vec*>(__obj), __arg0);
                    // push dummy value - method rtype is void
                    stack.push_back (0);
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

            }
            // End of if
            //-------------------------------------------------------------
        }
        // End of if
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // If-Statement
        // Precomputing all if/elif conditions and give unique names
        // bc we can't have code between if and elif
        // Condition
        // Less Than
        {
            // LHS
            // Addition
            {
                // LHS
                // Member Accessor obj.i
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                // Int Literal
                stack.push_back (1);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__bfs__elevations));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) < *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__112__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__112__cond)
        {
            // Body
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Less Than or Equal to
            {
                // LHS
                // Subtraction
                {
                    // LHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__bfs__elevations));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    // Member Accessor obj.i
                                    {
                                        // LHS
                                        stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                                        // RHS
                                        __parent = stack.back ();
                                        stack.pop_back ();
                                        long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                                        stack.push_back (*reinterpret_cast<long*>(&__res));
                                    }
                                    // RHS
                                    // Int Literal
                                    stack.push_back (1);
                                    __rhs = stack.back ();
                                    stack.pop_back ();
                                    __lhs = stack.back ();
                                    stack.pop_back ();
                                    long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                                    stack.push_back (*reinterpret_cast<long*>(&__res));
                                }
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Member Accessor obj.j
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // RHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__bfs__elevations));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Member Accessor obj.i
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                                    stack.push_back (*reinterpret_cast<long*>(&__res));
                                }
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Member Accessor obj.j
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                // Int Literal
                stack.push_back (1);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) <= *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__113__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__113__cond)
            {
                // Body
                // Statement
                // Method Call - LinkedList<:Vec:>::pushBack(Vec) -> void
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__frontier));
                // RHS
                {
                    // Arguments
                    // Constructor Call - Vec::Vec(int, int, int) -> Vec
                    // Arguments
                    // Addition
                    {
                        // LHS
                        // Member Accessor obj.i
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        // RHS
                        // Int Literal
                        stack.push_back (1);
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Member Accessor obj.j
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Addition
                    {
                        // LHS
                        // Member Accessor obj.time
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____time;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        // RHS
                        // Int Literal
                        stack.push_back (1);
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __arg2 = stack.back ();
                    stack.pop_back ();
                    __arg1 = stack.back ();
                    stack.pop_back ();
                    __arg0 = stack.back ();
                    stack.pop_back ();
                    stack.push_back (reinterpret_cast<long>(new __main____Vec (__arg0, __arg1, __arg2)));
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    __main____Vec* __arg0 = reinterpret_cast<__main____Vec*>(__stackval);
                    __obj = stack.back ();
                    stack.pop_back ();
                    __method____main____LinkedList__Vec____pushBack__Vec (reinterpret_cast<__main____LinkedList__Vec*>(__obj), __arg0);
                    // push dummy value - method rtype is void
                    stack.push_back (0);
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

            }
            // End of if
            //-------------------------------------------------------------
        }
        // End of if
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // If-Statement
        // Precomputing all if/elif conditions and give unique names
        // bc we can't have code between if and elif
        // Condition
        // Greater Than or Equal to
        {
            // LHS
            // Subtraction
            {
                // LHS
                // Member Accessor obj.j
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                // Int Literal
                stack.push_back (1);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Int Literal
            stack.push_back (0);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) >= *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__114__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__114__cond)
        {
            // Body
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Less Than or Equal to
            {
                // LHS
                // Subtraction
                {
                    // LHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__bfs__elevations));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Member Accessor obj.i
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                                    stack.push_back (*reinterpret_cast<long*>(&__res));
                                }
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subtraction
                        {
                            // LHS
                            // Member Accessor obj.j
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                                stack.push_back (*reinterpret_cast<long*>(&__res));
                            }
                            // RHS
                            // Int Literal
                            stack.push_back (1);
                            __rhs = stack.back ();
                            stack.pop_back ();
                            __lhs = stack.back ();
                            stack.pop_back ();
                            long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // RHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__bfs__elevations));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Member Accessor obj.i
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                                    stack.push_back (*reinterpret_cast<long*>(&__res));
                                }
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Member Accessor obj.j
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                // Int Literal
                stack.push_back (1);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) <= *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__115__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__115__cond)
            {
                // Body
                // Statement
                // Method Call - LinkedList<:Vec:>::pushBack(Vec) -> void
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__frontier));
                // RHS
                {
                    // Arguments
                    // Constructor Call - Vec::Vec(int, int, int) -> Vec
                    // Arguments
                    // Member Accessor obj.i
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Subtraction
                    {
                        // LHS
                        // Member Accessor obj.j
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        // RHS
                        // Int Literal
                        stack.push_back (1);
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Addition
                    {
                        // LHS
                        // Member Accessor obj.time
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____time;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        // RHS
                        // Int Literal
                        stack.push_back (1);
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __arg2 = stack.back ();
                    stack.pop_back ();
                    __arg1 = stack.back ();
                    stack.pop_back ();
                    __arg0 = stack.back ();
                    stack.pop_back ();
                    stack.push_back (reinterpret_cast<long>(new __main____Vec (__arg0, __arg1, __arg2)));
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    __main____Vec* __arg0 = reinterpret_cast<__main____Vec*>(__stackval);
                    __obj = stack.back ();
                    stack.pop_back ();
                    __method____main____LinkedList__Vec____pushBack__Vec (reinterpret_cast<__main____LinkedList__Vec*>(__obj), __arg0);
                    // push dummy value - method rtype is void
                    stack.push_back (0);
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

            }
            // End of if
            //-------------------------------------------------------------
        }
        // End of if
        //-----------------------------------------------------------------
        // Statement
        stack.push_back (reinterpret_cast<long>(__main__bfs__block__103__while__104__block__105__pos));
        __stackval = stack.back ();
        stack.pop_back ();
        delete reinterpret_cast<__main____Vec*>(__stackval);
        stack.push_back (0);
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End of While
    //---------------------------------------------------------------------
    // Return
    // Subscript Expression
    {
        // LHS
        // Member Accessor obj.data
        {
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__bfs__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Member Accessor obj.i
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__bfs__end_pos));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Member Accessor obj.j
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__bfs__end_pos));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __offset = stack.back ();
        stack.pop_back ();
        __pointer = stack.back ();
        stack.pop_back ();
        long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return *reinterpret_cast<long*>(&__res);
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____bfs__Vector__tparam0__Vector__Vector__tparam0__Vector__Vec__Vec
//=========================================================================

//=========================================================================
//### Main function ######################################################
//=========================================================================

int main () {
    //=====================================================================
    //### SETUP EXPRESSION RESULT STACK ##################################
    //=====================================================================

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
    //=====================================================================
    //### COMPILED CODE ##################################################
    //=====================================================================

    //=====================================================================
    // Class Template - 
    // Class Declaration - __main____Vector__char__1 inherits __builtin____main__Object
    // *see this class def before this parent function

    // Populate Dispatch Table
    __dtable____main____Vector__char__1[0] = (void*)__method____main____Vector__char__1____pushBack__char__1;
    __dtable____main____Vector__char__1[1] = (void*)__method____main____Vector__char__1____popBack;
    __dtable____main____Vector__char__1[2] = (void*)__method____main____Vector__char__1____clear;
    __dtable____main____Vector__char__1[3] = (void*)__method____main____Vector__char__1____get__int;
    __dtable____main____Vector__char__1[4] = (void*)__method____main____Vector__char__1____set__int__char__1;
    // Class Declaration - __main____Vector__Vector inherits __builtin____main__Object
    // *see this class def before this parent function

    // Populate Dispatch Table
    __dtable____main____Vector__Vector[0] = (void*)__method____main____Vector__Vector____pushBack__Vector;
    __dtable____main____Vector__Vector[1] = (void*)__method____main____Vector__Vector____popBack;
    __dtable____main____Vector__Vector[2] = (void*)__method____main____Vector__Vector____clear;
    __dtable____main____Vector__Vector[3] = (void*)__method____main____Vector__Vector____get__int;
    __dtable____main____Vector__Vector[4] = (void*)__method____main____Vector__Vector____set__int__Vector;
    // Class Declaration - __main____Vector__int inherits __builtin____main__Object
    // *see this class def before this parent function

    // Populate Dispatch Table
    __dtable____main____Vector__int[0] = (void*)__method____main____Vector__int____pushBack__int;
    __dtable____main____Vector__int[1] = (void*)__method____main____Vector__int____popBack;
    __dtable____main____Vector__int[2] = (void*)__method____main____Vector__int____clear;
    __dtable____main____Vector__int[3] = (void*)__method____main____Vector__int____get__int;
    __dtable____main____Vector__int[4] = (void*)__method____main____Vector__int____set__int__int;
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

    // Function Declaration - strlen(char[]) -> int
    // *see this func def before this parent function

    // Function Declaration - strcmp(char[], char[]) -> int
    // *see this func def before this parent function

    // Function Declaration - substr(char[], int, int) -> char[]
    // *see this func def before this parent function

    // Function Declaration - first_index_of(char[], char) -> int
    // *see this func def before this parent function

    // Function Declaration - split(char[], char) -> Vector<:char[]:>
    // *see this func def before this parent function

    // Function Declaration - max(int, int) -> int
    // *see this func def before this parent function

    // Function Declaration - max(float, float) -> float
    // *see this func def before this parent function

    // Function Declaration - min(int, int) -> int
    // *see this func def before this parent function

    // Function Declaration - min(float, float) -> float
    // *see this func def before this parent function

    // Function Declaration - abs(int) -> int
    // *see this func def before this parent function

    // Function Declaration - abs(float) -> float
    // *see this func def before this parent function

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
    // Constructor Call - Vector<:char[]:>::Vector() -> Vector<:char[]:>
    // Arguments
    stack.push_back (reinterpret_cast<long>(new __main____Vector__char__1 ()));
    // LHS
    // Variable declaration
    __main____Vector__char__1* __main__lines;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__lines = reinterpret_cast<__main____Vector__char__1*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__lines));
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
            stack.push_back (reinterpret_cast<long>(__main__line));
            // RHS
            // Null Literal
            stack.push_back (None)
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<char**>(&__lhs) != <unknown-conversion>*;
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
        // Method Call - Vector<:char[]:>::pushBack(char[]) -> void
        // LHS
        stack.push_back (reinterpret_cast<long>(__main__lines));
        // RHS
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__line));
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            char* __arg0 = *reinterpret_cast<char**>(&__stackval);
            __obj = stack.back ();
            stack.pop_back ();
            __method____main____Vector__char__1____pushBack__char__1 (reinterpret_cast<__main____Vector__char__1*>(__obj), __arg0);
            // push dummy value - method rtype is void
            stack.push_back (0);
        }
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
    // Class Declaration - __main____Vec inherits __builtin____main__Object
    // *see this class def before this parent function

    // Populate Dispatch Table
    // Function Declaration - print(Vec) -> void
    // *see this func def before this parent function

    // Function Declaration - println(Vec) -> void
    // *see this func def before this parent function

    // Function Declaration - manhattan(int, int, int, int) -> int
    // *see this func def before this parent function

    //=====================================================================
    // Class Template - 
    // Class Declaration - __main____Node__Vec inherits __builtin____main__Object
    // *see this class def before this parent function

    // Populate Dispatch Table
    // End Class Template - 
    //=====================================================================

    //=====================================================================
    // Class Template - 
    // Class Declaration - __main____LinkedList__Vec inherits __builtin____main__Object
    // *see this class def before this parent function

    // Populate Dispatch Table
    __dtable____main____LinkedList__Vec[0] = (void*)__method____main____LinkedList__Vec____pushBack__Vec;
    __dtable____main____LinkedList__Vec[1] = (void*)__method____main____LinkedList__Vec____pushFront__Vec;
    __dtable____main____LinkedList__Vec[2] = (void*)__method____main____LinkedList__Vec____popBack;
    __dtable____main____LinkedList__Vec[3] = (void*)__method____main____LinkedList__Vec____popFront;
    __dtable____main____LinkedList__Vec[4] = (void*)__method____main____LinkedList__Vec____begin;
    __dtable____main____LinkedList__Vec[5] = (void*)__method____main____LinkedList__Vec____end;
    __dtable____main____LinkedList__Vec[6] = (void*)__method____main____LinkedList__Vec____rbegin;
    __dtable____main____LinkedList__Vec[7] = (void*)__method____main____LinkedList__Vec____rend;
    __dtable____main____LinkedList__Vec[8] = (void*)__method____main____LinkedList__Vec____isEmpty;
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
    // Constructor Call - Vector<:Vector<:int:>:>::Vector() -> Vector<:Vector<:int:>:>
    // Arguments
    stack.push_back (reinterpret_cast<long>(new __main____Vector__Vector ()));
    // LHS
    // Variable declaration
    __main____Vector__Vector* __main__elevations;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__elevations = reinterpret_cast<__main____Vector__Vector*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__elevations));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - Vector<:Vector<:int:>:>::Vector() -> Vector<:Vector<:int:>:>
    // Arguments
    stack.push_back (reinterpret_cast<long>(new __main____Vector__Vector ()));
    // LHS
    // Variable declaration
    __main____Vector__Vector* __main__was_visited;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__was_visited = reinterpret_cast<__main____Vector__Vector*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__was_visited));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // String Literal
    {
        char str_literal[] = "abcdefghijklmnopqrstuvwxyzSE";
        // convert to a heap string
        char* str = new char[29];
        // copy string to heap allocation
        std::memcpy (str, &str_literal, 29);
        stack.push_back (reinterpret_cast<long> (str));
    }
    // LHS
    // Variable declaration
    char* __main__alphabet;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__alphabet = *reinterpret_cast<char**>(&__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__alphabet));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - Vec::Vec(int, int) -> Vec
    // Arguments
    // Int Literal
    stack.push_back (0);
    // Int Literal
    stack.push_back (0);
    __arg1 = stack.back ();
    stack.pop_back ();
    __arg0 = stack.back ();
    stack.pop_back ();
    stack.push_back (reinterpret_cast<long>(new __main____Vec (__arg0, __arg1)));
    // LHS
    // Variable declaration
    __main____Vec* __main__start_pos;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__start_pos = reinterpret_cast<__main____Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__start_pos));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - Vec::Vec(int, int) -> Vec
    // Arguments
    // Int Literal
    stack.push_back (0);
    // Int Literal
    stack.push_back (0);
    __arg1 = stack.back ();
    stack.pop_back ();
    __arg0 = stack.back ();
    stack.pop_back ();
    stack.push_back (reinterpret_cast<long>(new __main____Vec (__arg0, __arg1)));
    // LHS
    // Variable declaration
    __main____Vec* __main__end_pos;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__end_pos = reinterpret_cast<__main____Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__end_pos));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - LinkedList<:Vec:>::LinkedList() -> LinkedList<:Vec:>
    // Arguments
    stack.push_back (reinterpret_cast<long>(new __main____LinkedList__Vec ()));
    // LHS
    // Variable declaration
    __main____LinkedList__Vec* __main__starting_positions;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__starting_positions = reinterpret_cast<__main____LinkedList__Vec*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__starting_positions));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
    // For-Loop
    // Init
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (0);
    // LHS
    // Variable declaration
    long __main__for__94__l;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__for__94__l = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__for__94__l));
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__for__94__l));
            // RHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__lines));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____size;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
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
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Method Call - Vector<:Vector<:int:>:>::pushBack(Vector<:int:>) -> void
        // LHS
        stack.push_back (reinterpret_cast<long>(__main__elevations));
        // RHS
        {
            // Arguments
            // Constructor Call - Vector<:int:>::Vector() -> Vector<:int:>
            // Arguments
            stack.push_back (reinterpret_cast<long>(new __main____Vector__int ()));
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__int* __arg0 = reinterpret_cast<__main____Vector__int*>(__stackval);
            __obj = stack.back ();
            stack.pop_back ();
            __method____main____Vector__Vector____pushBack__Vector (reinterpret_cast<__main____Vector__Vector*>(__obj), __arg0);
            // push dummy value - method rtype is void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Method Call - Vector<:Vector<:int:>:>::pushBack(Vector<:int:>) -> void
        // LHS
        stack.push_back (reinterpret_cast<long>(__main__was_visited));
        // RHS
        {
            // Arguments
            // Constructor Call - Vector<:int:>::Vector() -> Vector<:int:>
            // Arguments
            stack.push_back (reinterpret_cast<long>(new __main____Vector__int ()));
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__int* __arg0 = reinterpret_cast<__main____Vector__int*>(__stackval);
            __obj = stack.back ();
            stack.pop_back ();
            __method____main____Vector__Vector____pushBack__Vector (reinterpret_cast<__main____Vector__Vector*>(__obj), __arg0);
            // push dummy value - method rtype is void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Subtraction
        {
            // LHS
            // Function Call - strlen(char[]) -> int
            {
                // Arguments
                // Subscript Expression
                {
                    // LHS
                    // Member Accessor obj.data
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__lines));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    stack.push_back (*reinterpret_cast<long*>(&__main__for__94__l));
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                // strlen
                long __res = __main____strlen__char__1 (__arg0);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            // Int Literal
            stack.push_back (1);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Variable declaration
        long __main__for__94__block__95__size;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__for__94__block__95__size = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__size));
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
        long __main__for__94__block__95__for__96__c;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__for__94__block__95__for__96__c = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__for__96__c));
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__for__96__c));
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__size));
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
            // Statement
            // Assignment - '='
            // RHS
            // Function Call - first_index_of(char[], char) -> int
            {
                // Arguments
                stack.push_back (reinterpret_cast<long>(__main__alphabet));
                // Subscript Expression
                {
                    // LHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__lines));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__94__l));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__for__96__c));
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                }
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                char __arg1 = static_cast<char>(static_cast<unsigned char>(__stackval));
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                // first_index_of
                long __res = __main____first_index_of__char__1__char (__arg0, __arg1);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // LHS
            // Variable declaration
            long __main__for__94__block__95__for__96__block__97__val;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__for__94__block__95__for__96__block__97__val = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__for__96__block__97__val));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Equal
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__for__96__block__97__val));
                // RHS
                // Int Literal
                stack.push_back (26);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) == *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__98__cond = stack.back ();
            stack.pop_back ();
            // Condition for elif #0
            // Equal
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__for__96__block__97__val));
                // RHS
                // Int Literal
                stack.push_back (27);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) == *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __elif__98x0__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__98__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '='
                // RHS
                // Int Literal
                stack.push_back (0);
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__94__block__95__for__96__block__97__val = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__for__96__block__97__val));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Statement
                // Assignment - '='
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__94__l));
                // LHS
                // Member Accessor Assignment
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__start_pos));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                __rhs = stack.back ();
                stack.pop_back ();
                (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Statement
                // Assignment - '='
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__for__96__c));
                // LHS
                // Member Accessor Assignment
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__start_pos));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                __rhs = stack.back ();
                stack.pop_back ();
                (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // Elif-Statement
            // Condition
            else if (__elif__98x0__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '='
                // RHS
                // Int Literal
                stack.push_back (25);
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__94__block__95__for__96__block__97__val = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__for__96__block__97__val));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Statement
                // Assignment - '='
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__94__l));
                // LHS
                // Member Accessor Assignment
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__end_pos));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                __rhs = stack.back ();
                stack.pop_back ();
                (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Statement
                // Assignment - '='
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__for__96__c));
                // LHS
                // Member Accessor Assignment
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__end_pos));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                __rhs = stack.back ();
                stack.pop_back ();
                (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // End of if
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Equal
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__for__96__block__97__val));
                // RHS
                // Int Literal
                stack.push_back (0);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) == *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__101__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__101__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Method Call - LinkedList<:Vec:>::pushBack(Vec) -> void
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__starting_positions));
                // RHS
                {
                    // Arguments
                    // Constructor Call - Vec::Vec(int, int) -> Vec
                    // Arguments
                    stack.push_back (*reinterpret_cast<long*>(&__main__for__94__l));
                    stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__for__96__c));
                    __arg1 = stack.back ();
                    stack.pop_back ();
                    __arg0 = stack.back ();
                    stack.pop_back ();
                    stack.push_back (reinterpret_cast<long>(new __main____Vec (__arg0, __arg1)));
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    __main____Vec* __arg0 = reinterpret_cast<__main____Vec*>(__stackval);
                    __obj = stack.back ();
                    stack.pop_back ();
                    __method____main____LinkedList__Vec____pushBack__Vec (reinterpret_cast<__main____LinkedList__Vec*>(__obj), __arg0);
                    // push dummy value - method rtype is void
                    stack.push_back (0);
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Method Call - Vector<:int:>::pushBack(int) -> void
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__elevations));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__for__94__l));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // RHS
            {
                // Arguments
                stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__for__96__block__97__val));
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                long __arg0 = *reinterpret_cast<long*>(&__stackval);
                __obj = stack.back ();
                stack.pop_back ();
                __method____main____Vector__int____pushBack__int (reinterpret_cast<__main____Vector__int*>(__obj), __arg0);
                // push dummy value - method rtype is void
                stack.push_back (0);
            }
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Method Call - Vector<:int:>::pushBack(int) -> void
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__was_visited));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__for__94__l));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // RHS
            {
                // Arguments
                // Negative
                {
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    __rhs = stack.back ();
                    stack.pop_back ();
                    long __res = -*reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                long __arg0 = *reinterpret_cast<long*>(&__stackval);
                __obj = stack.back ();
                stack.pop_back ();
                __method____main____Vector__int____pushBack__int (reinterpret_cast<__main____Vector__int*>(__obj), __arg0);
                // push dummy value - method rtype is void
                stack.push_back (0);
            }
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // Update
            // Pre-Increment
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__94__block__95__for__96__c));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__94__block__95__for__96__c = __main__for__94__block__95__for__96__c + 1;
                __res = __main__for__94__block__95__for__96__c;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
        }
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // Update
        // Assignment - '+='
        // RHS
        // Int Literal
        stack.push_back (1);
        __rhs = stack.back ();
        stack.pop_back ();
        __main__for__94__l = __main__for__94__l + *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__for__94__l));
    }
    //---------------------------------------------------------------------
    // Function Declaration - bfs(Vector<:Vector<:int:>:>, Vector<:Vector<:int:>:>, Vec, Vec) -> int
    // *see this func def before this parent function

    // Statement
    // Assignment - '='
    // RHS
    // Multiplication
    {
        // LHS
        // Member Accessor obj.size
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__elevations));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // RHS
        // Member Accessor obj.size
        {
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__elevations));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) * *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // LHS
    // Variable declaration
    long __main__min_moves;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__min_moves = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__min_moves));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
    // While-Loop
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Negate
        {
            // RHS
            // Method Call - LinkedList<:Vec:>::isEmpty() -> int
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__starting_positions));
            // RHS
            {
                // Arguments
                __obj = stack.back ();
                stack.pop_back ();
                long __res = __method____main____LinkedList__Vec____isEmpty (reinterpret_cast<__main____LinkedList__Vec*>(__obj));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            long __res = !*reinterpret_cast<long*>(&__rhs);
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
        // Method Call - LinkedList<:Vec:>::popFront() -> Vec
        // LHS
        stack.push_back (reinterpret_cast<long>(__main__starting_positions));
        // RHS
        {
            // Arguments
            __obj = stack.back ();
            stack.pop_back ();
            __main____Vec* __res = __method____main____LinkedList__Vec____popFront (reinterpret_cast<__main____LinkedList__Vec*>(__obj));
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        __main____Vec* __main__while__116__block__117__starting_pos;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__116__block__117__starting_pos = reinterpret_cast<__main____Vec*>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__while__116__block__117__starting_pos));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // If-Statement
        // Precomputing all if/elif conditions and give unique names
        // bc we can't have code between if and elif
        // Condition
        // Greater Than or Equal to
        {
            // LHS
            // Function Call - manhattan(int, int, int, int) -> int
            {
                // Arguments
                // Member Accessor obj.i
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__116__block__117__starting_pos));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // Member Accessor obj.j
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__116__block__117__starting_pos));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // Member Accessor obj.i
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__end_pos));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____i;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // Member Accessor obj.j
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__end_pos));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vec*>(__parent))->__field____main____Vec____j;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                long __arg3 = *reinterpret_cast<long*>(&__stackval);
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                long __arg2 = *reinterpret_cast<long*>(&__stackval);
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                long __arg1 = *reinterpret_cast<long*>(&__stackval);
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                long __arg0 = *reinterpret_cast<long*>(&__stackval);
                // manhattan
                long __res = __main____manhattan__int__int__int__int (__arg0, __arg1, __arg2, __arg3);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__min_moves));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) >= *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__118__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__118__cond)
        {
            // Body
            //-------------------------------------------------------------
            // Code Block
            // Statement
            stack.push_back (reinterpret_cast<long>(__main__while__116__block__117__starting_pos));
            __stackval = stack.back ();
            stack.pop_back ();
            delete reinterpret_cast<__main____Vec*>(__stackval);
            stack.push_back (0);
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Continue in __while__116
            continue;
            //-------------------------------------------------------------
        }
        // End of if
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // For-Loop
        // Init
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Variable declaration
        long __main__while__116__block__117__for__120__i;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__116__block__117__for__120__i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__116__block__117__for__120__i));
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__116__block__117__for__120__i));
                // RHS
                // Member Accessor obj.size
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__was_visited));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____size;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
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
            // Int Literal
            stack.push_back (0);
            // LHS
            // Variable declaration
            long __main__while__116__block__117__for__120__block__121__for__122__j;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__116__block__117__for__120__block__121__for__122__j = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__while__116__block__117__for__120__block__121__for__122__j));
            // Using an infinite loop so we can write a separate multi-line condition
            while (1)
            {
                // Condition
                // Less Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__116__block__117__for__120__block__121__for__122__j));
                    // RHS
                    // Member Accessor obj.size
                    {
                        // LHS
                        // Subscript Expression
                        {
                            // LHS
                            // Member Accessor obj.data
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__was_visited));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__116__block__117__for__120__i));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        long __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____size;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
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
                // Statement
                // Assignment - '='
                // RHS
                // Negative
                {
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    __rhs = stack.back ();
                    stack.pop_back ();
                    long __res = -*reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // LHS
                // Subscript assignment
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__was_visited));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            __main____Vector__int** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__while__116__block__117__for__120__i));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        __main____Vector__int* __res = (reinterpret_cast<__main____Vector__int**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long* __res = (reinterpret_cast<__main____Vector__int*>(__parent))->__field____main____Vector__int____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__116__block__117__for__120__block__121__for__122__j));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                __rhs = stack.back ();
                stack.pop_back ();
                (*reinterpret_cast<long**>(&__pointer))[__offset] = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
                // Update
                // Pre-Increment
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__116__block__117__for__120__block__121__for__122__j));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__while__116__block__117__for__120__block__121__for__122__j = __main__while__116__block__117__for__120__block__121__for__122__j + 1;
                    __res = __main__while__116__block__117__for__120__block__121__for__122__j;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
            }
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Update
            // Pre-Increment
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__116__block__117__for__120__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__116__block__117__for__120__i = __main__while__116__block__117__for__120__i + 1;
                __res = __main__while__116__block__117__for__120__i;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
        }
        //-----------------------------------------------------------------
        // Statement
        // Assignment - '='
        // RHS
        // Function Call - bfs(Vector<:Vector<:int:>:>, Vector<:Vector<:int:>:>, Vec, Vec) -> int
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__elevations));
            stack.push_back (reinterpret_cast<long>(__main__was_visited));
            stack.push_back (reinterpret_cast<long>(__main__while__116__block__117__starting_pos));
            stack.push_back (reinterpret_cast<long>(__main__end_pos));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vec* __arg3 = reinterpret_cast<__main____Vec*>(__stackval);
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vec* __arg2 = reinterpret_cast<__main____Vec*>(__stackval);
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__Vector* __arg1 = reinterpret_cast<__main____Vector__Vector*>(__stackval);
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__Vector* __arg0 = reinterpret_cast<__main____Vector__Vector*>(__stackval);
            // bfs
            long __res = __main____bfs__Vector__tparam0__Vector__Vector__tparam0__Vector__Vec__Vec (__arg0, __arg1, __arg2, __arg3);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Variable declaration
        long __main__while__116__block__117__res;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__116__block__117__res = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__116__block__117__res));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__while__116__block__117__res));
            // RHS
            // Negative
            {
                // RHS
                // Int Literal
                stack.push_back (1);
                __rhs = stack.back ();
                stack.pop_back ();
                long __res = -*reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) == *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__124__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__124__cond)
        {
            // Body
            //-------------------------------------------------------------
            // Code Block
            // Statement
            stack.push_back (reinterpret_cast<long>(__main__while__116__block__117__starting_pos));
            __stackval = stack.back ();
            stack.pop_back ();
            delete reinterpret_cast<__main____Vec*>(__stackval);
            stack.push_back (0);
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Continue in __while__116
            continue;
            //-------------------------------------------------------------
        }
        // End of if
        //-----------------------------------------------------------------
        // Statement
        // Assignment - '='
        // RHS
        // Function Call - min(int, int) -> int
        {
            // Arguments
            stack.push_back (*reinterpret_cast<long*>(&__main__while__116__block__117__res));
            stack.push_back (*reinterpret_cast<long*>(&__main__min_moves));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            long __arg1 = *reinterpret_cast<long*>(&__stackval);
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            long __arg0 = *reinterpret_cast<long*>(&__stackval);
            // min
            long __res = __main____min__int__int (__arg0, __arg1);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        __main__min_moves = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__min_moves));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        stack.push_back (reinterpret_cast<long>(__main__while__116__block__117__starting_pos));
        __stackval = stack.back ();
        stack.pop_back ();
        delete reinterpret_cast<__main____Vec*>(__stackval);
        stack.push_back (0);
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
        stack.push_back (*reinterpret_cast<long*>(&__main__min_moves));
        
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


    //=====================================================================
    //### END OF CODE ####################################################
    //=====================================================================

}
//=========================================================================
//### END OF MAIN ########################################################
//=========================================================================

