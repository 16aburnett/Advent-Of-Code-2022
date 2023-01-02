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

// Class Declaration - __main____Vector__char__1 inherits __builtin____main__Object
void* __dtable____main____Vector__char__1[5];
class __main____Vector__char__1 : public __builtin____main__Object
{
    public:
    // Field - char[][] Vector<:char[]:>::data
    char** __field____main____Vector__char__1____data;
    // Field - int Vector<:char[]:>::size
    long __field____main____Vector__char__1____size;
    // Field - int Vector<:char[]:>::capacity
    long __field____main____Vector__char__1____capacity;
    __main____Vector__char__1 ();
    __main____Vector__char__1 (long __main____Vector__char__1__size);
};
long __main____strlen__char__1 (char* __main__strlen__str);
long __main____strcmp__char__1__char__1 (char* __main__strcmp__a, char* __main__strcmp__b);
char* __main____substr__char__1__int__int (char* __main__substr__a, long __main__substr__start, long __main__substr__end);
long __main____first_index_of__char__1__char (char* __main__first_index_of__arr, char __main__first_index_of__c);
__main____Vector__char__1* __main____split__char__1__char (char* __main__split__str, char __main__split__delim);
long __main____max__int__int (long __main__max__a, long __main__max__b);
double __main____max__float__float (double __main__max__a, double __main__max__b);
long __main____min__int__int (long __main__min__a, long __main__min__b);
double __main____min__float__float (double __main__min__a, double __main__min__b);
long __main____abs__int (long __main__abs__v);
double __main____abs__float (double __main__abs__v);
void __main____printboard__Vector__tparam0__char (__main____Vector__char__1* __main__printboard__board);
void __main____printboard2__Vector__tparam0__char (__main____Vector__char__1* __main__printboard2__board);
//=========================================================================
//### Functions section ##################################################
//=========================================================================

//-------------------------------------------------------------------------
// Constructor Declaration - Vector<:char[]:>::Vector() -> Vector<:char[]:>
__main____Vector__char__1::__main____Vector__char__1 ()
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
    //---------------------------------------------------------------------
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

    //---------------------------------------------------------------------
}
// End Constructor Declaration - __ctor____main____Vector__char__1____Vector
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Constructor Declaration - Vector<:char[]:>::Vector(int) -> Vector<:char[]:>
__main____Vector__char__1::__main____Vector__char__1 (long __main____Vector__char__1__Vector__size)
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
    //---------------------------------------------------------------------
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

    //---------------------------------------------------------------------
}
// End Constructor Declaration - __ctor____main____Vector__char__1____Vector__int
//-------------------------------------------------------------------------

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
        // We can ignore the init result
        stack.pop_back ();
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
            // We can ignore the update result
            stack.pop_back ();
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
    return *reinterpret_cast<char**>(&__res);
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
    return *reinterpret_cast<char**>(&__res);
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
        stack.push_back ((long)nullptr);
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<char**>(&__lhs) == nullptr;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__13__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__13__cond)
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
    long __main__strlen__block__12__size;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strlen__block__12__size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strlen__block__12__size));
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
                    long __res = __main__strlen__block__12__size;
                    __main__strlen__block__12__size = __main__strlen__block__12__size + 1;
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
        stack.push_back (*reinterpret_cast<long*>(&__main__strlen__block__12__size));
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
    long __main__strcmp__block__15__asize;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strcmp__block__15__asize = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__15__asize));
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
    long __main__strcmp__block__15__bsize;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strcmp__block__15__bsize = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__15__bsize));
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
        stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__15__asize));
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__15__bsize));
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) != *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__16__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__16__cond)
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
    long __main__strcmp__block__15__for__17__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strcmp__block__15__for__17__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__15__for__17__i));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__15__for__17__i));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__15__asize));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__15__for__17__i));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__15__for__17__i));
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
        long __if__19__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__19__cond)
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
            stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__15__for__17__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__strcmp__block__15__for__17__i = __main__strcmp__block__15__for__17__i + 1;
            __res = __main__strcmp__block__15__for__17__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // We can ignore the update result
        stack.pop_back ();
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
    char* __main__substr__block__21__res;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__substr__block__21__res = *reinterpret_cast<char**>(&__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__substr__block__21__res));
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
    long __main__substr__block__21__for__22__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__substr__block__21__for__22__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__21__for__22__i));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__21__for__22__i));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__21__for__22__i));
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
        stack.push_back (reinterpret_cast<long>(__main__substr__block__21__res));
        // OFFSET
        stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__21__for__22__i));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__21__for__22__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__substr__block__21__for__22__i = __main__substr__block__21__for__22__i + 1;
            __res = __main__substr__block__21__for__22__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // We can ignore the update result
        stack.pop_back ();
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
    stack.push_back (reinterpret_cast<long>(__main__substr__block__21__res));
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
    stack.push_back (reinterpret_cast<long>(__main__substr__block__21__res));
    __res = stack.back ();
    stack.pop_back ();
    return *reinterpret_cast<char**>(&__res);
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
    long __main__first_index_of__block__24__size;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__first_index_of__block__24__size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__24__size));
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
    long __main__first_index_of__block__24__for__25__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__first_index_of__block__24__for__25__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__24__for__25__i));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__24__for__25__i));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__24__size));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__24__for__25__i));
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
        long __if__27__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__27__cond)
        {
            // Body
            // Return
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__24__for__25__i));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__24__for__25__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__first_index_of__block__24__for__25__i = __main__first_index_of__block__24__for__25__i + 1;
            __res = __main__first_index_of__block__24__for__25__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // We can ignore the update result
        stack.pop_back ();
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
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(new __main____Vector__char__1 ()));
    }
    // LHS
    // Variable declaration
    __main____Vector__char__1* __main__split__block__28__tokens;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__28__tokens = reinterpret_cast<__main____Vector__char__1*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__split__block__28__tokens));
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
    long __main__split__block__28__size;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__28__size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__size));
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
    long __main__split__block__28__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__28__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__i));
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
    long __main__split__block__28__j;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__28__j = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__j));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__i));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__size));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__i));
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
        long __if__31__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__31__cond)
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
            long __main__split__block__28__while__29__block__30__if__31__block__32__count;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__28__while__29__block__30__if__31__block__32__count = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__while__29__block__30__if__31__block__32__count));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__i));
            // LHS
            // Variable declaration
            long __main__split__block__28__while__29__block__30__if__31__block__32__k;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__28__while__29__block__30__if__31__block__32__k = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__while__29__block__30__if__31__block__32__k));
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
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__while__29__block__30__if__31__block__32__k));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__size));
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
                            long __res = __main__split__block__28__while__29__block__30__if__31__block__32__k;
                            __main__split__block__28__while__29__block__30__if__31__block__32__k = __main__split__block__28__while__29__block__30__if__31__block__32__k + 1;
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
                long __if__34__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__34__cond)
                {
                    // Body
                    // Statement
                    // Pre-Increment
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__while__29__block__30__if__31__block__32__count));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__split__block__28__while__29__block__30__if__31__block__32__count = __main__split__block__28__while__29__block__30__if__31__block__32__count + 1;
                        __res = __main__split__block__28__while__29__block__30__if__31__block__32__count;
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
                    // Break out of __while__33
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
            stack.push_back (reinterpret_cast<long>(__main__split__block__28__tokens));
            // RHS
            {
                // Arguments
                // Array Allocator
                {
                    // Addition
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__while__29__block__30__if__31__block__32__count));
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
            long __main__split__block__28__while__29__block__30__if__31__block__32__for__35__k;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__28__while__29__block__30__if__31__block__32__for__35__k = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__while__29__block__30__if__31__block__32__for__35__k));
            // We can ignore the init result
            stack.pop_back ();
            // Using an infinite loop so we can write a separate multi-line condition
            while (1)
            {
                // Condition
                // Less Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__while__29__block__30__if__31__block__32__for__35__k));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__while__29__block__30__if__31__block__32__count));
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
                        long __res = __main__split__block__28__i;
                        __main__split__block__28__i = __main__split__block__28__i + 1;
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
                        stack.push_back (reinterpret_cast<long>(__main__split__block__28__tokens));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__j));
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__while__29__block__30__if__31__block__32__for__35__k));
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
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__while__29__block__30__if__31__block__32__for__35__k));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__split__block__28__while__29__block__30__if__31__block__32__for__35__k = __main__split__block__28__while__29__block__30__if__31__block__32__for__35__k + 1;
                    __res = __main__split__block__28__while__29__block__30__if__31__block__32__for__35__k;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // We can ignore the update result
                stack.pop_back ();
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
                    stack.push_back (reinterpret_cast<long>(__main__split__block__28__tokens));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__j));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__while__29__block__30__if__31__block__32__count));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__j));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__split__block__28__j = __main__split__block__28__j + 1;
                __res = __main__split__block__28__j;
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
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__28__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__28__i = __main__split__block__28__i + 1;
            __res = __main__split__block__28__i;
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
    stack.push_back (reinterpret_cast<long>(__main__split__block__28__tokens));
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<__main____Vector__char__1*>(__res);
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
    long __if__38__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__38__cond)
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
    long __if__40__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__40__cond)
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
    long __if__42__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__42__cond)
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
    long __if__44__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__44__cond)
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
    long __if__46__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__46__cond)
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
    long __if__48__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__48__cond)
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
// Function Declaration - printboard(Vector<:char[]:>) -> void
void __main____printboard__Vector__tparam0__char (__main____Vector__char__1* __main__printboard__board)
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
    return;
    //---------------------------------------------------------------------
    // For-Loop
    // Init
    // Assignment - '='
    // RHS
    // Subtraction
    {
        // LHS
        // Member Accessor obj.size
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__printboard__board));
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
        long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // LHS
    // Variable declaration
    long __main__printboard__block__51__for__52__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__printboard__block__51__for__52__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__51__for__52__i));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Greater Than or Equal to
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__51__for__52__i));
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
        long __cond = stack.back ();
        stack.pop_back ();
        // break out of loop if condition is false
        if (__cond == 0) break;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        //-----------------------------------------------------------------
        // For-Loop
        // Init
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Variable declaration
        long __main__printboard__block__51__for__52__block__53__for__54__j;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__printboard__block__51__for__52__block__53__for__54__j = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__51__for__52__block__53__for__54__j));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__51__for__52__block__53__for__54__j));
                // RHS
                // Int Literal
                stack.push_back (9);
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
            // Function Call - print(char) -> void
            {
                // Arguments
                // Subscript Expression
                {
                    // LHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__printboard__board));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__51__for__52__i));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__51__for__52__block__53__for__54__j));
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
                char __arg0 = static_cast<char>(static_cast<unsigned char>(__stackval));
                // print
                __builtin__print__char (__arg0);
                // push dummy value - funcall returns void
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
                stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__51__for__52__block__53__for__54__j));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__printboard__block__51__for__52__block__53__for__54__j = __main__printboard__block__51__for__52__block__53__for__54__j + 1;
                __res = __main__printboard__block__51__for__52__block__53__for__54__j;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // We can ignore the update result
            stack.pop_back ();
        }
        //-----------------------------------------------------------------
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

        //-----------------------------------------------------------------
        // Update
        // Pre-Decrement
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__51__for__52__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__printboard__block__51__for__52__i = __main__printboard__block__51__for__52__i - 1;
            __res = __main__printboard__block__51__for__52__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // We can ignore the update result
        stack.pop_back ();
    }
    //---------------------------------------------------------------------
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
// End Function Declaration - __main____printboard__Vector__tparam0__char
//=========================================================================

