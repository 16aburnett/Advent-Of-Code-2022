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
class __main____Vector__Point;
//=========================================================================
// Class Declaration - __main____Vector__Point inherits __builtin____main__Object
// Creating Dispatch Table (will be populated later)
void* __dtable____main____Vector__Point[5];
class __main____Vector__Point : public __builtin____main__Object
{
    public:
    //---------------------------------------------------------------------
    // Field - Point[] Vector<:Point:>::data
    // __field____main____Vector__Point____data = 1
    ** __field____main____Vector__Point____data;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Field - int Vector<:Point:>::size
    // __field____main____Vector__Point____size = 2
    long __field____main____Vector__Point____size;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Field - int Vector<:Point:>::capacity
    // __field____main____Vector__Point____capacity = 3
    long __field____main____Vector__Point____capacity;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Constructor Declaration - Vector<:Point:>::Vector() -> Vector<:Point:>
    __main____Vector__Point ()
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
        dtable = __dtable____main____Vector__Point;
        __main____Vector__Point* __this = this;
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
        (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____capacity = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____capacity));
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
        (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size));
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
                long __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____capacity;
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
        (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data = reinterpret_cast<**>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End Constructor Declaration - __ctor____main____Vector__Point____Vector
    //---------------------------------------------------------------------

    //---------------------------------------------------------------------
    // Constructor Declaration - Vector<:Point:>::Vector(int) -> Vector<:Point:>
    __main____Vector__Point (long __main____Vector__Point__Vector__size)
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
        dtable = __dtable____main____Vector__Point;
        __main____Vector__Point* __this = this;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Addition
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Point__Vector__size));
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
        (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____capacity = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____capacity));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Point__Vector__size));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size));
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
                long __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____capacity;
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
        (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data = reinterpret_cast<**>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End Constructor Declaration - __ctor____main____Vector__Point____Vector__int
    //---------------------------------------------------------------------

};
//-------------------------------------------------------------------------
// Method Declaration - Vector<:Point:>::pushBack(Point) -> void
void __method____main____Vector__Point____pushBack__Point (__main____Vector__Point* __this, * __main____Vector__Point__pushBack__val)
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
                long __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size;
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
            long __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____capacity;
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
                long __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____capacity;
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
        (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____capacity = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____capacity));
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
                long __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____capacity;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __stackval = stack.back ();
            stack.pop_back ();
            ** __res = new *[__stackval];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        ** __main____Vector__Point__pushBack__block__14__if__15__block__16__nData;
        __rhs = stack.back ();
        stack.pop_back ();
        __main____Vector__Point__pushBack__block__14__if__15__block__16__nData = reinterpret_cast<**>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main____Vector__Point__pushBack__block__14__if__15__block__16__nData));
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
        long __main____Vector__Point__pushBack__block__14__if__15__block__16__for__17__i;
        __rhs = stack.back ();
        stack.pop_back ();
        __main____Vector__Point__pushBack__block__14__if__15__block__16__for__17__i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Point__pushBack__block__14__if__15__block__16__for__17__i));
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Point__pushBack__block__14__if__15__block__16__for__17__i));
                // RHS
                // Member Accessor obj.size
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__this));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size;
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
                    ** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Point__pushBack__block__14__if__15__block__16__for__17__i));
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
            stack.push_back (reinterpret_cast<long>(__main____Vector__Point__pushBack__block__14__if__15__block__16__nData));
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Point__pushBack__block__14__if__15__block__16__for__17__i));
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
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Point__pushBack__block__14__if__15__block__16__for__17__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main____Vector__Point__pushBack__block__14__if__15__block__16__for__17__i = __main____Vector__Point__pushBack__block__14__if__15__block__16__for__17__i + 1;
                __res = __main____Vector__Point__pushBack__block__14__if__15__block__16__for__17__i;
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
            ** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
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
        stack.push_back (reinterpret_cast<long>(__main____Vector__Point__pushBack__block__14__if__15__block__16__nData));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data = reinterpret_cast<**>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data));
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
    stack.push_back (reinterpret_cast<long>(__main____Vector__Point__pushBack__val));
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
        ** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
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
        long __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size;
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
            long __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size;
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
        (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size + 1;
        __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__Point____pushBack__Point
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Point:>::popBack() -> Point
* __method____main____Vector__Point____popBack (__main____Vector__Point* __this)
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
            ** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
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
                long __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size;
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
            (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size - 1;
            __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size;
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
// End Method Declaration - __method____main____Vector__Point____popBack
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Point:>::clear() -> void
void __method____main____Vector__Point____clear (__main____Vector__Point* __this)
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
                long __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size;
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
        // Method Call - Vector<:Point:>::popBack() -> Point
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        {
            // Arguments
            __obj = stack.back ();
            stack.pop_back ();
            * __res = __method____main____Vector__Point____popBack (reinterpret_cast<__main____Vector__Point*>(__obj));
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
// End Method Declaration - __method____main____Vector__Point____clear
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Point:>::get(int) -> Point
* __method____main____Vector__Point____get__int (__main____Vector__Point* __this, long __main____Vector__Point__get__index)
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
            ** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Point__get__index));
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
// End Method Declaration - __method____main____Vector__Point____get__int
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Point:>::set(int, Point) -> void
void __method____main____Vector__Point____set__int__Point (__main____Vector__Point* __this, long __main____Vector__Point__set__index, * __main____Vector__Point__set__value)
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
    stack.push_back (reinterpret_cast<long>(__main____Vector__Point__set__value));
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
        ** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // OFFSET
    stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Point__set__index));
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
// End Method Declaration - __method____main____Vector__Point____set__int__Point
//-------------------------------------------------------------------------

// End Class Declaration - __main____Vector__Point
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
    long __if__25__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__25__cond)
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
    long __main__strlen__block__24__size;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strlen__block__24__size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strlen__block__24__size));
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
                    long __res = __main__strlen__block__24__size;
                    __main__strlen__block__24__size = __main__strlen__block__24__size + 1;
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
        stack.push_back (*reinterpret_cast<long*>(&__main__strlen__block__24__size));
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
    long __main__strcmp__block__27__asize;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strcmp__block__27__asize = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__27__asize));
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
    long __main__strcmp__block__27__bsize;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strcmp__block__27__bsize = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__27__bsize));
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
        stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__27__asize));
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__27__bsize));
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) != *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__28__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__28__cond)
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
    long __main__strcmp__block__27__for__29__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strcmp__block__27__for__29__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__27__for__29__i));
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__27__for__29__i));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__27__asize));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__27__for__29__i));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__27__for__29__i));
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
        long __if__31__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__31__cond)
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
            stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__27__for__29__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__strcmp__block__27__for__29__i = __main__strcmp__block__27__for__29__i + 1;
            __res = __main__strcmp__block__27__for__29__i;
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
    char* __main__substr__block__33__res;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__substr__block__33__res = *reinterpret_cast<char**>(&__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__substr__block__33__res));
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
    long __main__substr__block__33__for__34__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__substr__block__33__for__34__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__33__for__34__i));
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__33__for__34__i));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__33__for__34__i));
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
        stack.push_back (reinterpret_cast<long>(__main__substr__block__33__res));
        // OFFSET
        stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__33__for__34__i));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__33__for__34__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__substr__block__33__for__34__i = __main__substr__block__33__for__34__i + 1;
            __res = __main__substr__block__33__for__34__i;
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
    stack.push_back (reinterpret_cast<long>(__main__substr__block__33__res));
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
    stack.push_back (reinterpret_cast<long>(__main__substr__block__33__res));
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
    long __main__first_index_of__block__36__size;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__first_index_of__block__36__size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__36__size));
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
    long __main__first_index_of__block__36__for__37__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__first_index_of__block__36__for__37__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__36__for__37__i));
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__36__for__37__i));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__36__size));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__36__for__37__i));
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
        long __if__39__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__39__cond)
        {
            // Body
            // Return
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__36__for__37__i));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__36__for__37__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__first_index_of__block__36__for__37__i = __main__first_index_of__block__36__for__37__i + 1;
            __res = __main__first_index_of__block__36__for__37__i;
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
    __main____Vector__char__1* __main__split__block__40__tokens;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__40__tokens = reinterpret_cast<__main____Vector__char__1*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__split__block__40__tokens));
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
    long __main__split__block__40__size;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__40__size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__size));
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
    long __main__split__block__40__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__40__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__i));
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
    long __main__split__block__40__j;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__40__j = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__j));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__i));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__size));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__i));
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
        long __if__43__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__43__cond)
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
            long __main__split__block__40__while__41__block__42__if__43__block__44__count;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__40__while__41__block__42__if__43__block__44__count = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__while__41__block__42__if__43__block__44__count));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__i));
            // LHS
            // Variable declaration
            long __main__split__block__40__while__41__block__42__if__43__block__44__k;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__40__while__41__block__42__if__43__block__44__k = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__while__41__block__42__if__43__block__44__k));
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
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__while__41__block__42__if__43__block__44__k));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__size));
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
                            long __res = __main__split__block__40__while__41__block__42__if__43__block__44__k;
                            __main__split__block__40__while__41__block__42__if__43__block__44__k = __main__split__block__40__while__41__block__42__if__43__block__44__k + 1;
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
                long __if__46__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__46__cond)
                {
                    // Body
                    // Statement
                    // Pre-Increment
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__while__41__block__42__if__43__block__44__count));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__split__block__40__while__41__block__42__if__43__block__44__count = __main__split__block__40__while__41__block__42__if__43__block__44__count + 1;
                        __res = __main__split__block__40__while__41__block__42__if__43__block__44__count;
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
                    // Break out of __while__45
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
            stack.push_back (reinterpret_cast<long>(__main__split__block__40__tokens));
            // RHS
            {
                // Arguments
                // Array Allocator
                {
                    // Addition
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__while__41__block__42__if__43__block__44__count));
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
            long __main__split__block__40__while__41__block__42__if__43__block__44__for__47__k;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__40__while__41__block__42__if__43__block__44__for__47__k = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__while__41__block__42__if__43__block__44__for__47__k));
            // Using an infinite loop so we can write a separate multi-line condition
            while (1)
            {
                // Condition
                // Less Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__while__41__block__42__if__43__block__44__for__47__k));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__while__41__block__42__if__43__block__44__count));
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
                        long __res = __main__split__block__40__i;
                        __main__split__block__40__i = __main__split__block__40__i + 1;
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
                        stack.push_back (reinterpret_cast<long>(__main__split__block__40__tokens));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__j));
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__while__41__block__42__if__43__block__44__for__47__k));
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
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__while__41__block__42__if__43__block__44__for__47__k));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__split__block__40__while__41__block__42__if__43__block__44__for__47__k = __main__split__block__40__while__41__block__42__if__43__block__44__for__47__k + 1;
                    __res = __main__split__block__40__while__41__block__42__if__43__block__44__for__47__k;
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
                    stack.push_back (reinterpret_cast<long>(__main__split__block__40__tokens));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__j));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__while__41__block__42__if__43__block__44__count));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__j));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__split__block__40__j = __main__split__block__40__j + 1;
                __res = __main__split__block__40__j;
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
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__40__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__40__i = __main__split__block__40__i + 1;
            __res = __main__split__block__40__i;
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
    stack.push_back (reinterpret_cast<long>(__main__split__block__40__tokens));
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
    long __if__50__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__50__cond)
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
    long __if__52__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__52__cond)
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
    long __if__54__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__54__cond)
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
    long __if__56__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__56__cond)
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
    long __if__58__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__58__cond)
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
    long __if__60__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__60__cond)
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
class __main____Point;
//=========================================================================
// Class Declaration - __main____Point inherits __builtin____main__Object
// Creating Dispatch Table (will be populated later)
void* __dtable____main____Point[0];
class __main____Point : public __builtin____main__Object
{
    public:
    //---------------------------------------------------------------------
    // Field - int Point::x
    // __field____main____Point____x = 1
    long __field____main____Point____x;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Field - int Point::y
    // __field____main____Point____y = 2
    long __field____main____Point____y;
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // Constructor Declaration - Point::Point(int, int) -> Point
    __main____Point (long __main____Point__Point__x, long __main____Point__Point__y)
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
        dtable = __dtable____main____Point;
        __main____Point* __this = this;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main____Point__Point__x));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main____Point__Point__y));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
    }
    // End Constructor Declaration - __ctor____main____Point____Point__int__int
    //---------------------------------------------------------------------

};
// End Class Declaration - __main____Point
//=========================================================================