//=========================================================================
// Function Declaration - printboard2(Vector<:char[]:>) -> void
void __main____printboard2__Vector__tparam0__char (__main____Vector__char__1* __main__printboard2__board)
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
    // For-Loop
    // Init
    // Assignment - '='
    // RHS
    // Subtraction
    {
        // LHS
        // Member Accessor obj.size
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__printboard2__board));
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
        long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // LHS
    // Variable declaration
    long __main__printboard2__block__56__for__57__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__printboard2__block__56__for__57__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__printboard2__block__56__for__57__i));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Greater Than or Equal to
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__printboard2__block__56__for__57__i));
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
        long __cond = stack.back ();
        stack.pop_back ();
        // break out of loop if condition is false
        if (__cond == 0) break;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        //-----------------------------------------------------------------
        // For-Loop
        // Init
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Variable declaration
        long __main__printboard2__block__56__for__57__block__58__for__59__j;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__printboard2__block__56__for__57__block__58__for__59__j = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__printboard2__block__56__for__57__block__58__for__59__j));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__printboard2__block__56__for__57__block__58__for__59__j));
                // RHS
                // Int Literal
                stack.push_back (9);
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
            // Function Call - print(char) -> void
            {
                // Arguments
                // Subscript Expression
                {
                    // LHS
                    // Subscript Expression
                    {
                        // LHS
                        // Member Accessor obj.data
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__printboard2__board));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__printboard2__block__56__for__57__i));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    stack.push_back (*reinterpret_cast<long*>(&__main__printboard2__block__56__for__57__block__58__for__59__j));
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
                char __arg0 = static_cast<char>(static_cast<unsigned char>(__stackval));
                // print
                __builtin__print__char (__arg0);
                // push dummy value - funcall returns void
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
                stack.push_back (*reinterpret_cast<long*>(&__main__printboard2__block__56__for__57__block__58__for__59__j));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__printboard2__block__56__for__57__block__58__for__59__j = __main__printboard2__block__56__for__57__block__58__for__59__j + 1;
                __res = __main__printboard2__block__56__for__57__block__58__for__59__j;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // We can ignore the update result
            stack.pop_back ();
        }
        //-----------------------------------------------------------------
        // Statement
        // Function Call - println(int) -> void
        {
            // Arguments
            stack.push_back (*reinterpret_cast<long*>(&__main__printboard2__block__56__for__57__i));
            
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

        //-----------------------------------------------------------------
        // Update
        // Pre-Decrement
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__printboard2__block__56__for__57__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__printboard2__block__56__for__57__i = __main__printboard2__block__56__for__57__i - 1;
            __res = __main__printboard2__block__56__for__57__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // We can ignore the update result
        stack.pop_back ();
    }
    //---------------------------------------------------------------------
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
// End Function Declaration - __main____printboard2__Vector__tparam0__char
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
    // Class Declaration - __main____Vector__char__1 inherits __builtin____main__Object
    // *see this class def before this parent function

    // Populate Dispatch Table
    __dtable____main____Vector__char__1[0] = (void*)__method____main____Vector__char__1____pushBack__char__1;
    __dtable____main____Vector__char__1[1] = (void*)__method____main____Vector__char__1____popBack;
    __dtable____main____Vector__char__1[2] = (void*)__method____main____Vector__char__1____clear;
    __dtable____main____Vector__char__1[3] = (void*)__method____main____Vector__char__1____get__int;
    __dtable____main____Vector__char__1[4] = (void*)__method____main____Vector__char__1____set__int__char__1;
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

    //=====================================================================
    // Class Template - 
    // End Class Template - 
    //=====================================================================

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
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(new __main____Vector__char__1 ()));
    }
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
            stack.push_back ((long)nullptr);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<char**>(&__lhs) != nullptr;
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
    // Statement
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (0);
    // LHS
    // Variable declaration
    long __main__x;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__x = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__x));
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
    long __main__y;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__y = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__y));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - Vector<:char[]:>::Vector() -> Vector<:char[]:>
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(new __main____Vector__char__1 ()));
    }
    // LHS
    // Variable declaration
    __main____Vector__char__1* __main__board;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__board = reinterpret_cast<__main____Vector__char__1*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__board));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Method Call - Vector<:char[]:>::pushBack(char[]) -> void
    // LHS
    stack.push_back (reinterpret_cast<long>(__main__board));
    // RHS
    {
        // Arguments
        // String Literal
        {
            char str_literal[] = "+-------+";
            // convert to a heap string
            char* str = new char[10];
            // copy string to heap allocation
            std::memcpy (str, &str_literal, 10);
            stack.push_back (reinterpret_cast<long> (str));
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

    // Statement
    // Method Call - Vector<:char[]:>::pushBack(char[]) -> void
    // LHS
    stack.push_back (reinterpret_cast<long>(__main__board));
    // RHS
    {
        // Arguments
        // String Literal
        {
            char str_literal[] = "|.......|";
            // convert to a heap string
            char* str = new char[10];
            // copy string to heap allocation
            std::memcpy (str, &str_literal, 10);
            stack.push_back (reinterpret_cast<long> (str));
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

    // Statement
    // Method Call - Vector<:char[]:>::pushBack(char[]) -> void
    // LHS
    stack.push_back (reinterpret_cast<long>(__main__board));
    // RHS
    {
        // Arguments
        // String Literal
        {
            char str_literal[] = "|.......|";
            // convert to a heap string
            char* str = new char[10];
            // copy string to heap allocation
            std::memcpy (str, &str_literal, 10);
            stack.push_back (reinterpret_cast<long> (str));
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

    // Statement
    // Method Call - Vector<:char[]:>::pushBack(char[]) -> void
    // LHS
    stack.push_back (reinterpret_cast<long>(__main__board));
    // RHS
    {
        // Arguments
        // String Literal
        {
            char str_literal[] = "|.......|";
            // convert to a heap string
            char* str = new char[10];
            // copy string to heap allocation
            std::memcpy (str, &str_literal, 10);
            stack.push_back (reinterpret_cast<long> (str));
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

    // Function Declaration - printboard(Vector<:char[]:>) -> void
    // *see this func def before this parent function

    // Function Declaration - printboard2(Vector<:char[]:>) -> void
    // *see this func def before this parent function

    // Statement
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (0);
    // LHS
    // Variable declaration
    long __main__shift_index;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__shift_index = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
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
                // Int Literal
                stack.push_back (0);
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
    long __main__shift_max;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__shift_max = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__shift_max));
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
    long __main__iter;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__iter = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__iter));
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
    long __main__num_rocks;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__num_rocks = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__num_rocks));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (2022);
    // LHS
    // Variable declaration
    long __main__max_rocks;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__max_rocks = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__max_rocks));
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
    long __main__height;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__height = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__height));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
    // While-Loop
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Int Literal
        stack.push_back (1);
        long __cond = stack.back ();
        stack.pop_back ();
        // break out of loop if condition is false
        if (__cond == 0) break;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__63__rock_height;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__63__rock_height = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__rock_height));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // For-Loop
        // Init
        // Assignment - '='
        // RHS
        // Subtraction
        {
            // LHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
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
            long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__63__for__64__i;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__63__for__64__i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__for__64__i));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Greater Than or Equal to
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__for__64__i));
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
            stack.push_back (1);
            // LHS
            // Variable declaration
            long __main__while__61__block__62__block__63__for__64__block__65__for__66__j;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__61__block__62__block__63__for__64__block__65__for__66__j = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__for__64__block__65__for__66__j));
            // We can ignore the init result
            stack.pop_back ();
            // Using an infinite loop so we can write a separate multi-line condition
            while (1)
            {
                // Condition
                // Less Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__for__64__block__65__for__66__j));
                    // RHS
                    // Int Literal
                    stack.push_back (8);
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
                // Not Equal
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__for__64__i));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__for__64__block__65__for__66__j));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                long __if__68__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__68__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '='
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__for__64__i));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__while__61__block__62__block__63__rock_height = *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__rock_height));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Break out of __for__66
                    break;
                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
                // Update
                // Pre-Increment
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__for__64__block__65__for__66__j));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__while__61__block__62__block__63__for__64__block__65__for__66__j = __main__while__61__block__62__block__63__for__64__block__65__for__66__j + 1;
                    __res = __main__while__61__block__62__block__63__for__64__block__65__for__66__j;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // We can ignore the update result
                stack.pop_back ();
            }
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Not Equal
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__rock_height));
                // RHS
                // Int Literal
                stack.push_back (0);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) != *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__70__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__70__cond)
            {
                // Body
                // Break out of __for__64
                break;
            }
            // End of if
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Update
            // Pre-Decrement
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__for__64__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__61__block__62__block__63__for__64__i = __main__while__61__block__62__block__63__for__64__i - 1;
                __res = __main__while__61__block__62__block__63__for__64__i;
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
        stack.push_back (1);
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__63__shape_height;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__63__shape_height = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__shape_height));
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
        char __main__while__61__block__62__block__63__rock_char;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__63__rock_char = static_cast<char>(static_cast<unsigned char>(__rhs));
        // Result of assignment
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__63__rock_char)));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Addition
        {
            // LHS
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__rock_height));
                // RHS
                // Int Literal
                stack.push_back (3);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__shape_height));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__63__desired_height;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__63__desired_height = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__desired_height));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // While-Loop
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                // Subtraction
                {
                    // LHS
                    // Member Accessor obj.size
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__board));
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
                    long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__desired_height));
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
            // Statement
            // Method Call - Vector<:char[]:>::pushBack(char[]) -> void
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__board));
            // RHS
            {
                // Arguments
                // String Literal
                {
                    char str_literal[] = "|.......|";
                    // convert to a heap string
                    char* str = new char[10];
                    // copy string to heap allocation
                    std::memcpy (str, &str_literal, 10);
                    stack.push_back (reinterpret_cast<long> (str));
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

        }
        // End of While
        //-----------------------------------------------------------------
        // Statement
        // Function Call - printboard(Vector<:char[]:>) -> void
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__board));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
            // printboard
            __main____printboard__Vector__tparam0__char (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Constructor
        {
            // Elements
            // Int Literal
            stack.push_back (3);
            // Int Literal
            stack.push_back (4);
            // Int Literal
            stack.push_back (5);
            // Int Literal
            stack.push_back (6);
            long __elem3 = stack.back ();
            stack.pop_back ();
            long __elem2 = stack.back ();
            stack.pop_back ();
            long __elem1 = stack.back ();
            stack.pop_back ();
            long __elem0 = stack.back ();
            stack.pop_back ();
            long* __list = new long[4];
            __list[0] = *reinterpret_cast<long*>(&__elem0);
            __list[1] = *reinterpret_cast<long*>(&__elem1);
            __list[2] = *reinterpret_cast<long*>(&__elem2);
            __list[3] = *reinterpret_cast<long*>(&__elem3);
            stack.push_back (reinterpret_cast<long>(__list));
        }
        // LHS
        // Variable declaration
        long* __main__while__61__block__62__block__63__posx0;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__63__posx0 = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Addition
        {
            // LHS
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__rock_height));
                // RHS
                // Int Literal
                stack.push_back (3);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
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
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__63__posy;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__63__posy = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__63__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
            // OFFSET
            // Int Literal
            stack.push_back (0);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__63__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
            // OFFSET
            // Int Literal
            stack.push_back (1);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__63__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
            // OFFSET
            // Int Literal
            stack.push_back (2);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__63__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
            // OFFSET
            // Int Literal
            stack.push_back (3);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Function Call - printboard(Vector<:char[]:>) -> void
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__board));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
            // printboard
            __main____printboard__Vector__tparam0__char (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // While-Loop
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Int Literal
            stack.push_back (1);
            long __cond = stack.back ();
            stack.pop_back ();
            // break out of loop if condition is false
            if (__cond == 0) break;
            // Body
            //-------------------------------------------------------------
            // Code Block
            // Statement
            // Function Call - println(int) -> void
            {
                // Arguments
                stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
                
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (2);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (3);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            stack.push_back (reinterpret_cast<long>(__main__lines));
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
                    stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                }
                // RHS
                // Char Literal
                stack.push_back (static_cast<long>(static_cast<unsigned char>('<')));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__74__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__74__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Function Call - println(char[]) -> void
                {
                    // Arguments
                    // String Literal
                    {
                        char str_literal[] = "shift left";
                        // convert to a heap string
                        char* str = new char[11];
                        // copy string to heap allocation
                        std::memcpy (str, &str_literal, 11);
                        stack.push_back (reinterpret_cast<long> (str));
                    }
                    
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                    // println
                    __builtin__println__char__1 (__arg0);
                    // push dummy value - funcall returns void
                    stack.push_back (0);
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

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
                        // Subscript Expression
                        {
                            // LHS
                            // Member Accessor obj.data
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subtraction
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                                // OFFSET
                                // Int Literal
                                stack.push_back (0);
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                long __if__76__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__76__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (1);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (2);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (3);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // Else-Statement
            else
            {
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Function Call - println(char[]) -> void
                {
                    // Arguments
                    // String Literal
                    {
                        char str_literal[] = "shift right";
                        // convert to a heap string
                        char* str = new char[12];
                        // copy string to heap allocation
                        std::memcpy (str, &str_literal, 12);
                        stack.push_back (reinterpret_cast<long> (str));
                    }
                    
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                    // println
                    __builtin__println__char__1 (__arg0);
                    // push dummy value - funcall returns void
                    stack.push_back (0);
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

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
                        // Subscript Expression
                        {
                            // LHS
                            // Member Accessor obj.data
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Addition
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                                // OFFSET
                                // Int Literal
                                stack.push_back (3);
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                long __if__79__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__79__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (1);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (2);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (3);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__63__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__63__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__63__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (2);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__63__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (3);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Modulus
            {
                // LHS
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__shift_max));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) % *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            __main__shift_index = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Function Call - printboard(Vector<:char[]:>) -> void
            {
                // Arguments
                stack.push_back (reinterpret_cast<long>(__main__board));
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
                // printboard
                __main____printboard__Vector__tparam0__char (__arg0);
                // push dummy value - funcall returns void
                stack.push_back (0);
            }
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // OR
            // LHS
            // OR
            // LHS
            // OR
            // LHS
            // OR
            // LHS
            // Not Equal
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
                            stack.push_back (reinterpret_cast<long>(__main__board));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subtraction
                        {
                            // LHS
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
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
                        char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    // Subscript Expression
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                        // OFFSET
                        // Int Literal
                        stack.push_back (0);
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was false
            if (!__lhs)
            {
                // RHS
                // Not Equal
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Subtraction
                            {
                                // LHS
                                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
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
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subscript Expression
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                            // OFFSET
                            // Int Literal
                            stack.push_back (1);
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            __lhs = stack.back ();
            stack.pop_back ();
            __res = __lhs || __rhs;
            stack.push_back (__res);
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was false
            if (!__lhs)
            {
                // RHS
                // Not Equal
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Subtraction
                            {
                                // LHS
                                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
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
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subscript Expression
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                            // OFFSET
                            // Int Literal
                            stack.push_back (2);
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            __lhs = stack.back ();
            stack.pop_back ();
            __res = __lhs || __rhs;
            stack.push_back (__res);
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was false
            if (!__lhs)
            {
                // RHS
                // Not Equal
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Subtraction
                            {
                                // LHS
                                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
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
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subscript Expression
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                            // OFFSET
                            // Int Literal
                            stack.push_back (3);
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            __lhs = stack.back ();
            stack.pop_back ();
            __res = __lhs || __rhs;
            stack.push_back (__res);
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was false
            if (!__lhs)
            {
                // RHS
                // Equal
                {
                    // LHS
                    // Subtraction
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
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
                    long __res = *reinterpret_cast<long*>(&__lhs) == *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            __lhs = stack.back ();
            stack.pop_back ();
            __res = __lhs || __rhs;
            stack.push_back (__res);
            long __if__81__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__81__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Function Call - println(char[]) -> void
                {
                    // Arguments
                    // String Literal
                    {
                        char str_literal[] = "rock at rest";
                        // convert to a heap string
                        char* str = new char[13];
                        // copy string to heap allocation
                        std::memcpy (str, &str_literal, 13);
                        stack.push_back (reinterpret_cast<long> (str));
                    }
                    
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                    // println
                    __builtin__println__char__1 (__arg0);
                    // push dummy value - funcall returns void
                    stack.push_back (0);
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Break out of __while__72
                break;
                //---------------------------------------------------------
            }
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (2);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (3);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '-='
            // RHS
            // Int Literal
            stack.push_back (1);
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__61__block__62__block__63__posy = __main__while__61__block__62__block__63__posy - *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__63__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__63__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__63__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (2);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__63__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__63__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__63__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (3);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Function Call - printboard(Vector<:char[]:>) -> void
            {
                // Arguments
                stack.push_back (reinterpret_cast<long>(__main__board));
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
                // printboard
                __main____printboard__Vector__tparam0__char (__arg0);
                // push dummy value - funcall returns void
                stack.push_back (0);
            }
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
        }
        // End of While
        //-----------------------------------------------------------------
        // Statement
        // Function Call - printboard(Vector<:char[]:>) -> void
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__board));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
            // printboard
            __main____printboard__Vector__tparam0__char (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // Statement
        // Assignment - '+='
        // RHS
        // Int Literal
        stack.push_back (1);
        __rhs = stack.back ();
        stack.pop_back ();
        __main__num_rocks = __main__num_rocks + *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__num_rocks));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__num_rocks));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__max_rocks));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) >= *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__83__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__83__cond)
        {
            // Body
            // Break out of __while__61
            break;
        }
        // End of if
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__84__rock_height;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__84__rock_height = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__rock_height));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // For-Loop
        // Init
        // Assignment - '='
        // RHS
        // Subtraction
        {
            // LHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
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
            long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__84__for__85__i;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__84__for__85__i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__for__85__i));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Greater Than or Equal to
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__for__85__i));
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
            stack.push_back (1);
            // LHS
            // Variable declaration
            long __main__while__61__block__62__block__84__for__85__block__86__for__87__j;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__61__block__62__block__84__for__85__block__86__for__87__j = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__for__85__block__86__for__87__j));
            // We can ignore the init result
            stack.pop_back ();
            // Using an infinite loop so we can write a separate multi-line condition
            while (1)
            {
                // Condition
                // Less Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__for__85__block__86__for__87__j));
                    // RHS
                    // Int Literal
                    stack.push_back (8);
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
                // Not Equal
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__for__85__i));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__for__85__block__86__for__87__j));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                long __if__89__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__89__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '='
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__for__85__i));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__while__61__block__62__block__84__rock_height = *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__rock_height));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Break out of __for__87
                    break;
                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
                // Update
                // Pre-Increment
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__for__85__block__86__for__87__j));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__while__61__block__62__block__84__for__85__block__86__for__87__j = __main__while__61__block__62__block__84__for__85__block__86__for__87__j + 1;
                    __res = __main__while__61__block__62__block__84__for__85__block__86__for__87__j;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // We can ignore the update result
                stack.pop_back ();
            }
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Not Equal
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__rock_height));
                // RHS
                // Int Literal
                stack.push_back (0);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) != *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__91__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__91__cond)
            {
                // Body
                // Break out of __for__85
                break;
            }
            // End of if
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Update
            // Pre-Decrement
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__for__85__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__61__block__62__block__84__for__85__i = __main__while__61__block__62__block__84__for__85__i - 1;
                __res = __main__while__61__block__62__block__84__for__85__i;
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
        stack.push_back (3);
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__84__shape_height;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__84__shape_height = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__shape_height));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Char Literal
        stack.push_back (static_cast<long>(static_cast<unsigned char>('1')));
        // LHS
        // Variable declaration
        char __main__while__61__block__62__block__84__rock_char;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__84__rock_char = static_cast<char>(static_cast<unsigned char>(__rhs));
        // Result of assignment
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Addition
        {
            // LHS
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__rock_height));
                // RHS
                // Int Literal
                stack.push_back (3);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__shape_height));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__84__desired_height;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__84__desired_height = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__desired_height));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // While-Loop
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                // Subtraction
                {
                    // LHS
                    // Member Accessor obj.size
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__board));
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
                    long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__desired_height));
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
            // Statement
            // Method Call - Vector<:char[]:>::pushBack(char[]) -> void
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__board));
            // RHS
            {
                // Arguments
                // String Literal
                {
                    char str_literal[] = "|.......|";
                    // convert to a heap string
                    char* str = new char[10];
                    // copy string to heap allocation
                    std::memcpy (str, &str_literal, 10);
                    stack.push_back (reinterpret_cast<long> (str));
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

        }
        // End of While
        //-----------------------------------------------------------------
        // Statement
        // Function Call - printboard(Vector<:char[]:>) -> void
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__board));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
            // printboard
            __main____printboard__Vector__tparam0__char (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Constructor
        {
            // Elements
            // Int Literal
            stack.push_back (4);
            long __elem0 = stack.back ();
            stack.pop_back ();
            long* __list = new long[1];
            __list[0] = *reinterpret_cast<long*>(&__elem0);
            stack.push_back (reinterpret_cast<long>(__list));
        }
        // LHS
        // Variable declaration
        long* __main__while__61__block__62__block__84__posx0;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__84__posx0 = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx0));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Constructor
        {
            // Elements
            // Int Literal
            stack.push_back (3);
            // Int Literal
            stack.push_back (4);
            // Int Literal
            stack.push_back (5);
            long __elem2 = stack.back ();
            stack.pop_back ();
            long __elem1 = stack.back ();
            stack.pop_back ();
            long __elem0 = stack.back ();
            stack.pop_back ();
            long* __list = new long[3];
            __list[0] = *reinterpret_cast<long*>(&__elem0);
            __list[1] = *reinterpret_cast<long*>(&__elem1);
            __list[2] = *reinterpret_cast<long*>(&__elem2);
            stack.push_back (reinterpret_cast<long>(__list));
        }
        // LHS
        // Variable declaration
        long* __main__while__61__block__62__block__84__posx1;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__84__posx1 = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Constructor
        {
            // Elements
            // Int Literal
            stack.push_back (4);
            long __elem0 = stack.back ();
            stack.pop_back ();
            long* __list = new long[1];
            __list[0] = *reinterpret_cast<long*>(&__elem0);
            stack.push_back (reinterpret_cast<long>(__list));
        }
        // LHS
        // Variable declaration
        long* __main__while__61__block__62__block__84__posx2;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__84__posx2 = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx2));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Addition
        {
            // LHS
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__rock_height));
                // RHS
                // Int Literal
                stack.push_back (3);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
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
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__84__posy;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__84__posy = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx0));
            // OFFSET
            // Int Literal
            stack.push_back (0);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
            // OFFSET
            // Int Literal
            stack.push_back (0);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
            // OFFSET
            // Int Literal
            stack.push_back (1);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
            // OFFSET
            // Int Literal
            stack.push_back (2);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
                // RHS
                // Int Literal
                stack.push_back (2);
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
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx2));
            // OFFSET
            // Int Literal
            stack.push_back (0);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Function Call - printboard(Vector<:char[]:>) -> void
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__board));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
            // printboard
            __main____printboard__Vector__tparam0__char (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // While-Loop
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Int Literal
            stack.push_back (1);
            long __cond = stack.back ();
            stack.pop_back ();
            // break out of loop if condition is false
            if (__cond == 0) break;
            // Body
            //-------------------------------------------------------------
            // Code Block
            // Statement
            // Function Call - println(int) -> void
            {
                // Arguments
                stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
                
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (2);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (2);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx2));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            stack.push_back (reinterpret_cast<long>(__main__lines));
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
                    stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                }
                // RHS
                // Char Literal
                stack.push_back (static_cast<long>(static_cast<unsigned char>('<')));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__95__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__95__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Function Call - println(char[]) -> void
                {
                    // Arguments
                    // String Literal
                    {
                        char str_literal[] = "shift left";
                        // convert to a heap string
                        char* str = new char[11];
                        // copy string to heap allocation
                        std::memcpy (str, &str_literal, 11);
                        stack.push_back (reinterpret_cast<long> (str));
                    }
                    
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                    // println
                    __builtin__println__char__1 (__arg0);
                    // push dummy value - funcall returns void
                    stack.push_back (0);
                }
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
                // AND
                // LHS
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subtraction
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx0));
                                // OFFSET
                                // Int Literal
                                stack.push_back (0);
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
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
                        // Subscript Expression
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Subtraction
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (0);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                __lhs = stack.back ();
                // Short circuit eval - only check rhs if lhs was true
                if (__lhs)
                {
                    // RHS
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
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
                                    // RHS
                                    // Int Literal
                                    stack.push_back (2);
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Subtraction
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx2));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (0);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                long __if__97__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__97__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                    // OFFSET
                    // Int Literal
                    stack.push_back (1);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                    // OFFSET
                    // Int Literal
                    stack.push_back (2);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx2));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // Else-Statement
            else
            {
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Function Call - println(char[]) -> void
                {
                    // Arguments
                    // String Literal
                    {
                        char str_literal[] = "shift right";
                        // convert to a heap string
                        char* str = new char[12];
                        // copy string to heap allocation
                        std::memcpy (str, &str_literal, 12);
                        stack.push_back (reinterpret_cast<long> (str));
                    }
                    
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                    // println
                    __builtin__println__char__1 (__arg0);
                    // push dummy value - funcall returns void
                    stack.push_back (0);
                }
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
                // AND
                // LHS
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Addition
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx0));
                                // OFFSET
                                // Int Literal
                                stack.push_back (0);
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
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
                        // Subscript Expression
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Addition
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (2);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                __lhs = stack.back ();
                // Short circuit eval - only check rhs if lhs was true
                if (__lhs)
                {
                    // RHS
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
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
                                    // RHS
                                    // Int Literal
                                    stack.push_back (2);
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Addition
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx2));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (0);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                long __if__100__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__100__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                    // OFFSET
                    // Int Literal
                    stack.push_back (1);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                    // OFFSET
                    // Int Literal
                    stack.push_back (2);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx2));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (2);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (2);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx2));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Modulus
            {
                // LHS
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__shift_max));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) % *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            __main__shift_index = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Function Call - printboard(Vector<:char[]:>) -> void
            {
                // Arguments
                stack.push_back (reinterpret_cast<long>(__main__board));
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
                // printboard
                __main____printboard__Vector__tparam0__char (__arg0);
                // push dummy value - funcall returns void
                stack.push_back (0);
            }
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // OR
            // LHS
            // OR
            // LHS
            // OR
            // LHS
            // Not Equal
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
                            stack.push_back (reinterpret_cast<long>(__main__board));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    // Subtraction
                    {
                        // LHS
                        // Subscript Expression
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx0));
                            // OFFSET
                            // Int Literal
                            stack.push_back (0);
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                    char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                }
                // RHS
                // Char Literal
                stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was false
            if (!__lhs)
            {
                // RHS
                // Not Equal
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Subtraction
                            {
                                // LHS
                                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subscript Expression
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx0));
                            // OFFSET
                            // Int Literal
                            stack.push_back (0);
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            __lhs = stack.back ();
            stack.pop_back ();
            __res = __lhs || __rhs;
            stack.push_back (__res);
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was false
            if (!__lhs)
            {
                // RHS
                // Not Equal
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Addition
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx0));
                                // OFFSET
                                // Int Literal
                                stack.push_back (0);
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            __lhs = stack.back ();
            stack.pop_back ();
            __res = __lhs || __rhs;
            stack.push_back (__res);
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was false
            if (!__lhs)
            {
                // RHS
                // Equal
                {
                    // LHS
                    // Subtraction
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                    long __res = *reinterpret_cast<long*>(&__lhs) == *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            __lhs = stack.back ();
            stack.pop_back ();
            __res = __lhs || __rhs;
            stack.push_back (__res);
            long __if__102__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__102__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Function Call - println(char[]) -> void
                {
                    // Arguments
                    // String Literal
                    {
                        char str_literal[] = "rock at rest";
                        // convert to a heap string
                        char* str = new char[13];
                        // copy string to heap allocation
                        std::memcpy (str, &str_literal, 13);
                        stack.push_back (reinterpret_cast<long> (str));
                    }
                    
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                    // println
                    __builtin__println__char__1 (__arg0);
                    // push dummy value - funcall returns void
                    stack.push_back (0);
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Break out of __while__93
                break;
                //---------------------------------------------------------
            }
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (2);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (2);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx2));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '-='
            // RHS
            // Int Literal
            stack.push_back (1);
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__61__block__62__block__84__posy = __main__while__61__block__62__block__84__posy - *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (2);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__84__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__84__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (2);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__84__posx2));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Function Call - printboard(Vector<:char[]:>) -> void
            {
                // Arguments
                stack.push_back (reinterpret_cast<long>(__main__board));
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
                // printboard
                __main____printboard__Vector__tparam0__char (__arg0);
                // push dummy value - funcall returns void
                stack.push_back (0);
            }
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
        }
        // End of While
        //-----------------------------------------------------------------
        // Statement
        // Function Call - printboard(Vector<:char[]:>) -> void
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__board));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
            // printboard
            __main____printboard__Vector__tparam0__char (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // Statement
        // Assignment - '+='
        // RHS
        // Int Literal
        stack.push_back (1);
        __rhs = stack.back ();
        stack.pop_back ();
        __main__num_rocks = __main__num_rocks + *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__num_rocks));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__num_rocks));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__max_rocks));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) >= *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__104__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__104__cond)
        {
            // Body
            // Break out of __while__61
            break;
        }
        // End of if
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__105__rock_height;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__105__rock_height = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__rock_height));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // For-Loop
        // Init
        // Assignment - '='
        // RHS
        // Subtraction
        {
            // LHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
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
            long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__105__for__106__i;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__105__for__106__i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__for__106__i));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Greater Than or Equal to
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__for__106__i));
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
            stack.push_back (1);
            // LHS
            // Variable declaration
            long __main__while__61__block__62__block__105__for__106__block__107__for__108__j;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__61__block__62__block__105__for__106__block__107__for__108__j = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__for__106__block__107__for__108__j));
            // We can ignore the init result
            stack.pop_back ();
            // Using an infinite loop so we can write a separate multi-line condition
            while (1)
            {
                // Condition
                // Less Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__for__106__block__107__for__108__j));
                    // RHS
                    // Int Literal
                    stack.push_back (8);
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
                // Not Equal
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__for__106__i));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__for__106__block__107__for__108__j));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                long __if__110__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__110__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '='
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__for__106__i));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__while__61__block__62__block__105__rock_height = *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__rock_height));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Break out of __for__108
                    break;
                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
                // Update
                // Pre-Increment
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__for__106__block__107__for__108__j));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__while__61__block__62__block__105__for__106__block__107__for__108__j = __main__while__61__block__62__block__105__for__106__block__107__for__108__j + 1;
                    __res = __main__while__61__block__62__block__105__for__106__block__107__for__108__j;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // We can ignore the update result
                stack.pop_back ();
            }
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Not Equal
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__rock_height));
                // RHS
                // Int Literal
                stack.push_back (0);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) != *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__112__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__112__cond)
            {
                // Body
                // Break out of __for__106
                break;
            }
            // End of if
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Update
            // Pre-Decrement
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__for__106__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__61__block__62__block__105__for__106__i = __main__while__61__block__62__block__105__for__106__i - 1;
                __res = __main__while__61__block__62__block__105__for__106__i;
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
        stack.push_back (3);
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__105__shape_height;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__105__shape_height = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__shape_height));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Char Literal
        stack.push_back (static_cast<long>(static_cast<unsigned char>('2')));
        // LHS
        // Variable declaration
        char __main__while__61__block__62__block__105__rock_char;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__105__rock_char = static_cast<char>(static_cast<unsigned char>(__rhs));
        // Result of assignment
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Addition
        {
            // LHS
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__rock_height));
                // RHS
                // Int Literal
                stack.push_back (3);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__shape_height));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__105__desired_height;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__105__desired_height = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__desired_height));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // While-Loop
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                // Subtraction
                {
                    // LHS
                    // Member Accessor obj.size
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__board));
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
                    long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__desired_height));
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
            // Statement
            // Method Call - Vector<:char[]:>::pushBack(char[]) -> void
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__board));
            // RHS
            {
                // Arguments
                // String Literal
                {
                    char str_literal[] = "|.......|";
                    // convert to a heap string
                    char* str = new char[10];
                    // copy string to heap allocation
                    std::memcpy (str, &str_literal, 10);
                    stack.push_back (reinterpret_cast<long> (str));
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

        }
        // End of While
        //-----------------------------------------------------------------
        // Statement
        // Function Call - printboard(Vector<:char[]:>) -> void
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__board));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
            // printboard
            __main____printboard__Vector__tparam0__char (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Constructor
        {
            // Elements
            // Int Literal
            stack.push_back (3);
            // Int Literal
            stack.push_back (4);
            // Int Literal
            stack.push_back (5);
            long __elem2 = stack.back ();
            stack.pop_back ();
            long __elem1 = stack.back ();
            stack.pop_back ();
            long __elem0 = stack.back ();
            stack.pop_back ();
            long* __list = new long[3];
            __list[0] = *reinterpret_cast<long*>(&__elem0);
            __list[1] = *reinterpret_cast<long*>(&__elem1);
            __list[2] = *reinterpret_cast<long*>(&__elem2);
            stack.push_back (reinterpret_cast<long>(__list));
        }
        // LHS
        // Variable declaration
        long* __main__while__61__block__62__block__105__posx0;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__105__posx0 = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Constructor
        {
            // Elements
            // Int Literal
            stack.push_back (5);
            long __elem0 = stack.back ();
            stack.pop_back ();
            long* __list = new long[1];
            __list[0] = *reinterpret_cast<long*>(&__elem0);
            stack.push_back (reinterpret_cast<long>(__list));
        }
        // LHS
        // Variable declaration
        long* __main__while__61__block__62__block__105__posx1;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__105__posx1 = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx1));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Constructor
        {
            // Elements
            // Int Literal
            stack.push_back (5);
            long __elem0 = stack.back ();
            stack.pop_back ();
            long* __list = new long[1];
            __list[0] = *reinterpret_cast<long*>(&__elem0);
            stack.push_back (reinterpret_cast<long>(__list));
        }
        // LHS
        // Variable declaration
        long* __main__while__61__block__62__block__105__posx2;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__105__posx2 = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx2));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Addition
        {
            // LHS
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__rock_height));
                // RHS
                // Int Literal
                stack.push_back (3);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
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
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__105__posy;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__105__posy = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
            // OFFSET
            // Int Literal
            stack.push_back (0);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
            // OFFSET
            // Int Literal
            stack.push_back (1);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
            // OFFSET
            // Int Literal
            stack.push_back (2);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
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
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx1));
            // OFFSET
            // Int Literal
            stack.push_back (0);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                // RHS
                // Int Literal
                stack.push_back (2);
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
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx2));
            // OFFSET
            // Int Literal
            stack.push_back (0);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Function Call - printboard(Vector<:char[]:>) -> void
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__board));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
            // printboard
            __main____printboard__Vector__tparam0__char (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // While-Loop
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Int Literal
            stack.push_back (1);
            long __cond = stack.back ();
            stack.pop_back ();
            // break out of loop if condition is false
            if (__cond == 0) break;
            // Body
            //-------------------------------------------------------------
            // Code Block
            // Statement
            // Function Call - println(int) -> void
            {
                // Arguments
                stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
                
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (2);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (2);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx2));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            stack.push_back (reinterpret_cast<long>(__main__lines));
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
                    stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                }
                // RHS
                // Char Literal
                stack.push_back (static_cast<long>(static_cast<unsigned char>('<')));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__116__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__116__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Function Call - println(char[]) -> void
                {
                    // Arguments
                    // String Literal
                    {
                        char str_literal[] = "shift left";
                        // convert to a heap string
                        char* str = new char[11];
                        // copy string to heap allocation
                        std::memcpy (str, &str_literal, 11);
                        stack.push_back (reinterpret_cast<long> (str));
                    }
                    
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                    // println
                    __builtin__println__char__1 (__arg0);
                    // push dummy value - funcall returns void
                    stack.push_back (0);
                }
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
                // AND
                // LHS
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subtraction
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                                // OFFSET
                                // Int Literal
                                stack.push_back (0);
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
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
                        // Subscript Expression
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Subtraction
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx1));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (0);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                __lhs = stack.back ();
                // Short circuit eval - only check rhs if lhs was true
                if (__lhs)
                {
                    // RHS
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
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                                    // RHS
                                    // Int Literal
                                    stack.push_back (2);
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Subtraction
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx2));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (0);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                long __if__118__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__118__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (1);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (2);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx1));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx2));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // Else-Statement
            else
            {
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Function Call - println(char[]) -> void
                {
                    // Arguments
                    // String Literal
                    {
                        char str_literal[] = "shift right";
                        // convert to a heap string
                        char* str = new char[12];
                        // copy string to heap allocation
                        std::memcpy (str, &str_literal, 12);
                        stack.push_back (reinterpret_cast<long> (str));
                    }
                    
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                    // println
                    __builtin__println__char__1 (__arg0);
                    // push dummy value - funcall returns void
                    stack.push_back (0);
                }
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
                // AND
                // LHS
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Addition
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                                // OFFSET
                                // Int Literal
                                stack.push_back (2);
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
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
                        // Subscript Expression
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Addition
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx1));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (0);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                __lhs = stack.back ();
                // Short circuit eval - only check rhs if lhs was true
                if (__lhs)
                {
                    // RHS
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
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                                    // RHS
                                    // Int Literal
                                    stack.push_back (2);
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Addition
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx2));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (0);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                long __if__121__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__121__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (1);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (2);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx1));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx2));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (2);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (2);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx2));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Modulus
            {
                // LHS
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__shift_max));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) % *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            __main__shift_index = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Function Call - printboard(Vector<:char[]:>) -> void
            {
                // Arguments
                stack.push_back (reinterpret_cast<long>(__main__board));
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
                // printboard
                __main____printboard__Vector__tparam0__char (__arg0);
                // push dummy value - funcall returns void
                stack.push_back (0);
            }
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // OR
            // LHS
            // OR
            // LHS
            // OR
            // LHS
            // Not Equal
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
                            stack.push_back (reinterpret_cast<long>(__main__board));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subtraction
                        {
                            // LHS
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
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
                        char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    // Subscript Expression
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                        // OFFSET
                        // Int Literal
                        stack.push_back (0);
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was false
            if (!__lhs)
            {
                // RHS
                // Not Equal
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Subtraction
                            {
                                // LHS
                                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
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
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subscript Expression
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                            // OFFSET
                            // Int Literal
                            stack.push_back (1);
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            __lhs = stack.back ();
            stack.pop_back ();
            __res = __lhs || __rhs;
            stack.push_back (__res);
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was false
            if (!__lhs)
            {
                // RHS
                // Not Equal
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Subtraction
                            {
                                // LHS
                                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
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
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subscript Expression
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                            // OFFSET
                            // Int Literal
                            stack.push_back (2);
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            __lhs = stack.back ();
            stack.pop_back ();
            __res = __lhs || __rhs;
            stack.push_back (__res);
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was false
            if (!__lhs)
            {
                // RHS
                // Equal
                {
                    // LHS
                    // Subtraction
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
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
                    long __res = *reinterpret_cast<long*>(&__lhs) == *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            __lhs = stack.back ();
            stack.pop_back ();
            __res = __lhs || __rhs;
            stack.push_back (__res);
            long __if__123__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__123__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Function Call - println(char[]) -> void
                {
                    // Arguments
                    // String Literal
                    {
                        char str_literal[] = "rock at rest";
                        // convert to a heap string
                        char* str = new char[13];
                        // copy string to heap allocation
                        std::memcpy (str, &str_literal, 13);
                        stack.push_back (reinterpret_cast<long> (str));
                    }
                    
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                    // println
                    __builtin__println__char__1 (__arg0);
                    // push dummy value - funcall returns void
                    stack.push_back (0);
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Break out of __while__114
                break;
                //---------------------------------------------------------
            }
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (2);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (2);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx2));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '-='
            // RHS
            // Int Literal
            stack.push_back (1);
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__61__block__62__block__105__posy = __main__while__61__block__62__block__105__posy - *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (2);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__105__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__105__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (2);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__105__posx2));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Function Call - printboard(Vector<:char[]:>) -> void
            {
                // Arguments
                stack.push_back (reinterpret_cast<long>(__main__board));
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
                // printboard
                __main____printboard__Vector__tparam0__char (__arg0);
                // push dummy value - funcall returns void
                stack.push_back (0);
            }
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
        }
        // End of While
        //-----------------------------------------------------------------
        // Statement
        // Function Call - printboard(Vector<:char[]:>) -> void
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__board));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
            // printboard
            __main____printboard__Vector__tparam0__char (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // Statement
        // Assignment - '+='
        // RHS
        // Int Literal
        stack.push_back (1);
        __rhs = stack.back ();
        stack.pop_back ();
        __main__num_rocks = __main__num_rocks + *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__num_rocks));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__num_rocks));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__max_rocks));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) >= *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__125__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__125__cond)
        {
            // Body
            // Break out of __while__61
            break;
        }
        // End of if
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__126__rock_height;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__126__rock_height = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__rock_height));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // For-Loop
        // Init
        // Assignment - '='
        // RHS
        // Subtraction
        {
            // LHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
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
            long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__126__for__127__i;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__126__for__127__i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__for__127__i));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Greater Than or Equal to
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__for__127__i));
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
            stack.push_back (1);
            // LHS
            // Variable declaration
            long __main__while__61__block__62__block__126__for__127__block__128__for__129__j;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__61__block__62__block__126__for__127__block__128__for__129__j = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__for__127__block__128__for__129__j));
            // We can ignore the init result
            stack.pop_back ();
            // Using an infinite loop so we can write a separate multi-line condition
            while (1)
            {
                // Condition
                // Less Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__for__127__block__128__for__129__j));
                    // RHS
                    // Int Literal
                    stack.push_back (8);
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
                // Not Equal
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__for__127__i));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__for__127__block__128__for__129__j));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                long __if__131__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__131__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '='
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__for__127__i));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__while__61__block__62__block__126__rock_height = *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__rock_height));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Break out of __for__129
                    break;
                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
                // Update
                // Pre-Increment
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__for__127__block__128__for__129__j));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__while__61__block__62__block__126__for__127__block__128__for__129__j = __main__while__61__block__62__block__126__for__127__block__128__for__129__j + 1;
                    __res = __main__while__61__block__62__block__126__for__127__block__128__for__129__j;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // We can ignore the update result
                stack.pop_back ();
            }
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Not Equal
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__rock_height));
                // RHS
                // Int Literal
                stack.push_back (0);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) != *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__133__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__133__cond)
            {
                // Body
                // Break out of __for__127
                break;
            }
            // End of if
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Update
            // Pre-Decrement
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__for__127__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__61__block__62__block__126__for__127__i = __main__while__61__block__62__block__126__for__127__i - 1;
                __res = __main__while__61__block__62__block__126__for__127__i;
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
        stack.push_back (4);
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__126__shape_height;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__126__shape_height = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__shape_height));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Char Literal
        stack.push_back (static_cast<long>(static_cast<unsigned char>('3')));
        // LHS
        // Variable declaration
        char __main__while__61__block__62__block__126__rock_char;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__126__rock_char = static_cast<char>(static_cast<unsigned char>(__rhs));
        // Result of assignment
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__126__rock_char)));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Addition
        {
            // LHS
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__rock_height));
                // RHS
                // Int Literal
                stack.push_back (3);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__shape_height));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__126__desired_height;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__126__desired_height = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__desired_height));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // While-Loop
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                // Subtraction
                {
                    // LHS
                    // Member Accessor obj.size
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__board));
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
                    long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__desired_height));
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
            // Statement
            // Method Call - Vector<:char[]:>::pushBack(char[]) -> void
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__board));
            // RHS
            {
                // Arguments
                // String Literal
                {
                    char str_literal[] = "|.......|";
                    // convert to a heap string
                    char* str = new char[10];
                    // copy string to heap allocation
                    std::memcpy (str, &str_literal, 10);
                    stack.push_back (reinterpret_cast<long> (str));
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

        }
        // End of While
        //-----------------------------------------------------------------
        // Statement
        // Function Call - printboard(Vector<:char[]:>) -> void
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__board));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
            // printboard
            __main____printboard__Vector__tparam0__char (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Constructor
        {
            // Elements
            // Int Literal
            stack.push_back (3);
            long __elem0 = stack.back ();
            stack.pop_back ();
            long* __list = new long[1];
            __list[0] = *reinterpret_cast<long*>(&__elem0);
            stack.push_back (reinterpret_cast<long>(__list));
        }
        // LHS
        // Variable declaration
        long* __main__while__61__block__62__block__126__posx0;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__126__posx0 = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx0));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Constructor
        {
            // Elements
            // Int Literal
            stack.push_back (3);
            long __elem0 = stack.back ();
            stack.pop_back ();
            long* __list = new long[1];
            __list[0] = *reinterpret_cast<long*>(&__elem0);
            stack.push_back (reinterpret_cast<long>(__list));
        }
        // LHS
        // Variable declaration
        long* __main__while__61__block__62__block__126__posx1;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__126__posx1 = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx1));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Constructor
        {
            // Elements
            // Int Literal
            stack.push_back (3);
            long __elem0 = stack.back ();
            stack.pop_back ();
            long* __list = new long[1];
            __list[0] = *reinterpret_cast<long*>(&__elem0);
            stack.push_back (reinterpret_cast<long>(__list));
        }
        // LHS
        // Variable declaration
        long* __main__while__61__block__62__block__126__posx2;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__126__posx2 = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx2));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Constructor
        {
            // Elements
            // Int Literal
            stack.push_back (3);
            long __elem0 = stack.back ();
            stack.pop_back ();
            long* __list = new long[1];
            __list[0] = *reinterpret_cast<long*>(&__elem0);
            stack.push_back (reinterpret_cast<long>(__list));
        }
        // LHS
        // Variable declaration
        long* __main__while__61__block__62__block__126__posx3;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__126__posx3 = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx3));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Addition
        {
            // LHS
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__rock_height));
                // RHS
                // Int Literal
                stack.push_back (3);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
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
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__126__posy;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__126__posy = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__126__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx0));
            // OFFSET
            // Int Literal
            stack.push_back (0);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__126__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
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
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx1));
            // OFFSET
            // Int Literal
            stack.push_back (0);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__126__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                // RHS
                // Int Literal
                stack.push_back (2);
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
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx2));
            // OFFSET
            // Int Literal
            stack.push_back (0);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__126__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                // RHS
                // Int Literal
                stack.push_back (3);
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
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx3));
            // OFFSET
            // Int Literal
            stack.push_back (0);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Function Call - printboard(Vector<:char[]:>) -> void
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__board));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
            // printboard
            __main____printboard__Vector__tparam0__char (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // While-Loop
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Int Literal
            stack.push_back (1);
            long __cond = stack.back ();
            stack.pop_back ();
            // break out of loop if condition is false
            if (__cond == 0) break;
            // Body
            //-------------------------------------------------------------
            // Code Block
            // Statement
            // Function Call - println(int) -> void
            {
                // Arguments
                stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
                
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (2);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx2));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (3);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx3));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            stack.push_back (reinterpret_cast<long>(__main__lines));
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
                    stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                }
                // RHS
                // Char Literal
                stack.push_back (static_cast<long>(static_cast<unsigned char>('<')));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__137__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__137__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Function Call - println(char[]) -> void
                {
                    // Arguments
                    // String Literal
                    {
                        char str_literal[] = "shift left";
                        // convert to a heap string
                        char* str = new char[11];
                        // copy string to heap allocation
                        std::memcpy (str, &str_literal, 11);
                        stack.push_back (reinterpret_cast<long> (str));
                    }
                    
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                    // println
                    __builtin__println__char__1 (__arg0);
                    // push dummy value - funcall returns void
                    stack.push_back (0);
                }
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
                // AND
                // LHS
                // AND
                // LHS
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subtraction
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx0));
                                // OFFSET
                                // Int Literal
                                stack.push_back (0);
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
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
                        // Subscript Expression
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Subtraction
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx1));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (0);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                __lhs = stack.back ();
                // Short circuit eval - only check rhs if lhs was true
                if (__lhs)
                {
                    // RHS
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
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                                    // RHS
                                    // Int Literal
                                    stack.push_back (2);
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Subtraction
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx2));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (0);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                __lhs = stack.back ();
                // Short circuit eval - only check rhs if lhs was true
                if (__lhs)
                {
                    // RHS
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
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                                    // RHS
                                    // Int Literal
                                    stack.push_back (3);
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Subtraction
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx3));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (0);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                long __if__139__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__139__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx1));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx2));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx3));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // Else-Statement
            else
            {
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Function Call - println(char[]) -> void
                {
                    // Arguments
                    // String Literal
                    {
                        char str_literal[] = "shift right";
                        // convert to a heap string
                        char* str = new char[12];
                        // copy string to heap allocation
                        std::memcpy (str, &str_literal, 12);
                        stack.push_back (reinterpret_cast<long> (str));
                    }
                    
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                    // println
                    __builtin__println__char__1 (__arg0);
                    // push dummy value - funcall returns void
                    stack.push_back (0);
                }
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
                // AND
                // LHS
                // AND
                // LHS
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Addition
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx0));
                                // OFFSET
                                // Int Literal
                                stack.push_back (0);
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
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
                        // Subscript Expression
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Addition
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx1));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (0);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                __lhs = stack.back ();
                // Short circuit eval - only check rhs if lhs was true
                if (__lhs)
                {
                    // RHS
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
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                                    // RHS
                                    // Int Literal
                                    stack.push_back (2);
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Addition
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx2));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (0);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                __lhs = stack.back ();
                // Short circuit eval - only check rhs if lhs was true
                if (__lhs)
                {
                    // RHS
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
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                                    // RHS
                                    // Int Literal
                                    stack.push_back (3);
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Addition
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx3));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (0);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                long __if__142__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__142__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx1));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx2));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx3));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__126__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__126__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__126__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (2);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx2));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__126__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (3);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx3));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Modulus
            {
                // LHS
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__shift_max));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) % *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            __main__shift_index = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Function Call - printboard(Vector<:char[]:>) -> void
            {
                // Arguments
                stack.push_back (reinterpret_cast<long>(__main__board));
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
                // printboard
                __main____printboard__Vector__tparam0__char (__arg0);
                // push dummy value - funcall returns void
                stack.push_back (0);
            }
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // OR
            // LHS
            // Not Equal
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
                            stack.push_back (reinterpret_cast<long>(__main__board));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subtraction
                        {
                            // LHS
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
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
                        char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    // Subscript Expression
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx0));
                        // OFFSET
                        // Int Literal
                        stack.push_back (0);
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was false
            if (!__lhs)
            {
                // RHS
                // Equal
                {
                    // LHS
                    // Subtraction
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
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
                    long __res = *reinterpret_cast<long*>(&__lhs) == *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            __lhs = stack.back ();
            stack.pop_back ();
            __res = __lhs || __rhs;
            stack.push_back (__res);
            long __if__144__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__144__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Function Call - println(char[]) -> void
                {
                    // Arguments
                    // String Literal
                    {
                        char str_literal[] = "rock at rest";
                        // convert to a heap string
                        char* str = new char[13];
                        // copy string to heap allocation
                        std::memcpy (str, &str_literal, 13);
                        stack.push_back (reinterpret_cast<long> (str));
                    }
                    
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                    // println
                    __builtin__println__char__1 (__arg0);
                    // push dummy value - funcall returns void
                    stack.push_back (0);
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Break out of __while__135
                break;
                //---------------------------------------------------------
            }
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (2);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx2));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (3);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx3));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '-='
            // RHS
            // Int Literal
            stack.push_back (1);
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__61__block__62__block__126__posy = __main__while__61__block__62__block__126__posy - *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__126__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__126__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__126__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (2);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx2));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__126__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__126__posy));
                    // RHS
                    // Int Literal
                    stack.push_back (3);
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__126__posx3));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Function Call - printboard(Vector<:char[]:>) -> void
            {
                // Arguments
                stack.push_back (reinterpret_cast<long>(__main__board));
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
                // printboard
                __main____printboard__Vector__tparam0__char (__arg0);
                // push dummy value - funcall returns void
                stack.push_back (0);
            }
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
        }
        // End of While
        //-----------------------------------------------------------------
        // Statement
        // Function Call - printboard(Vector<:char[]:>) -> void
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__board));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
            // printboard
            __main____printboard__Vector__tparam0__char (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // Statement
        // Assignment - '+='
        // RHS
        // Int Literal
        stack.push_back (1);
        __rhs = stack.back ();
        stack.pop_back ();
        __main__num_rocks = __main__num_rocks + *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__num_rocks));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__num_rocks));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__max_rocks));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) >= *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__146__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__146__cond)
        {
            // Body
            // Break out of __while__61
            break;
        }
        // End of if
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (0);
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__147__rock_height;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__147__rock_height = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__rock_height));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // For-Loop
        // Init
        // Assignment - '='
        // RHS
        // Subtraction
        {
            // LHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
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
            long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__147__for__148__i;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__147__for__148__i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__for__148__i));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Greater Than or Equal to
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__for__148__i));
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
            stack.push_back (1);
            // LHS
            // Variable declaration
            long __main__while__61__block__62__block__147__for__148__block__149__for__150__j;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__61__block__62__block__147__for__148__block__149__for__150__j = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__for__148__block__149__for__150__j));
            // We can ignore the init result
            stack.pop_back ();
            // Using an infinite loop so we can write a separate multi-line condition
            while (1)
            {
                // Condition
                // Less Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__for__148__block__149__for__150__j));
                    // RHS
                    // Int Literal
                    stack.push_back (8);
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
                // Not Equal
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__for__148__i));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__for__148__block__149__for__150__j));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                long __if__152__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__152__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '='
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__for__148__i));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__while__61__block__62__block__147__rock_height = *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__rock_height));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Break out of __for__150
                    break;
                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
                // Update
                // Pre-Increment
                {
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__for__148__block__149__for__150__j));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__while__61__block__62__block__147__for__148__block__149__for__150__j = __main__while__61__block__62__block__147__for__148__block__149__for__150__j + 1;
                    __res = __main__while__61__block__62__block__147__for__148__block__149__for__150__j;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // We can ignore the update result
                stack.pop_back ();
            }
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Not Equal
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__rock_height));
                // RHS
                // Int Literal
                stack.push_back (0);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) != *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__154__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__154__cond)
            {
                // Body
                // Break out of __for__148
                break;
            }
            // End of if
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Update
            // Pre-Decrement
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__for__148__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__while__61__block__62__block__147__for__148__i = __main__while__61__block__62__block__147__for__148__i - 1;
                __res = __main__while__61__block__62__block__147__for__148__i;
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
        stack.push_back (2);
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__147__shape_height;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__147__shape_height = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__shape_height));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Char Literal
        stack.push_back (static_cast<long>(static_cast<unsigned char>('4')));
        // LHS
        // Variable declaration
        char __main__while__61__block__62__block__147__rock_char;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__147__rock_char = static_cast<char>(static_cast<unsigned char>(__rhs));
        // Result of assignment
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__147__rock_char)));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Addition
        {
            // LHS
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__rock_height));
                // RHS
                // Int Literal
                stack.push_back (3);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__shape_height));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__147__desired_height;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__147__desired_height = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__desired_height));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // While-Loop
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                // Subtraction
                {
                    // LHS
                    // Member Accessor obj.size
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__board));
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
                    long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__desired_height));
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
            // Statement
            // Method Call - Vector<:char[]:>::pushBack(char[]) -> void
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__board));
            // RHS
            {
                // Arguments
                // String Literal
                {
                    char str_literal[] = "|.......|";
                    // convert to a heap string
                    char* str = new char[10];
                    // copy string to heap allocation
                    std::memcpy (str, &str_literal, 10);
                    stack.push_back (reinterpret_cast<long> (str));
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

        }
        // End of While
        //-----------------------------------------------------------------
        // Statement
        // Function Call - printboard(Vector<:char[]:>) -> void
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__board));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
            // printboard
            __main____printboard__Vector__tparam0__char (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Constructor
        {
            // Elements
            // Int Literal
            stack.push_back (3);
            // Int Literal
            stack.push_back (4);
            long __elem1 = stack.back ();
            stack.pop_back ();
            long __elem0 = stack.back ();
            stack.pop_back ();
            long* __list = new long[2];
            __list[0] = *reinterpret_cast<long*>(&__elem0);
            __list[1] = *reinterpret_cast<long*>(&__elem1);
            stack.push_back (reinterpret_cast<long>(__list));
        }
        // LHS
        // Variable declaration
        long* __main__while__61__block__62__block__147__posx0;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__147__posx0 = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Array Constructor
        {
            // Elements
            // Int Literal
            stack.push_back (3);
            // Int Literal
            stack.push_back (4);
            long __elem1 = stack.back ();
            stack.pop_back ();
            long __elem0 = stack.back ();
            stack.pop_back ();
            long* __list = new long[2];
            __list[0] = *reinterpret_cast<long*>(&__elem0);
            __list[1] = *reinterpret_cast<long*>(&__elem1);
            stack.push_back (reinterpret_cast<long>(__list));
        }
        // LHS
        // Variable declaration
        long* __main__while__61__block__62__block__147__posx1;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__147__posx1 = *reinterpret_cast<long**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Addition
        {
            // LHS
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__rock_height));
                // RHS
                // Int Literal
                stack.push_back (3);
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) + *reinterpret_cast<long*>(&__rhs);
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
        // LHS
        // Variable declaration
        long __main__while__61__block__62__block__147__posy;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__while__61__block__62__block__147__posy = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__147__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
            // OFFSET
            // Int Literal
            stack.push_back (0);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__147__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
            // OFFSET
            // Int Literal
            stack.push_back (1);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__147__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
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
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
            // OFFSET
            // Int Literal
            stack.push_back (0);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__147__rock_char)));
        // LHS
        // Subscript assignment
        // LHS
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__board));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
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
            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        // Subscript Expression
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
            // OFFSET
            // Int Literal
            stack.push_back (1);
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

        // Statement
        // Function Call - printboard(Vector<:char[]:>) -> void
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__board));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
            // printboard
            __main____printboard__Vector__tparam0__char (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // While-Loop
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Int Literal
            stack.push_back (1);
            long __cond = stack.back ();
            stack.pop_back ();
            // break out of loop if condition is false
            if (__cond == 0) break;
            // Body
            //-------------------------------------------------------------
            // Code Block
            // Statement
            // Function Call - println(int) -> void
            {
                // Arguments
                stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
                
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            stack.push_back (reinterpret_cast<long>(__main__lines));
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
                    stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                }
                // RHS
                // Char Literal
                stack.push_back (static_cast<long>(static_cast<unsigned char>('<')));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__158__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__158__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Function Call - println(char[]) -> void
                {
                    // Arguments
                    // String Literal
                    {
                        char str_literal[] = "shift left";
                        // convert to a heap string
                        char* str = new char[11];
                        // copy string to heap allocation
                        std::memcpy (str, &str_literal, 11);
                        stack.push_back (reinterpret_cast<long> (str));
                    }
                    
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                    // println
                    __builtin__println__char__1 (__arg0);
                    // push dummy value - funcall returns void
                    stack.push_back (0);
                }
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subtraction
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                                // OFFSET
                                // Int Literal
                                stack.push_back (0);
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
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
                        // Subscript Expression
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Subtraction
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (0);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                long __if__160__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__160__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (1);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '-='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
                    // OFFSET
                    // Int Literal
                    stack.push_back (1);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] - *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // Else-Statement
            else
            {
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Function Call - println(char[]) -> void
                {
                    // Arguments
                    // String Literal
                    {
                        char str_literal[] = "shift right";
                        // convert to a heap string
                        char* str = new char[12];
                        // copy string to heap allocation
                        std::memcpy (str, &str_literal, 12);
                        stack.push_back (reinterpret_cast<long> (str));
                    }
                    
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                    // println
                    __builtin__println__char__1 (__arg0);
                    // push dummy value - funcall returns void
                    stack.push_back (0);
                }
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Addition
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                                // OFFSET
                                // Int Literal
                                stack.push_back (1);
                                __offset = stack.back ();
                                stack.pop_back ();
                                __pointer = stack.back ();
                                stack.pop_back ();
                                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                    }
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
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
                        // Subscript Expression
                        {
                            // LHS
                            // Subscript Expression
                            {
                                // LHS
                                // Member Accessor obj.data
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__board));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                    stack.push_back (reinterpret_cast<long>(__res));
                                }
                                // OFFSET
                                // Addition
                                {
                                    // LHS
                                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
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
                                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Addition
                            {
                                // LHS
                                // Subscript Expression
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
                                    // OFFSET
                                    // Int Literal
                                    stack.push_back (1);
                                    __offset = stack.back ();
                                    stack.pop_back ();
                                    __pointer = stack.back ();
                                    stack.pop_back ();
                                    long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                            char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                        }
                        // RHS
                        // Char Literal
                        stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) == static_cast<char>(static_cast<unsigned char>(__rhs));
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __rhs = stack.back ();
                    stack.pop_back ();
                }
                __lhs = stack.back ();
                stack.pop_back ();
                __res = __lhs && __rhs;
                stack.push_back (__res);
                long __if__163__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__163__cond)
                {
                    // Body
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                    // OFFSET
                    // Int Literal
                    stack.push_back (1);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
                    // OFFSET
                    // Int Literal
                    stack.push_back (0);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    // Statement
                    // Assignment - '+='
                    // RHS
                    // Int Literal
                    stack.push_back (1);
                    // LHS
                    // Subscript assignment
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
                    // OFFSET
                    // Int Literal
                    stack.push_back (1);
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __rhs = stack.back ();
                    stack.pop_back ();
                    (*reinterpret_cast<long**>(&__pointer))[__offset] = (*reinterpret_cast<long**>(&__pointer))[__offset] + *reinterpret_cast<long*>(&__rhs);
                    // Result of assignment
                    stack.push_back (*reinterpret_cast<long*>(&(*reinterpret_cast<long**>(&__pointer))[__offset]));
                    // Statement results can be ignored
                    stack.pop_back ();
                    // End Statement

                    //-----------------------------------------------------
                }
                // End of if
                //---------------------------------------------------------
                //---------------------------------------------------------
            }
            //-------------------------------------------------------------
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__147__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__147__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__147__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__147__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Modulus
            {
                // LHS
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__shift_max));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) % *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __rhs = stack.back ();
            stack.pop_back ();
            __main__shift_index = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__shift_index));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Function Call - printboard(Vector<:char[]:>) -> void
            {
                // Arguments
                stack.push_back (reinterpret_cast<long>(__main__board));
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
                // printboard
                __main____printboard__Vector__tparam0__char (__arg0);
                // push dummy value - funcall returns void
                stack.push_back (0);
            }
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // OR
            // LHS
            // OR
            // LHS
            // Not Equal
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
                            stack.push_back (reinterpret_cast<long>(__main__board));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subtraction
                        {
                            // LHS
                            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
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
                        char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    // Subscript Expression
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                        // OFFSET
                        // Int Literal
                        stack.push_back (0);
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was false
            if (!__lhs)
            {
                // RHS
                // Not Equal
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Subtraction
                            {
                                // LHS
                                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
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
                            char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Subscript Expression
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                            // OFFSET
                            // Int Literal
                            stack.push_back (1);
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __lhs = stack.back ();
                    stack.pop_back ();
                    long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            __lhs = stack.back ();
            stack.pop_back ();
            __res = __lhs || __rhs;
            stack.push_back (__res);
            __lhs = stack.back ();
            // Short circuit eval - only check rhs if lhs was false
            if (!__lhs)
            {
                // RHS
                // Equal
                {
                    // LHS
                    // Subtraction
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
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
                    long __res = *reinterpret_cast<long*>(&__lhs) == *reinterpret_cast<long*>(&__rhs);
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
            }
            __lhs = stack.back ();
            stack.pop_back ();
            __res = __lhs || __rhs;
            stack.push_back (__res);
            long __if__165__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__165__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Function Call - println(char[]) -> void
                {
                    // Arguments
                    // String Literal
                    {
                        char str_literal[] = "rock at rest";
                        // convert to a heap string
                        char* str = new char[13];
                        // copy string to heap allocation
                        std::memcpy (str, &str_literal, 13);
                        stack.push_back (reinterpret_cast<long> (str));
                    }
                    
                    __stackval = stack.back ();
                    stack.pop_back ();
                    // Reinterpret from general register
                    char* __arg0 = *reinterpret_cast<char**>(&__stackval);
                    // println
                    __builtin__println__char__1 (__arg0);
                    // push dummy value - funcall returns void
                    stack.push_back (0);
                }
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Break out of __while__156
                break;
                //---------------------------------------------------------
            }
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '-='
            // RHS
            // Int Literal
            stack.push_back (1);
            __rhs = stack.back ();
            stack.pop_back ();
            __main__while__61__block__62__block__147__posy = __main__while__61__block__62__block__147__posy - *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__147__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__147__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx0));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__147__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__main__while__61__block__62__block__147__rock_char)));
            // LHS
            // Subscript assignment
            // LHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__board));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__while__61__block__62__block__147__posy));
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
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subscript Expression
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__while__61__block__62__block__147__posx1));
                // OFFSET
                // Int Literal
                stack.push_back (1);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                long __res = (*reinterpret_cast<long**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
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

            // Statement
            // Function Call - printboard(Vector<:char[]:>) -> void
            {
                // Arguments
                stack.push_back (reinterpret_cast<long>(__main__board));
                
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
                // printboard
                __main____printboard__Vector__tparam0__char (__arg0);
                // push dummy value - funcall returns void
                stack.push_back (0);
            }
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
        }
        // End of While
        //-----------------------------------------------------------------
        // Statement
        // Function Call - printboard(Vector<:char[]:>) -> void
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__board));
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
            // printboard
            __main____printboard__Vector__tparam0__char (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // Statement
        // Assignment - '+='
        // RHS
        // Int Literal
        stack.push_back (1);
        __rhs = stack.back ();
        stack.pop_back ();
        __main__num_rocks = __main__num_rocks + *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__num_rocks));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__num_rocks));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__max_rocks));
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) >= *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__167__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__167__cond)
        {
            // Body
            // Break out of __while__61
            break;
        }
        // End of if
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
    }
    // End of While
    //---------------------------------------------------------------------
    // Statement
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (0);
    // LHS
    // Variable declaration
    long __main__rock_height;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__rock_height = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__rock_height));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
    // For-Loop
    // Init
    // Assignment - '='
    // RHS
    // Subtraction
    {
        // LHS
        // Member Accessor obj.size
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__board));
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
        long __res = *reinterpret_cast<long*>(&__lhs) - *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // LHS
    // Variable declaration
    long __main__for__168__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__for__168__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__for__168__i));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Greater Than or Equal to
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__for__168__i));
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
        long __cond = stack.back ();
        stack.pop_back ();
        // break out of loop if condition is false
        if (__cond == 0) break;
        // Body
        //-----------------------------------------------------------------
        // Code Block
        //-----------------------------------------------------------------
        // For-Loop
        // Init
        // Assignment - '='
        // RHS
        // Int Literal
        stack.push_back (1);
        // LHS
        // Variable declaration
        long __main__for__168__block__169__for__170__j;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__for__168__block__169__for__170__j = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__for__168__block__169__for__170__j));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__168__block__169__for__170__j));
                // RHS
                // Int Literal
                stack.push_back (8);
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
            // Not Equal
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
                            stack.push_back (reinterpret_cast<long>(__main__board));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__168__i));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    stack.push_back (*reinterpret_cast<long*>(&__main__for__168__block__169__for__170__j));
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
                }
                // RHS
                // Char Literal
                stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = static_cast<char>(static_cast<unsigned char>(__lhs)) != static_cast<char>(static_cast<unsigned char>(__rhs));
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__172__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__172__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '='
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__168__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__rock_height = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__rock_height));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Break out of __for__170
                break;
                //---------------------------------------------------------
            }
            // End of if
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Update
            // Pre-Increment
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__168__block__169__for__170__j));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__168__block__169__for__170__j = __main__for__168__block__169__for__170__j + 1;
                __res = __main__for__168__block__169__for__170__j;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // We can ignore the update result
            stack.pop_back ();
        }
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // If-Statement
        // Precomputing all if/elif conditions and give unique names
        // bc we can't have code between if and elif
        // Condition
        // Not Equal
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__rock_height));
            // RHS
            // Int Literal
            stack.push_back (0);
            __rhs = stack.back ();
            stack.pop_back ();
            __lhs = stack.back ();
            stack.pop_back ();
            long __res = *reinterpret_cast<long*>(&__lhs) != *reinterpret_cast<long*>(&__rhs);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        long __if__174__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__174__cond)
        {
            // Body
            // Break out of __for__168
            break;
        }
        // End of if
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // Update
        // Pre-Decrement
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__for__168__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__for__168__i = __main__for__168__i - 1;
            __res = __main__for__168__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // We can ignore the update result
        stack.pop_back ();
    }
    //---------------------------------------------------------------------
    // Statement
    // Function Call - printboard2(Vector<:char[]:>) -> void
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(__main__board));
        
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        __main____Vector__char__1* __arg0 = reinterpret_cast<__main____Vector__char__1*>(__stackval);
        // printboard2
        __main____printboard2__Vector__tparam0__char (__arg0);
        // push dummy value - funcall returns void
        stack.push_back (0);
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Function Call - println(int) -> void
    {
        // Arguments
        stack.push_back (*reinterpret_cast<long*>(&__main__rock_height));
        
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