//=========================================================================
// Function Declaration - print(Point) -> void
void __main____print__Point (__main____Point* __main__print__p)
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
        // Member Accessor obj.x
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__print__p));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
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
        // Member Accessor obj.y
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__print__p));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
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
// End Function Declaration - __main____print__Point
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
    // Class Declaration - __main____Vector__Point inherits __builtin____main__Object
    // *see this class def before this parent function

    // Populate Dispatch Table
    __dtable____main____Vector__Point[0] = (void*)__method____main____Vector__Point____pushBack__Point;
    __dtable____main____Vector__Point[1] = (void*)__method____main____Vector__Point____popBack;
    __dtable____main____Vector__Point[2] = (void*)__method____main____Vector__Point____clear;
    __dtable____main____Vector__Point[3] = (void*)__method____main____Vector__Point____get__int;
    __dtable____main____Vector__Point[4] = (void*)__method____main____Vector__Point____set__int__Point;
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
    // Function Declaration - manhattan(int, int, int, int) -> int
    // *see this func def before this parent function

    // Class Declaration - __main____Point inherits __builtin____main__Object
    // *see this class def before this parent function

    // Populate Dispatch Table
    // Function Declaration - print(Point) -> void
    // *see this func def before this parent function

    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - Vector<:Point:>::Vector() -> Vector<:Point:>
    // Arguments
    stack.push_back (reinterpret_cast<long>(new __main____Vector__Point ()));
    // LHS
    // Variable declaration
    __main____Vector__Point* __main__tail_positions;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__tail_positions = reinterpret_cast<__main____Vector__Point*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__tail_positions));
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
    long __main__hx;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__hx = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__hx));
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
    long __main__hy;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__hy = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__hy));
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
    long __main__tx;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__tx = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__tx));
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
    long __main__ty;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__ty = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__ty));
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
    long __main__xmin;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__xmin = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__xmin));
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
    long __main__xmax;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__xmax = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__xmax));
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
    long __main__ymin;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__ymin = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__ymin));
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
    long __main__ymax;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__ymax = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__ymax));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Method Call - Vector<:Point:>::pushBack(Point) -> void
    // LHS
    stack.push_back (reinterpret_cast<long>(__main__tail_positions));
    // RHS
    {
        // Arguments
        // Constructor Call - Point::Point(int, int) -> Point
        // Arguments
        // Int Literal
        stack.push_back (0);
        // Int Literal
        stack.push_back (0);
        __arg1 = stack.back ();
        stack.pop_back ();
        __arg0 = stack.back ();
        stack.pop_back ();
        stack.push_back (reinterpret_cast<long>(new __main____Point (__arg0, __arg1)));
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        __main____Point* __arg0 = reinterpret_cast<__main____Point*>(__stackval);
        __obj = stack.back ();
        stack.pop_back ();
        __method____main____Vector__Point____pushBack__Point (reinterpret_cast<__main____Vector__Point*>(__obj), __arg0);
        // push dummy value - method rtype is void
        stack.push_back (0);
    }
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
    long __main__for__66__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__for__66__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__for__66__i));
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__for__66__i));
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
        // Assignment - '='
        // RHS
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
            stack.push_back (*reinterpret_cast<long*>(&__main__for__66__i));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        char* __main__for__66__block__67__line;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__for__66__block__67__line = *reinterpret_cast<char**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__for__66__block__67__line));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Function Call - split(char[], char) -> Vector<:char[]:>
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__for__66__block__67__line));
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>(' ')));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            char __arg1 = static_cast<char>(static_cast<unsigned char>(__stackval));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            char* __arg0 = *reinterpret_cast<char**>(&__stackval);
            // split
            __main____Vector__char__1* __res = __main____split__char__1__char (__arg0, __arg1);
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        __main____Vector__char__1* __main__for__66__block__67__tokens;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__for__66__block__67__tokens = reinterpret_cast<__main____Vector__char__1*>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__for__66__block__67__tokens));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Function Call - stringToInt(char[]) -> int
        {
            // Arguments
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__for__66__block__67__tokens));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Int Literal
                stack.push_back (1);
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
            // stringToInt
            long __res = __builtin__stringToInt__char__1 (__arg0);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Variable declaration
        long __main__for__66__block__67__amt;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__for__66__block__67__amt = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__amt));
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
        long __main__for__66__block__67__for__68__j;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__for__66__block__67__for__68__j = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__j));
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__j));
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__amt));
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
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__for__66__block__67__tokens));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Int Literal
                        stack.push_back (0);
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
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
                stack.push_back (static_cast<long>(static_cast<unsigned char>('U')));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__70__cond = stack.back ();
            stack.pop_back ();
            // Condition for elif #0
            // Equal
            {
                // LHS
                // Subscript Expression
                {
                    // LHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__for__66__block__67__tokens));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Int Literal
                        stack.push_back (0);
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
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
                stack.push_back (static_cast<long>(static_cast<unsigned char>('R')));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __elif__70x0__cond = stack.back ();
            stack.pop_back ();
            // Condition for elif #1
            // Equal
            {
                // LHS
                // Subscript Expression
                {
                    // LHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__for__66__block__67__tokens));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Int Literal
                        stack.push_back (0);
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
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
                stack.push_back (static_cast<long>(static_cast<unsigned char>('D')));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __elif__70x1__cond = stack.back ();
            stack.pop_back ();
            // Condition for elif #2
            // Equal
            {
                // LHS
                // Subscript Expression
                {
                    // LHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__for__66__block__67__tokens));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Int Literal
                        stack.push_back (0);
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
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
                stack.push_back (static_cast<long>(static_cast<unsigned char>('L')));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __elif__70x2__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__70__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Pre-Increment
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__hy));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__hy = __main__hy + 1;
                    __res = __main__hy;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // Elif-Statement
            // Condition
            else if (__elif__70x0__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Pre-Increment
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__hx));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__hx = __main__hx + 1;
                    __res = __main__hx;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Elif-Statement
            // Condition
            else if (__elif__70x1__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Pre-Decrement
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__hy));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__hy = __main__hy - 1;
                    __res = __main__hy;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Elif-Statement
            // Condition
            else if (__elif__70x2__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Pre-Decrement
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__hx));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__hx = __main__hx - 1;
                    __res = __main__hx;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '='
            // RHS
            // Int Literal
            stack.push_back (0);
            // LHS
            // Variable declaration
            long __main__for__66__block__67__for__68__block__69__tail_moved;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__for__66__block__67__for__68__block__69__tail_moved = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__tail_moved));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            // Function Call - abs(int) -> int
            {
                // Arguments
                // Subtraction
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__hx));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__tx));
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
            // LHS
            // Variable declaration
            long __main__for__66__block__67__for__68__block__69__deltax;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__for__66__block__67__for__68__block__69__deltax = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__deltax));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            // Function Call - abs(int) -> int
            {
                // Arguments
                // Subtraction
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__hy));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__ty));
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
            // LHS
            // Variable declaration
            long __main__for__66__block__67__for__68__block__69__deltay;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__for__66__block__67__for__68__block__69__deltay = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__deltay));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // AND
            // LHS
            // Equal
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__hx));
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__tx));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) == *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was true
            if (__lhs)
            {
                // RHS
                // Greater Than or Equal to
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__deltay));
                    // RHS
                    // Int Literal
                    stack.push_back (2);
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = *reinterpret_cast<long*>(&__lhs) >= *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            stack.pop_back ();
            __res = __lhs && __rhs;
            stack.push_back (__res);
            long __if__75__cond = stack.back ();
            stack.pop_back ();
            // Condition for elif #0
            // AND
            // LHS
            // Equal
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__hy));
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__ty));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) == *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was true
            if (__lhs)
            {
                // RHS
                // Greater Than or Equal to
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__deltax));
                    // RHS
                    // Int Literal
                    stack.push_back (2);
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = *reinterpret_cast<long*>(&__lhs) >= *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            stack.pop_back ();
            __res = __lhs && __rhs;
            stack.push_back (__res);
            long __elif__75x0__cond = stack.back ();
            stack.pop_back ();
            // Condition for elif #1
            // AND
            // LHS
            // AND
            // LHS
            // Not Equal
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__hx));
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__tx));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) != *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was true
            if (__lhs)
            {
                // RHS
                // Not Equal
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__hy));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__ty));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = *reinterpret_cast<long*>(&__lhs) != *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            stack.pop_back ();
            __res = __lhs && __rhs;
            stack.push_back (__res);
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was true
            if (__lhs)
            {
                // RHS
                // Greater Than
                {
                    // LHS
                    // Function Call - manhattan(int, int, int, int) -> int
                    {
                        // Arguments
                        stack.push_back (*reinterpret_cast<long*>(&__main__hx));
                        stack.push_back (*reinterpret_cast<long*>(&__main__hy));
                        stack.push_back (*reinterpret_cast<long*>(&__main__tx));
                        stack.push_back (*reinterpret_cast<long*>(&__main__ty));
                        
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
                    // Int Literal
                    stack.push_back (2);
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = *reinterpret_cast<long*>(&__lhs) > *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            stack.pop_back ();
            __res = __lhs && __rhs;
            stack.push_back (__res);
            long __elif__75x1__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__75__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '='
                // RHS
                // Greater Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__hy));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__ty));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = *reinterpret_cast<long*>(&__lhs) > *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // LHS
                // Variable declaration
                long __main__for__66__block__67__for__68__block__69__if__75__block__76__isup;
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__66__block__67__for__68__block__69__if__75__block__76__isup = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__if__75__block__76__isup));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
                // If-Statement
                // Precomputing all if/elif conditions and give unique names
                // bc we can't have code between if and elif
                // Condition
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__if__75__block__76__isup));
                long __if__77__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__77__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__ty = __main__ty + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&__main__ty));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                //---------------------------------------------------------
                // Else-Statement
                else
                {
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__ty = __main__ty - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&__main__ty));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                //---------------------------------------------------------
                // End of if
                //---------------------------------------------------------
                // Statement
                // Assignment - '='
                // RHS
                // Int Literal
                stack.push_back (1);
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__66__block__67__for__68__block__69__tail_moved = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__tail_moved));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // Elif-Statement
            // Condition
            else if (__elif__75x0__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '='
                // RHS
                // Greater Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__hx));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__tx));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = *reinterpret_cast<long*>(&__lhs) > *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // LHS
                // Variable declaration
                long __main__for__66__block__67__for__68__block__69__elif__75x0__block__80__isright;
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__66__block__67__for__68__block__69__elif__75x0__block__80__isright = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__elif__75x0__block__80__isright));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
                // If-Statement
                // Precomputing all if/elif conditions and give unique names
                // bc we can't have code between if and elif
                // Condition
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__elif__75x0__block__80__isright));
                long __if__81__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__81__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__tx = __main__tx + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&__main__tx));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                //---------------------------------------------------------
                // Else-Statement
                else
                {
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__tx = __main__tx - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&__main__tx));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                //---------------------------------------------------------
                // End of if
                //---------------------------------------------------------
                // Statement
                // Assignment - '='
                // RHS
                // Int Literal
                stack.push_back (1);
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__66__block__67__for__68__block__69__tail_moved = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__tail_moved));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Elif-Statement
            // Condition
            else if (__elif__75x1__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '='
                // RHS
                // Greater Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__hy));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__ty));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = *reinterpret_cast<long*>(&__lhs) > *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // LHS
                // Variable declaration
                long __main__for__66__block__67__for__68__block__69__elif__75x1__block__84__isup;
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__66__block__67__for__68__block__69__elif__75x1__block__84__isup = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__elif__75x1__block__84__isup));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Statement
                // Assignment - '='
                // RHS
                // Greater Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__hx));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__tx));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = *reinterpret_cast<long*>(&__lhs) > *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // LHS
                // Variable declaration
                long __main__for__66__block__67__for__68__block__69__elif__75x1__block__84__isright;
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__66__block__67__for__68__block__69__elif__75x1__block__84__isright = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__elif__75x1__block__84__isright));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
                // If-Statement
                // Precomputing all if/elif conditions and give unique names
                // bc we can't have code between if and elif
                // Condition
                // AND
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__elif__75x1__block__84__isup));
                __lhs = stack.back ();
                // Short circuit eval - only check rhs if lhs was true
                if (__lhs)
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__elif__75x1__block__84__isright));
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                long __if__85__cond = stack.back ();
                stack.pop_back ();
                // Condition for elif #0
                // AND
                // LHS
                // Negate
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__elif__75x1__block__84__isup));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    long __res = !*reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __lhs = stack.back ();
                // Short circuit eval - only check rhs if lhs was true
                if (__lhs)
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__elif__75x1__block__84__isright));
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                long __elif__85x0__cond = stack.back ();
                stack.pop_back ();
                // Condition for elif #1
                // AND
                // LHS
                // Negate
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__elif__75x1__block__84__isup));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    long __res = !*reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __lhs = stack.back ();
                // Short circuit eval - only check rhs if lhs was true
                if (__lhs)
                {
                    // RHS
                    // Negate
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__elif__75x1__block__84__isright));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        long __res = !*reinterpret_cast<long*>(&__rhs);
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                long __elif__85x1__cond = stack.back ();
                stack.pop_back ();
                // Condition for elif #2
                // AND
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__elif__75x1__block__84__isup));
                __lhs = stack.back ();
                // Short circuit eval - only check rhs if lhs was true
                if (__lhs)
                {
                    // RHS
                    // Negate
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__elif__75x1__block__84__isright));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        long __res = !*reinterpret_cast<long*>(&__rhs);
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                long __elif__85x2__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__85__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Pre-Increment
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__ty));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__ty = __main__ty + 1;
                        __res = __main__ty;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Pre-Increment
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__tx));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__tx = __main__tx + 1;
                        __res = __main__tx;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                //---------------------------------------------------------
                // Elif-Statement
                // Condition
                else if (__elif__85x0__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Pre-Decrement
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__ty));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__ty = __main__ty - 1;
                        __res = __main__ty;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Pre-Increment
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__tx));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__tx = __main__tx + 1;
                        __res = __main__tx;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                //---------------------------------------------------------
                //---------------------------------------------------------
                // Elif-Statement
                // Condition
                else if (__elif__85x1__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Pre-Decrement
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__ty));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__ty = __main__ty - 1;
                        __res = __main__ty;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Pre-Decrement
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__tx));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__tx = __main__tx - 1;
                        __res = __main__tx;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                //---------------------------------------------------------
                //---------------------------------------------------------
                // Elif-Statement
                // Condition
                else if (__elif__85x2__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Pre-Increment
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__ty));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__ty = __main__ty + 1;
                        __res = __main__ty;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Pre-Decrement
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__tx));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__tx = __main__tx - 1;
                        __res = __main__tx;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                //---------------------------------------------------------
                // End of if
                //---------------------------------------------------------
                // Statement
                // Assignment - '='
                // RHS
                // Int Literal
                stack.push_back (1);
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__66__block__67__for__68__block__69__tail_moved = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__tail_moved));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__tail_moved));
            long __if__90__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__90__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '='
                // RHS
                // Int Literal
                stack.push_back (0);
                // LHS
                // Variable declaration
                long __main__for__66__block__67__for__68__block__69__if__90__block__91__exists;
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__66__block__67__for__68__block__69__if__90__block__91__exists = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__if__90__block__91__exists));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                //---------------------------------------------------------
                // For-Loop
                // Init
                // Assignment - '='
                // RHS
                // Int Literal
                stack.push_back (0);
                // LHS
                // Variable declaration
                long __main__for__66__block__67__for__68__block__69__if__90__block__91__for__92__k;
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__66__block__67__for__68__block__69__if__90__block__91__for__92__k = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__if__90__block__91__for__92__k));
                // Using an infinite loop so we can write a separate multi-line condition
                while (1)
                {
                    // Condition
                    // Less Than
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__if__90__block__91__for__92__k));
                        // RHS
                        // Member Accessor obj.size
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__tail_positions));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size;
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
                    //-----------------------------------------------------
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
                            stack.push_back (reinterpret_cast<long>(__main__tail_positions));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            __main____Point** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__if__90__block__91__for__92__k));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        __main____Point* __res = (reinterpret_cast<__main____Point**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // LHS
                    // Variable declaration
                    __main____Point* __main__for__66__block__67__for__68__block__69__if__90__block__91__for__92__block__93__tail_pos;
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__for__66__block__67__for__68__block__69__if__90__block__91__for__92__block__93__tail_pos = reinterpret_cast<__main____Point*>(__rhs);
                    // Result of assignment
                    stack.push_back (reinterpret_cast<long>(__main__for__66__block__67__for__68__block__69__if__90__block__91__for__92__block__93__tail_pos));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                    // If-Statement
                    // Precomputing all if/elif conditions and give unique names
                    // bc we can't have code between if and elif
                    // Condition
                    // AND
                    // LHS
                    // Equal
                    {
                        // LHS
                        // Member Accessor obj.x
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__for__66__block__67__for__68__block__69__if__90__block__91__for__92__block__93__tail_pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__tx));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = *reinterpret_cast<long*>(&__lhs) == *reinterpret_cast<long*>(&__rhs);
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __lhs = stack.back ();
                    // Short circuit eval - only check rhs if lhs was true
                    if (__lhs)
                    {
                        // RHS
                        // Equal
                        {
                            // LHS
                            // Member Accessor obj.y
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__for__66__block__67__for__68__block__69__if__90__block__91__for__92__block__93__tail_pos));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
                                stack.push_back (*reinterpret_cast<long*>(&__res));
                            }
                            // RHS
                            stack.push_back (*reinterpret_cast<long*>(&__main__ty));
                            __rhs = stack.back ();
                            stack.pop_back ();
                            __lhs = stack.back ();
                            stack.pop_back ();
                            long __res = *reinterpret_cast<long*>(&__lhs) == *reinterpret_cast<long*>(&__rhs);
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        __rhs = stack.back ();
                        stack.pop_back ();
                    }
                    stack.pop_back ();
                    __res = __lhs && __rhs;
                    stack.push_back (__res);
                    long __if__94__cond = stack.back ();
                    stack.pop_back ();
                    // get condition from stack
                    if (__if__94__cond)
                    {
                        // Body
                        //-------------------------------------------------
                        // Code Block
                        // Statement
                        // Assignment - '='
                        // RHS
                        // Int Literal
                        stack.push_back (1);
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__for__66__block__67__for__68__block__69__if__90__block__91__exists = *reinterpret_cast<long*>(&__rhs);
                        // Result of assignment
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__if__90__block__91__exists));
                        // Statement results can be ignored
                        stack.pop_back ();
                        // End Statement

                        // Break out of __for__92
                        break;
                        //-------------------------------------------------
                    }
                    // End of if
                    //-----------------------------------------------------
                    //-----------------------------------------------------
                    // Update
                    // Pre-Increment
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__if__90__block__91__for__92__k));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__for__66__block__67__for__68__block__69__if__90__block__91__for__92__k = __main__for__66__block__67__for__68__block__69__if__90__block__91__for__92__k + 1;
                        __res = __main__for__66__block__67__for__68__block__69__if__90__block__91__for__92__k;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                }
                //---------------------------------------------------------
                //---------------------------------------------------------
                // If-Statement
                // Precomputing all if/elif conditions and give unique names
                // bc we can't have code between if and elif
                // Condition
                // Negate
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__block__69__if__90__block__91__exists));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    long __res = !*reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                long __if__96__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__96__cond)
                {
                    // Body
                    // Statement
                    // Method Call - Vector<:Point:>::pushBack(Point) -> void
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__tail_positions));
                    // RHS
                    {
                        // Arguments
                        // Constructor Call - Point::Point(int, int) -> Point
                        // Arguments
                        stack.push_back (*reinterpret_cast<long*>(&__main__tx));
                        stack.push_back (*reinterpret_cast<long*>(&__main__ty));
                        __arg1 = stack.back ();
                        stack.pop_back ();
                        __arg0 = stack.back ();
                        stack.pop_back ();
                        stack.push_back (reinterpret_cast<long>(new __main____Point (__arg0, __arg1)));
                        __stackval = stack.back ();
                        stack.pop_back ();
                        // Reinterpret from general register
                        __main____Point* __arg0 = reinterpret_cast<__main____Point*>(__stackval);
                        __obj = stack.back ();
                        stack.pop_back ();
                        __method____main____Vector__Point____pushBack__Point (reinterpret_cast<__main____Vector__Point*>(__obj), __arg0);
                        // push dummy value - method rtype is void
                        stack.push_back (0);
                    }
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
            }
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '='
            // RHS
            // Function Call - min(int, int) -> int
            {
                // Arguments
                stack.push_back (*reinterpret_cast<long*>(&__main__hx));
                stack.push_back (*reinterpret_cast<long*>(&__main__xmin));
                
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
            __main__xmin = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__xmin));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            // Function Call - max(int, int) -> int
            {
                // Arguments
                stack.push_back (*reinterpret_cast<long*>(&__main__hx));
                stack.push_back (*reinterpret_cast<long*>(&__main__xmax));
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                long __arg1 = *reinterpret_cast<long*>(&__stackval);
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                long __arg0 = *reinterpret_cast<long*>(&__stackval);
                // max
                long __res = __main____max__int__int (__arg0, __arg1);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            __main__xmax = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__xmax));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            // Function Call - min(int, int) -> int
            {
                // Arguments
                stack.push_back (*reinterpret_cast<long*>(&__main__hy));
                stack.push_back (*reinterpret_cast<long*>(&__main__ymin));
                
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
            __main__ymin = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__ymin));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            // Function Call - max(int, int) -> int
            {
                // Arguments
                stack.push_back (*reinterpret_cast<long*>(&__main__hy));
                stack.push_back (*reinterpret_cast<long*>(&__main__ymax));
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                long __arg1 = *reinterpret_cast<long*>(&__stackval);
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                long __arg0 = *reinterpret_cast<long*>(&__stackval);
                // max
                long __res = __main____max__int__int (__arg0, __arg1);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            __main__ymax = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__ymax));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // Update
            // Pre-Increment
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__66__block__67__for__68__j));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__66__block__67__for__68__j = __main__for__66__block__67__for__68__j + 1;
                __res = __main__for__66__block__67__for__68__j;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
        }
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // Update
        // Pre-Increment
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__for__66__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__for__66__i = __main__for__66__i + 1;
            __res = __main__for__66__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
    }
    //---------------------------------------------------------------------
    // Statement
    // Function Call - println(int) -> void
    {
        // Arguments
        // Member Accessor obj.size
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__tail_positions));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        
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
