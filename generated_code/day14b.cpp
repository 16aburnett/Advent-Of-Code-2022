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
class __main____Point; // Point
// Class Declaration - __main____Vector__Point inherits __builtin____main__Object
void* __dtable____main____Vector__Point[5];
class __main____Vector__Point : public __builtin____main__Object
{
    public:
    // Field - Point[] Vector<:Point:>::data
    __main____Point** __field____main____Vector__Point____data;
    // Field - int Vector<:Point:>::size
    long __field____main____Vector__Point____size;
    // Field - int Vector<:Point:>::capacity
    long __field____main____Vector__Point____capacity;
    __main____Vector__Point ();
    __main____Vector__Point (long __main____Vector__Point__size);
};
class __main____Path; // Path
// Class Declaration - __main____Vector__Path inherits __builtin____main__Object
void* __dtable____main____Vector__Path[5];
class __main____Vector__Path : public __builtin____main__Object
{
    public:
    // Field - Path[] Vector<:Path:>::data
    __main____Path** __field____main____Vector__Path____data;
    // Field - int Vector<:Path:>::size
    long __field____main____Vector__Path____size;
    // Field - int Vector<:Path:>::capacity
    long __field____main____Vector__Path____capacity;
    __main____Vector__Path ();
    __main____Vector__Path (long __main____Vector__Path__size);
};
// Class Declaration - __main____Vector__char inherits __builtin____main__Object
void* __dtable____main____Vector__char[5];
class __main____Vector__char : public __builtin____main__Object
{
    public:
    // Field - char[] Vector<:char:>::data
    char* __field____main____Vector__char____data;
    // Field - int Vector<:char:>::size
    long __field____main____Vector__char____size;
    // Field - int Vector<:char:>::capacity
    long __field____main____Vector__char____capacity;
    __main____Vector__char ();
    __main____Vector__char (long __main____Vector__char__size);
};
class __main____Vector__char; // Vector<:char:>
// Class Declaration - __main____Vector__Vector inherits __builtin____main__Object
void* __dtable____main____Vector__Vector[5];
class __main____Vector__Vector : public __builtin____main__Object
{
    public:
    // Field - Vector<:char:>[] Vector<:Vector<:char:>:>::data
    __main____Vector__char** __field____main____Vector__Vector____data;
    // Field - int Vector<:Vector<:char:>:>::size
    long __field____main____Vector__Vector____size;
    // Field - int Vector<:Vector<:char:>:>::capacity
    long __field____main____Vector__Vector____capacity;
    __main____Vector__Vector ();
    __main____Vector__Vector (long __main____Vector__Vector__size);
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
// Class Declaration - __main____Point inherits __builtin____main__Object
void* __dtable____main____Point[0];
class __main____Point : public __builtin____main__Object
{
    public:
    // Field - int Point::x
    long __field____main____Point____x;
    // Field - int Point::y
    long __field____main____Point____y;
    __main____Point (long __main____Point__x, long __main____Point__y);
};
void __main____print__Point (__main____Point* __main__print__p);
void __main____println__Point (__main____Point* __main__println__p);
// Class Declaration - __main____Path inherits __builtin____main__Object
void* __dtable____main____Path[0];
class __main____Path : public __builtin____main__Object
{
    public:
    // Field - Vector<:Point:> Path::points
    __main____Vector__Point* __field____main____Path____points;
    __main____Path ();
    __main____Path (__main____Vector__Point* __main____Path__points);
};
void __main____print__Path (__main____Path* __main__print__p);
void __main____println__Path (__main____Path* __main__println__p);
__main____Path* __main____build_path__char__1 (char* __main__build_path__line);
void __main____printboard__Vector__tparam0__Vector (__main____Vector__Vector* __main__printboard__board);
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

//-------------------------------------------------------------------------
// Constructor Declaration - Vector<:Point:>::Vector() -> Vector<:Point:>
__main____Vector__Point::__main____Vector__Point ()
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
        __main____Point** __res = new __main____Point*[__stackval];
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
    (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data = reinterpret_cast<__main____Point**>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Constructor Declaration - __ctor____main____Vector__Point____Vector
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Constructor Declaration - Vector<:Point:>::Vector(int) -> Vector<:Point:>
__main____Vector__Point::__main____Vector__Point (long __main____Vector__Point__Vector__size)
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
    //---------------------------------------------------------------------
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
        __main____Point** __res = new __main____Point*[__stackval];
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
    (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data = reinterpret_cast<__main____Point**>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Constructor Declaration - __ctor____main____Vector__Point____Vector__int
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Point:>::pushBack(Point) -> void
void __method____main____Vector__Point____pushBack__Point (__main____Vector__Point* __this, __main____Point* __main____Vector__Point__pushBack__val)
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
            __main____Point** __res = new __main____Point*[__stackval];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        __main____Point** __main____Vector__Point__pushBack__block__14__if__15__block__16__nData;
        __rhs = stack.back ();
        stack.pop_back ();
        __main____Vector__Point__pushBack__block__14__if__15__block__16__nData = reinterpret_cast<__main____Point**>(__rhs);
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
        // We can ignore the init result
        stack.pop_back ();
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
                    __main____Point** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Point__pushBack__block__14__if__15__block__16__for__17__i));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                __main____Point* __res = (reinterpret_cast<__main____Point**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
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
            (reinterpret_cast<__main____Point**>(__pointer))[__offset] = reinterpret_cast<__main____Point*>(__rhs);
            // Result of assignment
            stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Point**>(__pointer))[__offset]));
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
            __main____Point** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        __stackval = stack.back ();
        stack.pop_back ();
        delete reinterpret_cast<__main____Point**>(__stackval);
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
        (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data = reinterpret_cast<__main____Point**>(__rhs);
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
        __main____Point** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
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
    (reinterpret_cast<__main____Point**>(__pointer))[__offset] = reinterpret_cast<__main____Point*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Point**>(__pointer))[__offset]));
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
__main____Point* __method____main____Vector__Point____popBack (__main____Vector__Point* __this)
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
            __main____Point** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
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
        __main____Point* __res = (reinterpret_cast<__main____Point**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<__main____Point*>(__res);
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
            __main____Point* __res = __method____main____Vector__Point____popBack (reinterpret_cast<__main____Vector__Point*>(__obj));
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
__main____Point* __method____main____Vector__Point____get__int (__main____Vector__Point* __this, long __main____Vector__Point__get__index)
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
            __main____Point** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Point__get__index));
        __offset = stack.back ();
        stack.pop_back ();
        __pointer = stack.back ();
        stack.pop_back ();
        __main____Point* __res = (reinterpret_cast<__main____Point**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<__main____Point*>(__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__Point____get__int
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Point:>::set(int, Point) -> void
void __method____main____Vector__Point____set__int__Point (__main____Vector__Point* __this, long __main____Vector__Point__set__index, __main____Point* __main____Vector__Point__set__value)
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
        __main____Point** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
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
    (reinterpret_cast<__main____Point**>(__pointer))[__offset] = reinterpret_cast<__main____Point*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Point**>(__pointer))[__offset]));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__Point____set__int__Point
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Constructor Declaration - Vector<:Path:>::Vector() -> Vector<:Path:>
__main____Vector__Path::__main____Vector__Path ()
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
    dtable = __dtable____main____Vector__Path;
    __main____Vector__Path* __this = this;
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
    (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____capacity = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____capacity));
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
    (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size));
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
            long __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____capacity;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __stackval = stack.back ();
        stack.pop_back ();
        __main____Path** __res = new __main____Path*[__stackval];
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
    (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____data = reinterpret_cast<__main____Path**>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____data));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Constructor Declaration - __ctor____main____Vector__Path____Vector
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Constructor Declaration - Vector<:Path:>::Vector(int) -> Vector<:Path:>
__main____Vector__Path::__main____Vector__Path (long __main____Vector__Path__Vector__size)
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
    dtable = __dtable____main____Vector__Path;
    __main____Vector__Path* __this = this;
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Assignment - '='
    // RHS
    // Addition
    {
        // LHS
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Path__Vector__size));
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
    (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____capacity = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____capacity));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Path__Vector__size));
    // LHS
    // Member Accessor Assignment
    // LHS
    stack.push_back (reinterpret_cast<long>(__this));
    // RHS
    __parent = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size));
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
            long __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____capacity;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __stackval = stack.back ();
        stack.pop_back ();
        __main____Path** __res = new __main____Path*[__stackval];
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
    (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____data = reinterpret_cast<__main____Path**>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____data));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Constructor Declaration - __ctor____main____Vector__Path____Vector__int
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Path:>::pushBack(Path) -> void
void __method____main____Vector__Path____pushBack__Path (__main____Vector__Path* __this, __main____Path* __main____Vector__Path__pushBack__val)
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
                long __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size;
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
            long __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____capacity;
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
                long __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____capacity;
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
        (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____capacity = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____capacity));
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
                long __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____capacity;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __stackval = stack.back ();
            stack.pop_back ();
            __main____Path** __res = new __main____Path*[__stackval];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        __main____Path** __main____Vector__Path__pushBack__block__26__if__27__block__28__nData;
        __rhs = stack.back ();
        stack.pop_back ();
        __main____Vector__Path__pushBack__block__26__if__27__block__28__nData = reinterpret_cast<__main____Path**>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main____Vector__Path__pushBack__block__26__if__27__block__28__nData));
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
        long __main____Vector__Path__pushBack__block__26__if__27__block__28__for__29__i;
        __rhs = stack.back ();
        stack.pop_back ();
        __main____Vector__Path__pushBack__block__26__if__27__block__28__for__29__i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Path__pushBack__block__26__if__27__block__28__for__29__i));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Path__pushBack__block__26__if__27__block__28__for__29__i));
                // RHS
                // Member Accessor obj.size
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__this));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size;
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
                    __main____Path** __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Path__pushBack__block__26__if__27__block__28__for__29__i));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                __main____Path* __res = (reinterpret_cast<__main____Path**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // LHS
            // Subscript assignment
            // LHS
            stack.push_back (reinterpret_cast<long>(__main____Vector__Path__pushBack__block__26__if__27__block__28__nData));
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Path__pushBack__block__26__if__27__block__28__for__29__i));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            __rhs = stack.back ();
            stack.pop_back ();
            (reinterpret_cast<__main____Path**>(__pointer))[__offset] = reinterpret_cast<__main____Path*>(__rhs);
            // Result of assignment
            stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Path**>(__pointer))[__offset]));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // Update
            // Pre-Increment
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Path__pushBack__block__26__if__27__block__28__for__29__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main____Vector__Path__pushBack__block__26__if__27__block__28__for__29__i = __main____Vector__Path__pushBack__block__26__if__27__block__28__for__29__i + 1;
                __res = __main____Vector__Path__pushBack__block__26__if__27__block__28__for__29__i;
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
            __main____Path** __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        __stackval = stack.back ();
        stack.pop_back ();
        delete reinterpret_cast<__main____Path**>(__stackval);
        stack.push_back (0);
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (reinterpret_cast<long>(__main____Vector__Path__pushBack__block__26__if__27__block__28__nData));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____data = reinterpret_cast<__main____Path**>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____data));
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
    stack.push_back (reinterpret_cast<long>(__main____Vector__Path__pushBack__val));
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
        __main____Path** __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____data;
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
        long __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    __offset = stack.back ();
    stack.pop_back ();
    __pointer = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (reinterpret_cast<__main____Path**>(__pointer))[__offset] = reinterpret_cast<__main____Path*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Path**>(__pointer))[__offset]));
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
            long __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size;
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
        (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size + 1;
        __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__Path____pushBack__Path
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Path:>::popBack() -> Path
__main____Path* __method____main____Vector__Path____popBack (__main____Vector__Path* __this)
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
            __main____Path** __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____data;
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
                long __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size;
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
            (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size - 1;
            __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __offset = stack.back ();
        stack.pop_back ();
        __pointer = stack.back ();
        stack.pop_back ();
        __main____Path* __res = (reinterpret_cast<__main____Path**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<__main____Path*>(__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__Path____popBack
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Path:>::clear() -> void
void __method____main____Vector__Path____clear (__main____Vector__Path* __this)
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
                long __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size;
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
        // Method Call - Vector<:Path:>::popBack() -> Path
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        {
            // Arguments
            __obj = stack.back ();
            stack.pop_back ();
            __main____Path* __res = __method____main____Vector__Path____popBack (reinterpret_cast<__main____Vector__Path*>(__obj));
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
// End Method Declaration - __method____main____Vector__Path____clear
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Path:>::get(int) -> Path
__main____Path* __method____main____Vector__Path____get__int (__main____Vector__Path* __this, long __main____Vector__Path__get__index)
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
            __main____Path** __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Path__get__index));
        __offset = stack.back ();
        stack.pop_back ();
        __pointer = stack.back ();
        stack.pop_back ();
        __main____Path* __res = (reinterpret_cast<__main____Path**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<__main____Path*>(__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__Path____get__int
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Path:>::set(int, Path) -> void
void __method____main____Vector__Path____set__int__Path (__main____Vector__Path* __this, long __main____Vector__Path__set__index, __main____Path* __main____Vector__Path__set__value)
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
    stack.push_back (reinterpret_cast<long>(__main____Vector__Path__set__value));
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
        __main____Path** __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____data;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // OFFSET
    stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Path__set__index));
    __offset = stack.back ();
    stack.pop_back ();
    __pointer = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (reinterpret_cast<__main____Path**>(__pointer))[__offset] = reinterpret_cast<__main____Path*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Path**>(__pointer))[__offset]));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__Path____set__int__Path
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Constructor Declaration - Vector<:char:>::Vector() -> Vector<:char:>
__main____Vector__char::__main____Vector__char ()
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
    dtable = __dtable____main____Vector__char;
    __main____Vector__char* __this = this;
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
    (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____capacity = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____capacity));
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
    (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size));
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
            long __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____capacity;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __stackval = stack.back ();
        stack.pop_back ();
        char* __res = new char[__stackval];
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
    (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data = *reinterpret_cast<char**>(&__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Constructor Declaration - __ctor____main____Vector__char____Vector
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Constructor Declaration - Vector<:char:>::Vector(int) -> Vector<:char:>
__main____Vector__char::__main____Vector__char (long __main____Vector__char__Vector__size)
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
    dtable = __dtable____main____Vector__char;
    __main____Vector__char* __this = this;
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Assignment - '='
    // RHS
    // Addition
    {
        // LHS
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__Vector__size));
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
    (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____capacity = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____capacity));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__Vector__size));
    // LHS
    // Member Accessor Assignment
    // LHS
    stack.push_back (reinterpret_cast<long>(__this));
    // RHS
    __parent = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size));
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
            long __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____capacity;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __stackval = stack.back ();
        stack.pop_back ();
        char* __res = new char[__stackval];
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
    (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data = *reinterpret_cast<char**>(&__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Constructor Declaration - __ctor____main____Vector__char____Vector__int
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:char:>::pushBack(char) -> void
void __method____main____Vector__char____pushBack__char (__main____Vector__char* __this, char __main____Vector__char__pushBack__val)
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
                long __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size;
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
            long __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____capacity;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) >= *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__39__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__39__cond)
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
                long __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____capacity;
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
        (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____capacity = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____capacity));
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
                long __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____capacity;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            __stackval = stack.back ();
            stack.pop_back ();
            char* __res = new char[__stackval];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        char* __main____Vector__char__pushBack__block__38__if__39__block__40__nData;
        __rhs = stack.back ();
        stack.pop_back ();
        __main____Vector__char__pushBack__block__38__if__39__block__40__nData = *reinterpret_cast<char**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main____Vector__char__pushBack__block__38__if__39__block__40__nData));
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
        long __main____Vector__char__pushBack__block__38__if__39__block__40__for__41__i;
        __rhs = stack.back ();
        stack.pop_back ();
        __main____Vector__char__pushBack__block__38__if__39__block__40__for__41__i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__pushBack__block__38__if__39__block__40__for__41__i));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__pushBack__block__38__if__39__block__40__for__41__i));
                // RHS
                // Member Accessor obj.size
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__this));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size;
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
                    char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__pushBack__block__38__if__39__block__40__for__41__i));
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
            stack.push_back (reinterpret_cast<long>(__main____Vector__char__pushBack__block__38__if__39__block__40__nData));
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__pushBack__block__38__if__39__block__40__for__41__i));
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
            // Update
            // Pre-Increment
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__pushBack__block__38__if__39__block__40__for__41__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main____Vector__char__pushBack__block__38__if__39__block__40__for__41__i = __main____Vector__char__pushBack__block__38__if__39__block__40__for__41__i + 1;
                __res = __main____Vector__char__pushBack__block__38__if__39__block__40__for__41__i;
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
            char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
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
        stack.push_back (reinterpret_cast<long>(__main____Vector__char__pushBack__block__38__if__39__block__40__nData));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data = *reinterpret_cast<char**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data));
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
    stack.push_back (static_cast<long>(static_cast<unsigned char>(__main____Vector__char__pushBack__val)));
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
        char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
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
        long __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size;
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
            long __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size;
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
        (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size + 1;
        __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size;
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__char____pushBack__char
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:char:>::popBack() -> char
char __method____main____Vector__char____popBack (__main____Vector__char* __this)
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
            char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
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
                long __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size;
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
            (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size - 1;
            __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __offset = stack.back ();
        stack.pop_back ();
        __pointer = stack.back ();
        stack.pop_back ();
        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
    }
    __res = stack.back ();
    stack.pop_back ();
    return static_cast<char>(static_cast<unsigned char>(__res));
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__char____popBack
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:char:>::clear() -> void
void __method____main____Vector__char____clear (__main____Vector__char* __this)
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
                long __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size;
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
        // Method Call - Vector<:char:>::popBack() -> char
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        {
            // Arguments
            __obj = stack.back ();
            stack.pop_back ();
            char __res = __method____main____Vector__char____popBack (reinterpret_cast<__main____Vector__char*>(__obj));
            stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

    }
    // End of While
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__char____clear
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:char:>::get(int) -> char
char __method____main____Vector__char____get__int (__main____Vector__char* __this, long __main____Vector__char__get__index)
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
            char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__get__index));
        __offset = stack.back ();
        stack.pop_back ();
        __pointer = stack.back ();
        stack.pop_back ();
        char __res = (*reinterpret_cast<char**>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
        stack.push_back (static_cast<long>(static_cast<unsigned char>(__res)));
    }
    __res = stack.back ();
    stack.pop_back ();
    return static_cast<char>(static_cast<unsigned char>(__res));
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__char____get__int
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:char:>::set(int, char) -> void
void __method____main____Vector__char____set__int__char (__main____Vector__char* __this, long __main____Vector__char__set__index, char __main____Vector__char__set__value)
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
    stack.push_back (static_cast<long>(static_cast<unsigned char>(__main____Vector__char__set__value)));
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
        char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // OFFSET
    stack.push_back (*reinterpret_cast<long*>(&__main____Vector__char__set__index));
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

    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__char____set__int__char
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Constructor Declaration - Vector<:Vector<:char:>:>::Vector() -> Vector<:Vector<:char:>:>
__main____Vector__Vector::__main____Vector__Vector ()
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
        __main____Vector__char** __res = new __main____Vector__char*[__stackval];
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
    (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data = reinterpret_cast<__main____Vector__char**>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Constructor Declaration - __ctor____main____Vector__Vector____Vector
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Constructor Declaration - Vector<:Vector<:char:>:>::Vector(int) -> Vector<:Vector<:char:>:>
__main____Vector__Vector::__main____Vector__Vector (long __main____Vector__Vector__Vector__size)
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
    //---------------------------------------------------------------------
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
        __main____Vector__char** __res = new __main____Vector__char*[__stackval];
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
    (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data = reinterpret_cast<__main____Vector__char**>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Constructor Declaration - __ctor____main____Vector__Vector____Vector__int
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Vector<:char:>:>::pushBack(Vector<:char:>) -> void
void __method____main____Vector__Vector____pushBack__Vector (__main____Vector__Vector* __this, __main____Vector__char* __main____Vector__Vector__pushBack__val)
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
    long __if__51__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__51__cond)
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
            __main____Vector__char** __res = new __main____Vector__char*[__stackval];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        __main____Vector__char** __main____Vector__Vector__pushBack__block__50__if__51__block__52__nData;
        __rhs = stack.back ();
        stack.pop_back ();
        __main____Vector__Vector__pushBack__block__50__if__51__block__52__nData = reinterpret_cast<__main____Vector__char**>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main____Vector__Vector__pushBack__block__50__if__51__block__52__nData));
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
        long __main____Vector__Vector__pushBack__block__50__if__51__block__52__for__53__i;
        __rhs = stack.back ();
        stack.pop_back ();
        __main____Vector__Vector__pushBack__block__50__if__51__block__52__for__53__i = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Vector__pushBack__block__50__if__51__block__52__for__53__i));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Vector__pushBack__block__50__if__51__block__52__for__53__i));
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
                    __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Vector__pushBack__block__50__if__51__block__52__for__53__i));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                __main____Vector__char* __res = (reinterpret_cast<__main____Vector__char**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // LHS
            // Subscript assignment
            // LHS
            stack.push_back (reinterpret_cast<long>(__main____Vector__Vector__pushBack__block__50__if__51__block__52__nData));
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Vector__pushBack__block__50__if__51__block__52__for__53__i));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            __rhs = stack.back ();
            stack.pop_back ();
            (reinterpret_cast<__main____Vector__char**>(__pointer))[__offset] = reinterpret_cast<__main____Vector__char*>(__rhs);
            // Result of assignment
            stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__char**>(__pointer))[__offset]));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // Update
            // Pre-Increment
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Vector__pushBack__block__50__if__51__block__52__for__53__i));
                __rhs = stack.back ();
                stack.pop_back ();
                __main____Vector__Vector__pushBack__block__50__if__51__block__52__for__53__i = __main____Vector__Vector__pushBack__block__50__if__51__block__52__for__53__i + 1;
                __res = __main____Vector__Vector__pushBack__block__50__if__51__block__52__for__53__i;
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
            __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        __stackval = stack.back ();
        stack.pop_back ();
        delete reinterpret_cast<__main____Vector__char**>(__stackval);
        stack.push_back (0);
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        stack.push_back (reinterpret_cast<long>(__main____Vector__Vector__pushBack__block__50__if__51__block__52__nData));
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __rhs = stack.back ();
        stack.pop_back ();
        (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data = reinterpret_cast<__main____Vector__char**>(__rhs);
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
        __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
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
    (reinterpret_cast<__main____Vector__char**>(__pointer))[__offset] = reinterpret_cast<__main____Vector__char*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__char**>(__pointer))[__offset]));
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
// Method Declaration - Vector<:Vector<:char:>:>::popBack() -> Vector<:char:>
__main____Vector__char* __method____main____Vector__Vector____popBack (__main____Vector__Vector* __this)
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
            __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
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
        __main____Vector__char* __res = (reinterpret_cast<__main____Vector__char**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<__main____Vector__char*>(__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__Vector____popBack
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Vector<:char:>:>::clear() -> void
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
        // Method Call - Vector<:Vector<:char:>:>::popBack() -> Vector<:char:>
        // LHS
        stack.push_back (reinterpret_cast<long>(__this));
        // RHS
        {
            // Arguments
            __obj = stack.back ();
            stack.pop_back ();
            __main____Vector__char* __res = __method____main____Vector__Vector____popBack (reinterpret_cast<__main____Vector__Vector*>(__obj));
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
// Method Declaration - Vector<:Vector<:char:>:>::get(int) -> Vector<:char:>
__main____Vector__char* __method____main____Vector__Vector____get__int (__main____Vector__Vector* __this, long __main____Vector__Vector__get__index)
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
            __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // OFFSET
        stack.push_back (*reinterpret_cast<long*>(&__main____Vector__Vector__get__index));
        __offset = stack.back ();
        stack.pop_back ();
        __pointer = stack.back ();
        stack.pop_back ();
        __main____Vector__char* __res = (reinterpret_cast<__main____Vector__char**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
        stack.push_back (reinterpret_cast<long>(__res));
    }
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<__main____Vector__char*>(__res);
    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__Vector____get__int
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Method Declaration - Vector<:Vector<:char:>:>::set(int, Vector<:char:>) -> void
void __method____main____Vector__Vector____set__int__Vector (__main____Vector__Vector* __this, long __main____Vector__Vector__set__index, __main____Vector__char* __main____Vector__Vector__set__value)
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
        __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
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
    (reinterpret_cast<__main____Vector__char**>(__pointer))[__offset] = reinterpret_cast<__main____Vector__char*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Vector__char**>(__pointer))[__offset]));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Method Declaration - __method____main____Vector__Vector____set__int__Vector
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
    long __if__61__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__61__cond)
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
    long __main__strlen__block__60__size;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strlen__block__60__size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strlen__block__60__size));
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
                    long __res = __main__strlen__block__60__size;
                    __main__strlen__block__60__size = __main__strlen__block__60__size + 1;
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
        stack.push_back (*reinterpret_cast<long*>(&__main__strlen__block__60__size));
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
    long __main__strcmp__block__63__asize;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strcmp__block__63__asize = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__63__asize));
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
    long __main__strcmp__block__63__bsize;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strcmp__block__63__bsize = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__63__bsize));
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
        stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__63__asize));
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__63__bsize));
        __rhs = stack.back ();
        stack.pop_back ();
        __lhs = stack.back ();
        stack.pop_back ();
        long __res = *reinterpret_cast<long*>(&__lhs) != *reinterpret_cast<long*>(&__rhs);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    long __if__64__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__64__cond)
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
    long __main__strcmp__block__63__for__65__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__strcmp__block__63__for__65__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__63__for__65__i));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__63__for__65__i));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__63__asize));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__63__for__65__i));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__63__for__65__i));
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
        long __if__67__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__67__cond)
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
            stack.push_back (*reinterpret_cast<long*>(&__main__strcmp__block__63__for__65__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__strcmp__block__63__for__65__i = __main__strcmp__block__63__for__65__i + 1;
            __res = __main__strcmp__block__63__for__65__i;
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
    char* __main__substr__block__69__res;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__substr__block__69__res = *reinterpret_cast<char**>(&__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__substr__block__69__res));
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
    long __main__substr__block__69__for__70__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__substr__block__69__for__70__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__69__for__70__i));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__69__for__70__i));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__69__for__70__i));
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
        stack.push_back (reinterpret_cast<long>(__main__substr__block__69__res));
        // OFFSET
        stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__69__for__70__i));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__substr__block__69__for__70__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__substr__block__69__for__70__i = __main__substr__block__69__for__70__i + 1;
            __res = __main__substr__block__69__for__70__i;
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
    stack.push_back (reinterpret_cast<long>(__main__substr__block__69__res));
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
    stack.push_back (reinterpret_cast<long>(__main__substr__block__69__res));
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
    long __main__first_index_of__block__72__size;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__first_index_of__block__72__size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__72__size));
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
    long __main__first_index_of__block__72__for__73__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__first_index_of__block__72__for__73__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__72__for__73__i));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__72__for__73__i));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__72__size));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__72__for__73__i));
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
        long __if__75__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__75__cond)
        {
            // Body
            // Return
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__72__for__73__i));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__first_index_of__block__72__for__73__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__first_index_of__block__72__for__73__i = __main__first_index_of__block__72__for__73__i + 1;
            __res = __main__first_index_of__block__72__for__73__i;
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
    __main____Vector__char__1* __main__split__block__76__tokens;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__76__tokens = reinterpret_cast<__main____Vector__char__1*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__split__block__76__tokens));
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
    long __main__split__block__76__size;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__76__size = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__size));
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
    long __main__split__block__76__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__76__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__i));
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
    long __main__split__block__76__j;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__split__block__76__j = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__j));
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
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__i));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__size));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__i));
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
        long __if__79__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__79__cond)
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
            long __main__split__block__76__while__77__block__78__if__79__block__80__count;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__76__while__77__block__78__if__79__block__80__count = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__while__77__block__78__if__79__block__80__count));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__i));
            // LHS
            // Variable declaration
            long __main__split__block__76__while__77__block__78__if__79__block__80__k;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__76__while__77__block__78__if__79__block__80__k = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__while__77__block__78__if__79__block__80__k));
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
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__while__77__block__78__if__79__block__80__k));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__size));
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
                            long __res = __main__split__block__76__while__77__block__78__if__79__block__80__k;
                            __main__split__block__76__while__77__block__78__if__79__block__80__k = __main__split__block__76__while__77__block__78__if__79__block__80__k + 1;
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
                long __if__82__cond = stack.back ();
                stack.pop_back ();
                // get condition from stack
                if (__if__82__cond)
                {
                    // Body
                    // Statement
                    // Pre-Increment
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__while__77__block__78__if__79__block__80__count));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__split__block__76__while__77__block__78__if__79__block__80__count = __main__split__block__76__while__77__block__78__if__79__block__80__count + 1;
                        __res = __main__split__block__76__while__77__block__78__if__79__block__80__count;
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
                    // Break out of __while__81
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
            stack.push_back (reinterpret_cast<long>(__main__split__block__76__tokens));
            // RHS
            {
                // Arguments
                // Array Allocator
                {
                    // Addition
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__while__77__block__78__if__79__block__80__count));
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
            long __main__split__block__76__while__77__block__78__if__79__block__80__for__83__k;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__76__while__77__block__78__if__79__block__80__for__83__k = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__while__77__block__78__if__79__block__80__for__83__k));
            // We can ignore the init result
            stack.pop_back ();
            // Using an infinite loop so we can write a separate multi-line condition
            while (1)
            {
                // Condition
                // Less Than
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__while__77__block__78__if__79__block__80__for__83__k));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__while__77__block__78__if__79__block__80__count));
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
                        long __res = __main__split__block__76__i;
                        __main__split__block__76__i = __main__split__block__76__i + 1;
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
                        stack.push_back (reinterpret_cast<long>(__main__split__block__76__tokens));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__j));
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__while__77__block__78__if__79__block__80__for__83__k));
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
                    stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__while__77__block__78__if__79__block__80__for__83__k));
                    __rhs = stack.back ();
                    stack.pop_back ();
                    __main__split__block__76__while__77__block__78__if__79__block__80__for__83__k = __main__split__block__76__while__77__block__78__if__79__block__80__for__83__k + 1;
                    __res = __main__split__block__76__while__77__block__78__if__79__block__80__for__83__k;
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
                    stack.push_back (reinterpret_cast<long>(__main__split__block__76__tokens));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__j));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__while__77__block__78__if__79__block__80__count));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__j));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__split__block__76__j = __main__split__block__76__j + 1;
                __res = __main__split__block__76__j;
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
            stack.push_back (*reinterpret_cast<long*>(&__main__split__block__76__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__split__block__76__i = __main__split__block__76__i + 1;
            __res = __main__split__block__76__i;
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
    stack.push_back (reinterpret_cast<long>(__main__split__block__76__tokens));
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
    long __if__86__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__86__cond)
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
    long __if__88__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__88__cond)
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
    long __if__90__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__90__cond)
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
    long __if__92__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__92__cond)
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
    long __if__94__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__94__cond)
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
    long __if__96__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__96__cond)
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

//-------------------------------------------------------------------------
// Constructor Declaration - Point::Point(int, int) -> Point
__main____Point::__main____Point (long __main____Point__Point__x, long __main____Point__Point__y)
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
    //---------------------------------------------------------------------
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

    //---------------------------------------------------------------------
}
// End Constructor Declaration - __ctor____main____Point____Point__int__int
//-------------------------------------------------------------------------

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
// Function Declaration - println(Point) -> void
void __main____println__Point (__main____Point* __main__println__p)
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
    // Function Call - print(Point) -> void
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(__main__println__p));
        
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        __main____Point* __arg0 = reinterpret_cast<__main____Point*>(__stackval);
        // print
        __main____print__Point (__arg0);
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
// End Function Declaration - __main____println__Point
//=========================================================================

//-------------------------------------------------------------------------
// Constructor Declaration - Path::Path() -> Path
__main____Path::__main____Path ()
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
    dtable = __dtable____main____Path;
    __main____Path* __this = this;
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - Vector<:Point:>::Vector() -> Vector<:Point:>
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(new __main____Vector__Point ()));
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
    (reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points = reinterpret_cast<__main____Vector__Point*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Constructor Declaration - __ctor____main____Path____Path
//-------------------------------------------------------------------------

//-------------------------------------------------------------------------
// Constructor Declaration - Path::Path(Vector<:Point:>) -> Path
__main____Path::__main____Path (__main____Vector__Point* __main____Path__Path__points)
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
    dtable = __dtable____main____Path;
    __main____Path* __this = this;
    // Body
    //---------------------------------------------------------------------
    // Code Block
    // Statement
    // Assignment - '='
    // RHS
    stack.push_back (reinterpret_cast<long>(__main____Path__Path__points));
    // LHS
    // Member Accessor Assignment
    // LHS
    stack.push_back (reinterpret_cast<long>(__this));
    // RHS
    __parent = stack.back ();
    stack.pop_back ();
    __rhs = stack.back ();
    stack.pop_back ();
    (reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points = reinterpret_cast<__main____Vector__Point*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>((reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
}
// End Constructor Declaration - __ctor____main____Path____Path__Vector
//-------------------------------------------------------------------------

//=========================================================================
// Function Declaration - print(Path) -> void
void __main____print__Path (__main____Path* __main__print__p)
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
    // Greater Than
    {
        // LHS
        // Member Accessor obj.size
        {
            // LHS
            // Member Accessor obj.points
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__print__p));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                __main____Vector__Point* __res = (reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points;
                stack.push_back (reinterpret_cast<long>(__res));
            }
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
    long __if__105__cond = stack.back ();
    stack.pop_back ();
    // get condition from stack
    if (__if__105__cond)
    {
        // Body
        // Statement
        // Function Call - print(Point) -> void
        {
            // Arguments
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    // Member Accessor obj.points
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__print__p));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        __main____Vector__Point* __res = (reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    __main____Point** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Int Literal
                stack.push_back (0);
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                __main____Point* __res = (reinterpret_cast<__main____Point**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Point* __arg0 = reinterpret_cast<__main____Point*>(__stackval);
            // print
            __main____print__Point (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

    }
    // End of if
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
    // For-Loop
    // Init
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (1);
    // LHS
    // Variable declaration
    long __main__print__block__104__for__106__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__print__block__104__for__106__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__print__block__104__for__106__i));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__print__block__104__for__106__i));
            // RHS
            // Member Accessor obj.size
            {
                // LHS
                // Member Accessor obj.points
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__print__p));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    __main____Vector__Point* __res = (reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
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
        //-----------------------------------------------------------------
        // Code Block
        // Statement
        // Function Call - print(char) -> void
        {
            // Arguments
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('-')));
            
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
            stack.push_back (static_cast<long>(static_cast<unsigned char>('>')));
            
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
        // Function Call - print(Point) -> void
        {
            // Arguments
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    // Member Accessor obj.points
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__print__p));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        __main____Vector__Point* __res = (reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    __main____Point** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__print__block__104__for__106__i));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                __main____Point* __res = (reinterpret_cast<__main____Point**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Point* __arg0 = reinterpret_cast<__main____Point*>(__stackval);
            // print
            __main____print__Point (__arg0);
            // push dummy value - funcall returns void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // Update
        // Pre-Increment
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__print__block__104__for__106__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__print__block__104__for__106__i = __main__print__block__104__for__106__i + 1;
            __res = __main__print__block__104__for__106__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // We can ignore the update result
        stack.pop_back ();
    }
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____print__Path
//=========================================================================

//=========================================================================
// Function Declaration - println(Path) -> void
void __main____println__Path (__main____Path* __main__println__p)
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
    // Function Call - print(Path) -> void
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(__main__println__p));
        
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        __main____Path* __arg0 = reinterpret_cast<__main____Path*>(__stackval);
        // print
        __main____print__Path (__arg0);
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
// End Function Declaration - __main____println__Path
//=========================================================================

//=========================================================================
// Function Declaration - build_path(char[]) -> Path
__main____Path* __main____build_path__char__1 (char* __main__build_path__line)
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
    // Constructor Call - Path::Path() -> Path
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(new __main____Path ()));
    }
    // LHS
    // Variable declaration
    __main____Path* __main__build_path__block__109__p;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__build_path__block__109__p = reinterpret_cast<__main____Path*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__p));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Function Call - split(char[], char) -> Vector<:char[]:>
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(__main__build_path__line));
        // Char Literal
        stack.push_back (static_cast<long>(static_cast<unsigned char>('-')));
        
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
    __main____Vector__char__1* __main__build_path__block__109__tokens;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__build_path__block__109__tokens = reinterpret_cast<__main____Vector__char__1*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__tokens));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Function Call - split(char[], char) -> Vector<:char[]:>
    {
        // Arguments
        // Subscript Expression
        {
            // LHS
            // Member Accessor obj.data
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__tokens));
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
        // Char Literal
        stack.push_back (static_cast<long>(static_cast<unsigned char>(',')));
        
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
    __main____Vector__char__1* __main__build_path__block__109__point0_str;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__build_path__block__109__point0_str = reinterpret_cast<__main____Vector__char__1*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__point0_str));
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
                stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__point0_str));
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
        // stringToInt
        long __res = __builtin__stringToInt__char__1 (__arg0);
        stack.push_back (*reinterpret_cast<long*>(&__res));
    }
    // LHS
    // Variable declaration
    long __main__build_path__block__109__x;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__build_path__block__109__x = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__build_path__block__109__x));
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
                stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__point0_str));
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
    long __main__build_path__block__109__y;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__build_path__block__109__y = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__build_path__block__109__y));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - Point::Point(int, int) -> Point
    {
        // Arguments
        stack.push_back (*reinterpret_cast<long*>(&__main__build_path__block__109__x));
        stack.push_back (*reinterpret_cast<long*>(&__main__build_path__block__109__y));
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        long __arg1 = *reinterpret_cast<long*>(&__stackval);
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        long __arg0 = *reinterpret_cast<long*>(&__stackval);
        stack.push_back (reinterpret_cast<long>(new __main____Point (__arg0, __arg1)));
    }
    // LHS
    // Variable declaration
    __main____Point* __main__build_path__block__109__p0;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__build_path__block__109__p0 = reinterpret_cast<__main____Point*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__p0));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Method Call - Vector<:Point:>::pushBack(Point) -> void
    // LHS
    // Member Accessor obj.points
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__p));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Vector__Point* __res = (reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // RHS
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__p0));
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
    stack.push_back (1);
    // LHS
    // Variable declaration
    long __main__build_path__block__109__for__110__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__build_path__block__109__for__110__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__build_path__block__109__for__110__i));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__build_path__block__109__for__110__i));
            // RHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__tokens));
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
        // Function Call - substr(char[], int, int) -> char[]
        {
            // Arguments
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__tokens));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__build_path__block__109__for__110__i));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                char* __res = (*reinterpret_cast<char***>(&__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // Int Literal
            stack.push_back (2);
            // Function Call - strlen(char[]) -> int
            {
                // Arguments
                // Subscript Expression
                {
                    // LHS
                    // Member Accessor obj.data
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__tokens));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        char** __res = (reinterpret_cast<__main____Vector__char__1*>(__parent))->__field____main____Vector__char__1____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    stack.push_back (*reinterpret_cast<long*>(&__main__build_path__block__109__for__110__i));
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
            char* __arg0 = *reinterpret_cast<char**>(&__stackval);
            // substr
            char* __res = __main____substr__char__1__int__int (__arg0, __arg1, __arg2);
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        char* __main__build_path__block__109__for__110__block__111__point_str;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__build_path__block__109__for__110__block__111__point_str = *reinterpret_cast<char**>(&__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__for__110__block__111__point_str));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Function Call - split(char[], char) -> Vector<:char[]:>
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__for__110__block__111__point_str));
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>(',')));
            
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
        __main____Vector__char__1* __main__build_path__block__109__for__110__block__111__point_tokens;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__build_path__block__109__for__110__block__111__point_tokens = reinterpret_cast<__main____Vector__char__1*>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__for__110__block__111__point_tokens));
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
                    stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__for__110__block__111__point_tokens));
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
            // stringToInt
            long __res = __builtin__stringToInt__char__1 (__arg0);
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Variable declaration
        long __main__build_path__block__109__for__110__block__111__x;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__build_path__block__109__for__110__block__111__x = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__build_path__block__109__for__110__block__111__x));
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
                    stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__for__110__block__111__point_tokens));
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
        long __main__build_path__block__109__for__110__block__111__y;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__build_path__block__109__for__110__block__111__y = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__build_path__block__109__for__110__block__111__y));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Assignment - '='
        // RHS
        // Constructor Call - Point::Point(int, int) -> Point
        {
            // Arguments
            stack.push_back (*reinterpret_cast<long*>(&__main__build_path__block__109__for__110__block__111__x));
            stack.push_back (*reinterpret_cast<long*>(&__main__build_path__block__109__for__110__block__111__y));
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            long __arg1 = *reinterpret_cast<long*>(&__stackval);
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            long __arg0 = *reinterpret_cast<long*>(&__stackval);
            stack.push_back (reinterpret_cast<long>(new __main____Point (__arg0, __arg1)));
        }
        // LHS
        // Variable declaration
        __main____Point* __main__build_path__block__109__for__110__block__111__point;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__build_path__block__109__for__110__block__111__point = reinterpret_cast<__main____Point*>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__for__110__block__111__point));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Method Call - Vector<:Point:>::pushBack(Point) -> void
        // LHS
        // Member Accessor obj.points
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__p));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            __main____Vector__Point* __res = (reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points;
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // RHS
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__for__110__block__111__point));
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

        //-----------------------------------------------------------------
        // Update
        // Pre-Increment
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__build_path__block__109__for__110__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__build_path__block__109__for__110__i = __main__build_path__block__109__for__110__i + 1;
            __res = __main__build_path__block__109__for__110__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // We can ignore the update result
        stack.pop_back ();
    }
    //---------------------------------------------------------------------
    // Return
    stack.push_back (reinterpret_cast<long>(__main__build_path__block__109__p));
    __res = stack.back ();
    stack.pop_back ();
    return reinterpret_cast<__main____Path*>(__res);
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____build_path__char__1
//=========================================================================

//=========================================================================
// Function Declaration - printboard(Vector<:Vector<:char:>:>) -> void
void __main____printboard__Vector__tparam0__Vector (__main____Vector__Vector* __main__printboard__board)
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
    // Int Literal
    stack.push_back (0);
    // LHS
    // Variable declaration
    long __main__printboard__block__122__for__123__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__printboard__block__122__for__123__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__122__for__123__i));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__122__for__123__i));
            // RHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__printboard__board));
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
        long __main__printboard__block__122__for__123__block__124__for__125__j;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__printboard__block__122__for__123__block__124__for__125__j = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__122__for__123__block__124__for__125__j));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__122__for__123__block__124__for__125__j));
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
                            stack.push_back (reinterpret_cast<long>(__main__printboard__board));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__122__for__123__i));
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        __main____Vector__char* __res = (reinterpret_cast<__main____Vector__char**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____size;
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
            // Function Call - print(char) -> void
            {
                // Arguments
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
                                stack.push_back (reinterpret_cast<long>(__main__printboard__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__122__for__123__i));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            __main____Vector__char* __res = (reinterpret_cast<__main____Vector__char**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__122__for__123__block__124__for__125__j));
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
                stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__122__for__123__block__124__for__125__j));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__printboard__block__122__for__123__block__124__for__125__j = __main__printboard__block__122__for__123__block__124__for__125__j + 1;
                __res = __main__printboard__block__122__for__123__block__124__for__125__j;
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
        // Pre-Increment
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__printboard__block__122__for__123__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__printboard__block__122__for__123__i = __main__printboard__block__122__for__123__i + 1;
            __res = __main__printboard__block__122__for__123__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // We can ignore the update result
        stack.pop_back ();
    }
    //---------------------------------------------------------------------
    //---------------------------------------------------------------------
};
// End Function Declaration - __main____printboard__Vector__tparam0__Vector
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
    // Class Declaration - __main____Vector__Point inherits __builtin____main__Object
    // *see this class def before this parent function

    // Populate Dispatch Table
    __dtable____main____Vector__Point[0] = (void*)__method____main____Vector__Point____pushBack__Point;
    __dtable____main____Vector__Point[1] = (void*)__method____main____Vector__Point____popBack;
    __dtable____main____Vector__Point[2] = (void*)__method____main____Vector__Point____clear;
    __dtable____main____Vector__Point[3] = (void*)__method____main____Vector__Point____get__int;
    __dtable____main____Vector__Point[4] = (void*)__method____main____Vector__Point____set__int__Point;
    // Class Declaration - __main____Vector__Path inherits __builtin____main__Object
    // *see this class def before this parent function

    // Populate Dispatch Table
    __dtable____main____Vector__Path[0] = (void*)__method____main____Vector__Path____pushBack__Path;
    __dtable____main____Vector__Path[1] = (void*)__method____main____Vector__Path____popBack;
    __dtable____main____Vector__Path[2] = (void*)__method____main____Vector__Path____clear;
    __dtable____main____Vector__Path[3] = (void*)__method____main____Vector__Path____get__int;
    __dtable____main____Vector__Path[4] = (void*)__method____main____Vector__Path____set__int__Path;
    // Class Declaration - __main____Vector__char inherits __builtin____main__Object
    // *see this class def before this parent function

    // Populate Dispatch Table
    __dtable____main____Vector__char[0] = (void*)__method____main____Vector__char____pushBack__char;
    __dtable____main____Vector__char[1] = (void*)__method____main____Vector__char____popBack;
    __dtable____main____Vector__char[2] = (void*)__method____main____Vector__char____clear;
    __dtable____main____Vector__char[3] = (void*)__method____main____Vector__char____get__int;
    __dtable____main____Vector__char[4] = (void*)__method____main____Vector__char____set__int__char;
    // Class Declaration - __main____Vector__Vector inherits __builtin____main__Object
    // *see this class def before this parent function

    // Populate Dispatch Table
    __dtable____main____Vector__Vector[0] = (void*)__method____main____Vector__Vector____pushBack__Vector;
    __dtable____main____Vector__Vector[1] = (void*)__method____main____Vector__Vector____popBack;
    __dtable____main____Vector__Vector[2] = (void*)__method____main____Vector__Vector____clear;
    __dtable____main____Vector__Vector[3] = (void*)__method____main____Vector__Vector____get__int;
    __dtable____main____Vector__Vector[4] = (void*)__method____main____Vector__Vector____set__int__Vector;
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
    // Class Declaration - __main____Point inherits __builtin____main__Object
    // *see this class def before this parent function

    // Populate Dispatch Table
    // Function Declaration - print(Point) -> void
    // *see this func def before this parent function

    // Function Declaration - println(Point) -> void
    // *see this func def before this parent function

    // Class Declaration - __main____Path inherits __builtin____main__Object
    // *see this class def before this parent function

    // Populate Dispatch Table
    // Function Declaration - print(Path) -> void
    // *see this func def before this parent function

    // Function Declaration - println(Path) -> void
    // *see this func def before this parent function

    // Function Declaration - build_path(char[]) -> Path
    // *see this func def before this parent function

    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - Vector<:Path:>::Vector() -> Vector<:Path:>
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(new __main____Vector__Path ()));
    }
    // LHS
    // Variable declaration
    __main____Vector__Path* __main__paths;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__paths = reinterpret_cast<__main____Vector__Path*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__paths));
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
    long __main__for__112__l;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__for__112__l = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__for__112__l));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__for__112__l));
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
        // Function Call - build_path(char[]) -> Path
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
                stack.push_back (*reinterpret_cast<long*>(&__main__for__112__l));
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
            // build_path
            __main____Path* __res = __main____build_path__char__1 (__arg0);
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        __main____Path* __main__for__112__block__113__p;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__for__112__block__113__p = reinterpret_cast<__main____Path*>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__for__112__block__113__p));
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        // Statement
        // Method Call - Vector<:Path:>::pushBack(Path) -> void
        // LHS
        stack.push_back (reinterpret_cast<long>(__main__paths));
        // RHS
        {
            // Arguments
            stack.push_back (reinterpret_cast<long>(__main__for__112__block__113__p));
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Path* __arg0 = reinterpret_cast<__main____Path*>(__stackval);
            __obj = stack.back ();
            stack.pop_back ();
            __method____main____Vector__Path____pushBack__Path (reinterpret_cast<__main____Vector__Path*>(__obj), __arg0);
            // push dummy value - method rtype is void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // Update
        // Assignment - '+='
        // RHS
        // Int Literal
        stack.push_back (1);
        __rhs = stack.back ();
        stack.pop_back ();
        __main__for__112__l = __main__for__112__l + *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__for__112__l));
        // We can ignore the update result
        stack.pop_back ();
    }
    //---------------------------------------------------------------------
    // Statement
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (0);
    // LHS
    // Variable declaration
    long __main__maxx;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__maxx = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__maxx));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (500);
    // LHS
    // Variable declaration
    long __main__minx;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__minx = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__minx));
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
    long __main__maxy;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__maxy = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__maxy));
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
    long __main__miny;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__miny = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__miny));
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
    long __main__for__114__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__for__114__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__for__114__i));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__for__114__i));
            // RHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__paths));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size;
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
                stack.push_back (reinterpret_cast<long>(__main__paths));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                __main____Path** __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__for__114__i));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            __main____Path* __res = (reinterpret_cast<__main____Path**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        __main____Path* __main__for__114__block__115__path;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__for__114__block__115__path = reinterpret_cast<__main____Path*>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__for__114__block__115__path));
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
        long __main__for__114__block__115__for__116__j;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__for__114__block__115__for__116__j = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__for__114__block__115__for__116__j));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__114__block__115__for__116__j));
                // RHS
                // Member Accessor obj.size
                {
                    // LHS
                    // Member Accessor obj.points
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__for__114__block__115__path));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        __main____Vector__Point* __res = (reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
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
                    // Member Accessor obj.points
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__for__114__block__115__path));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        __main____Vector__Point* __res = (reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    __main____Point** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__for__114__block__115__for__116__j));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                __main____Point* __res = (reinterpret_cast<__main____Point**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // LHS
            // Variable declaration
            __main____Point* __main__for__114__block__115__for__116__block__117__point;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__for__114__block__115__for__116__block__117__point = reinterpret_cast<__main____Point*>(__rhs);
            // Result of assignment
            stack.push_back (reinterpret_cast<long>(__main__for__114__block__115__for__116__block__117__point));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            // Function Call - max(int, int) -> int
            {
                // Arguments
                // Addition
                {
                    // LHS
                    // Member Accessor obj.x
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__for__114__block__115__for__116__block__117__point));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
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
                stack.push_back (*reinterpret_cast<long*>(&__main__maxx));
                
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
            __main__maxx = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__maxx));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            // Function Call - max(int, int) -> int
            {
                // Arguments
                // Addition
                {
                    // LHS
                    // Member Accessor obj.y
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__for__114__block__115__for__116__block__117__point));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
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
                stack.push_back (*reinterpret_cast<long*>(&__main__maxy));
                
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
            __main__maxy = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__maxy));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            // Function Call - min(int, int) -> int
            {
                // Arguments
                // Subtraction
                {
                    // LHS
                    // Member Accessor obj.x
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__for__114__block__115__for__116__block__117__point));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
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
                stack.push_back (*reinterpret_cast<long*>(&__main__minx));
                
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
            __main__minx = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__minx));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            // Function Call - min(int, int) -> int
            {
                // Arguments
                // Member Accessor obj.y
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__for__114__block__115__for__116__block__117__point));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                stack.push_back (*reinterpret_cast<long*>(&__main__miny));
                
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
            __main__miny = *reinterpret_cast<long*>(&__rhs);
            // Result of assignment
            stack.push_back (*reinterpret_cast<long*>(&__main__miny));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // Update
            // Pre-Increment
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__114__block__115__for__116__j));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__114__block__115__for__116__j = __main__for__114__block__115__for__116__j + 1;
                __res = __main__for__114__block__115__for__116__j;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // We can ignore the update result
            stack.pop_back ();
        }
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // Update
        // Pre-Increment
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__for__114__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__for__114__i = __main__for__114__i + 1;
            __res = __main__for__114__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // We can ignore the update result
        stack.pop_back ();
    }
    //---------------------------------------------------------------------
    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - Path::Path() -> Path
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(new __main____Path ()));
    }
    // LHS
    // Variable declaration
    __main____Path* __main__floor;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__floor = reinterpret_cast<__main____Path*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__floor));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Method Call - Vector<:Point:>::pushBack(Point) -> void
    // LHS
    // Member Accessor obj.points
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__main__floor));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Vector__Point* __res = (reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // RHS
    {
        // Arguments
        // Constructor Call - Point::Point(int, int) -> Point
        {
            // Arguments
            // Subtraction
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__minx));
                // RHS
                // Int Literal
                stack.push_back (1000);
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
                stack.push_back (*reinterpret_cast<long*>(&__main__maxy));
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
            // Reinterpret from general register
            long __arg1 = *reinterpret_cast<long*>(&__stackval);
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            long __arg0 = *reinterpret_cast<long*>(&__stackval);
            stack.push_back (reinterpret_cast<long>(new __main____Point (__arg0, __arg1)));
        }
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

    // Statement
    // Method Call - Vector<:Point:>::pushBack(Point) -> void
    // LHS
    // Member Accessor obj.points
    {
        // LHS
        stack.push_back (reinterpret_cast<long>(__main__floor));
        // RHS
        __parent = stack.back ();
        stack.pop_back ();
        __main____Vector__Point* __res = (reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points;
        stack.push_back (reinterpret_cast<long>(__res));
    }
    // RHS
    {
        // Arguments
        // Constructor Call - Point::Point(int, int) -> Point
        {
            // Arguments
            // Addition
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__maxx));
                // RHS
                // Int Literal
                stack.push_back (1000);
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
                stack.push_back (*reinterpret_cast<long*>(&__main__maxy));
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
            // Reinterpret from general register
            long __arg1 = *reinterpret_cast<long*>(&__stackval);
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            long __arg0 = *reinterpret_cast<long*>(&__stackval);
            stack.push_back (reinterpret_cast<long>(new __main____Point (__arg0, __arg1)));
        }
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

    // Statement
    // Method Call - Vector<:Path:>::pushBack(Path) -> void
    // LHS
    stack.push_back (reinterpret_cast<long>(__main__paths));
    // RHS
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(__main__floor));
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        __main____Path* __arg0 = reinterpret_cast<__main____Path*>(__stackval);
        __obj = stack.back ();
        stack.pop_back ();
        __method____main____Vector__Path____pushBack__Path (reinterpret_cast<__main____Vector__Path*>(__obj), __arg0);
        // push dummy value - method rtype is void
        stack.push_back (0);
    }
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '-='
    // RHS
    // Int Literal
    stack.push_back (1000);
    __rhs = stack.back ();
    stack.pop_back ();
    __main__minx = __main__minx - *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__minx));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '+='
    // RHS
    // Int Literal
    stack.push_back (1000);
    __rhs = stack.back ();
    stack.pop_back ();
    __main__maxx = __main__maxx + *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__maxx));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '+='
    // RHS
    // Int Literal
    stack.push_back (2);
    __rhs = stack.back ();
    stack.pop_back ();
    __main__maxy = __main__maxy + *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__maxy));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - Vector<:Vector<:char:>:>::Vector() -> Vector<:Vector<:char:>:>
    {
        // Arguments
        stack.push_back (reinterpret_cast<long>(new __main____Vector__Vector ()));
    }
    // LHS
    // Variable declaration
    __main____Vector__Vector* __main__board;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__board = reinterpret_cast<__main____Vector__Vector*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__board));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    //---------------------------------------------------------------------
    // For-Loop
    // Init
    // Assignment - '='
    // RHS
    stack.push_back (*reinterpret_cast<long*>(&__main__miny));
    // LHS
    // Variable declaration
    long __main__for__118__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__for__118__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__for__118__i));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__for__118__i));
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__maxy));
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
        // Method Call - Vector<:Vector<:char:>:>::pushBack(Vector<:char:>) -> void
        // LHS
        stack.push_back (reinterpret_cast<long>(__main__board));
        // RHS
        {
            // Arguments
            // Constructor Call - Vector<:char:>::Vector() -> Vector<:char:>
            {
                // Arguments
                stack.push_back (reinterpret_cast<long>(new __main____Vector__char ()));
            }
            __stackval = stack.back ();
            stack.pop_back ();
            // Reinterpret from general register
            __main____Vector__char* __arg0 = reinterpret_cast<__main____Vector__char*>(__stackval);
            __obj = stack.back ();
            stack.pop_back ();
            __method____main____Vector__Vector____pushBack__Vector (reinterpret_cast<__main____Vector__Vector*>(__obj), __arg0);
            // push dummy value - method rtype is void
            stack.push_back (0);
        }
        // Statement results can be ignored
        stack.pop_back ();
        // End Statement

        //-----------------------------------------------------------------
        // For-Loop
        // Init
        // Assignment - '='
        // RHS
        stack.push_back (*reinterpret_cast<long*>(&__main__minx));
        // LHS
        // Variable declaration
        long __main__for__118__block__119__for__120__j;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__for__118__block__119__for__120__j = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__for__118__block__119__for__120__j));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__118__block__119__for__120__j));
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__maxx));
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
            // Method Call - Vector<:char:>::pushBack(char) -> void
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
                    __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Subtraction
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__for__118__i));
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__miny));
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
                __main____Vector__char* __res = (reinterpret_cast<__main____Vector__char**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // RHS
            {
                // Arguments
                // Char Literal
                stack.push_back (static_cast<long>(static_cast<unsigned char>('.')));
                __stackval = stack.back ();
                stack.pop_back ();
                // Reinterpret from general register
                char __arg0 = static_cast<char>(static_cast<unsigned char>(__stackval));
                __obj = stack.back ();
                stack.pop_back ();
                __method____main____Vector__char____pushBack__char (reinterpret_cast<__main____Vector__char*>(__obj), __arg0);
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
                stack.push_back (*reinterpret_cast<long*>(&__main__for__118__block__119__for__120__j));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__118__block__119__for__120__j = __main__for__118__block__119__for__120__j + 1;
                __res = __main__for__118__block__119__for__120__j;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // We can ignore the update result
            stack.pop_back ();
        }
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // Update
        // Pre-Increment
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__for__118__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__for__118__i = __main__for__118__i + 1;
            __res = __main__for__118__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // We can ignore the update result
        stack.pop_back ();
    }
    //---------------------------------------------------------------------
    // Function Declaration - printboard(Vector<:Vector<:char:>:>) -> void
    // *see this func def before this parent function

    //---------------------------------------------------------------------
    // For-Loop
    // Init
    // Assignment - '='
    // RHS
    // Int Literal
    stack.push_back (0);
    // LHS
    // Variable declaration
    long __main__for__127__i;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__for__127__i = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__for__127__i));
    // We can ignore the init result
    stack.pop_back ();
    // Using an infinite loop so we can write a separate multi-line condition
    while (1)
    {
        // Condition
        // Less Than
        {
            // LHS
            stack.push_back (*reinterpret_cast<long*>(&__main__for__127__i));
            // RHS
            // Member Accessor obj.size
            {
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__paths));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                long __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____size;
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
                stack.push_back (reinterpret_cast<long>(__main__paths));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                __main____Path** __res = (reinterpret_cast<__main____Vector__Path*>(__parent))->__field____main____Vector__Path____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            stack.push_back (*reinterpret_cast<long*>(&__main__for__127__i));
            __offset = stack.back ();
            stack.pop_back ();
            __pointer = stack.back ();
            stack.pop_back ();
            __main____Path* __res = (reinterpret_cast<__main____Path**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
            stack.push_back (reinterpret_cast<long>(__res));
        }
        // LHS
        // Variable declaration
        __main____Path* __main__for__127__block__128__path;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__for__127__block__128__path = reinterpret_cast<__main____Path*>(__rhs);
        // Result of assignment
        stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__path));
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
        long __main__for__127__block__128__for__129__j;
        __rhs = stack.back ();
        stack.pop_back ();
        __main__for__127__block__128__for__129__j = *reinterpret_cast<long*>(&__rhs);
        // Result of assignment
        stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__j));
        // We can ignore the init result
        stack.pop_back ();
        // Using an infinite loop so we can write a separate multi-line condition
        while (1)
        {
            // Condition
            // Less Than
            {
                // LHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__j));
                // RHS
                // Subtraction
                {
                    // LHS
                    // Member Accessor obj.size
                    {
                        // LHS
                        // Member Accessor obj.points
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__path));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            __main____Vector__Point* __res = (reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
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
                    // Member Accessor obj.points
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__path));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        __main____Vector__Point* __res = (reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    __main____Point** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__j));
                __offset = stack.back ();
                stack.pop_back ();
                __pointer = stack.back ();
                stack.pop_back ();
                __main____Point* __res = (reinterpret_cast<__main____Point**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // LHS
            // Variable declaration
            __main____Point* __main__for__127__block__128__for__129__block__130__a;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__for__127__block__128__for__129__block__130__a = reinterpret_cast<__main____Point*>(__rhs);
            // Result of assignment
            stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__a));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            // Statement
            // Assignment - '='
            // RHS
            // Subscript Expression
            {
                // LHS
                // Member Accessor obj.data
                {
                    // LHS
                    // Member Accessor obj.points
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__path));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        __main____Vector__Point* __res = (reinterpret_cast<__main____Path*>(__parent))->__field____main____Path____points;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    __main____Point** __res = (reinterpret_cast<__main____Vector__Point*>(__parent))->__field____main____Vector__Point____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Addition
                {
                    // LHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__j));
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
                __main____Point* __res = (reinterpret_cast<__main____Point**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // LHS
            // Variable declaration
            __main____Point* __main__for__127__block__128__for__129__block__130__b;
            __rhs = stack.back ();
            stack.pop_back ();
            __main__for__127__block__128__for__129__block__130__b = reinterpret_cast<__main____Point*>(__rhs);
            // Result of assignment
            stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__b));
            // Statement results can be ignored
            stack.pop_back ();
            // End Statement

            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Greater Than
            {
                // LHS
                // Member Accessor obj.y
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__a));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                // Member Accessor obj.y
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__b));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) > *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__131__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__131__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                //---------------------------------------------------------
                // For-Loop
                // Init
                // Assignment - '='
                // RHS
                // Member Accessor obj.y
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__a));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // LHS
                // Variable declaration
                long __main__for__127__block__128__for__129__block__130__if__131__block__132__for__133__k;
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__127__block__128__for__129__block__130__if__131__block__132__for__133__k = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__131__block__132__for__133__k));
                // We can ignore the init result
                stack.pop_back ();
                // Using an infinite loop so we can write a separate multi-line condition
                while (1)
                {
                    // Condition
                    // Greater Than or Equal to
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__131__block__132__for__133__k));
                        // RHS
                        // Member Accessor obj.y
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__b));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
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
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '='
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('#')));
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__131__block__132__for__133__k));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            __main____Vector__char* __res = (reinterpret_cast<__main____Vector__char**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    // Subtraction
                    {
                        // LHS
                        // Member Accessor obj.x
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__a));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__minx));
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

                    //-----------------------------------------------------
                    // Update
                    // Pre-Decrement
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__131__block__132__for__133__k));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__for__127__block__128__for__129__block__130__if__131__block__132__for__133__k = __main__for__127__block__128__for__129__block__130__if__131__block__132__for__133__k - 1;
                        __res = __main__for__127__block__128__for__129__block__130__if__131__block__132__for__133__k;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // We can ignore the update result
                    stack.pop_back ();
                }
                //---------------------------------------------------------
                //---------------------------------------------------------
            }
            // End of if
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Less Than
            {
                // LHS
                // Member Accessor obj.x
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__a));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                // Member Accessor obj.x
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__b));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) < *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__135__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__135__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                //---------------------------------------------------------
                // For-Loop
                // Init
                // Assignment - '='
                // RHS
                // Member Accessor obj.x
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__a));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // LHS
                // Variable declaration
                long __main__for__127__block__128__for__129__block__130__if__135__block__136__for__137__k;
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__127__block__128__for__129__block__130__if__135__block__136__for__137__k = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__135__block__136__for__137__k));
                // We can ignore the init result
                stack.pop_back ();
                // Using an infinite loop so we can write a separate multi-line condition
                while (1)
                {
                    // Condition
                    // Less Than or Equal to
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__135__block__136__for__137__k));
                        // RHS
                        // Member Accessor obj.x
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__b));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = *reinterpret_cast<long*>(&__lhs) <= *reinterpret_cast<long*>(&__rhs);
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
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('#')));
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Member Accessor obj.y
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__a));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
                                stack.push_back (*reinterpret_cast<long*>(&__res));
                            }
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            __main____Vector__char* __res = (reinterpret_cast<__main____Vector__char**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    // Subtraction
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__135__block__136__for__137__k));
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__minx));
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

                    //-----------------------------------------------------
                    // Update
                    // Pre-Increment
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__135__block__136__for__137__k));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__for__127__block__128__for__129__block__130__if__135__block__136__for__137__k = __main__for__127__block__128__for__129__block__130__if__135__block__136__for__137__k + 1;
                        __res = __main__for__127__block__128__for__129__block__130__if__135__block__136__for__137__k;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // We can ignore the update result
                    stack.pop_back ();
                }
                //---------------------------------------------------------
                //---------------------------------------------------------
            }
            // End of if
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Less Than
            {
                // LHS
                // Member Accessor obj.y
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__a));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                // Member Accessor obj.y
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__b));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) < *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__139__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__139__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                //---------------------------------------------------------
                // For-Loop
                // Init
                // Assignment - '='
                // RHS
                // Member Accessor obj.y
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__a));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // LHS
                // Variable declaration
                long __main__for__127__block__128__for__129__block__130__if__139__block__140__for__141__k;
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__127__block__128__for__129__block__130__if__139__block__140__for__141__k = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__139__block__140__for__141__k));
                // We can ignore the init result
                stack.pop_back ();
                // Using an infinite loop so we can write a separate multi-line condition
                while (1)
                {
                    // Condition
                    // Less Than or Equal to
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__139__block__140__for__141__k));
                        // RHS
                        // Member Accessor obj.y
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__b));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __lhs = stack.back ();
                        stack.pop_back ();
                        long __res = *reinterpret_cast<long*>(&__lhs) <= *reinterpret_cast<long*>(&__rhs);
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
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('#')));
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__139__block__140__for__141__k));
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            __main____Vector__char* __res = (reinterpret_cast<__main____Vector__char**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    // Subtraction
                    {
                        // LHS
                        // Member Accessor obj.x
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__a));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__minx));
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

                    //-----------------------------------------------------
                    // Update
                    // Pre-Increment
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__139__block__140__for__141__k));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__for__127__block__128__for__129__block__130__if__139__block__140__for__141__k = __main__for__127__block__128__for__129__block__130__if__139__block__140__for__141__k + 1;
                        __res = __main__for__127__block__128__for__129__block__130__if__139__block__140__for__141__k;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // We can ignore the update result
                    stack.pop_back ();
                }
                //---------------------------------------------------------
                //---------------------------------------------------------
            }
            // End of if
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // If-Statement
            // Precomputing all if/elif conditions and give unique names
            // bc we can't have code between if and elif
            // Condition
            // Greater Than
            {
                // LHS
                // Member Accessor obj.x
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__a));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                // Member Accessor obj.x
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__b));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                __rhs = stack.back ();
                stack.pop_back ();
                __lhs = stack.back ();
                stack.pop_back ();
                long __res = *reinterpret_cast<long*>(&__lhs) > *reinterpret_cast<long*>(&__rhs);
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            long __if__143__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__143__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                //---------------------------------------------------------
                // For-Loop
                // Init
                // Assignment - '='
                // RHS
                // Member Accessor obj.x
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__a));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // LHS
                // Variable declaration
                long __main__for__127__block__128__for__129__block__130__if__143__block__144__for__145__k;
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__127__block__128__for__129__block__130__if__143__block__144__for__145__k = *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__143__block__144__for__145__k));
                // We can ignore the init result
                stack.pop_back ();
                // Using an infinite loop so we can write a separate multi-line condition
                while (1)
                {
                    // Condition
                    // Greater Than or Equal to
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__143__block__144__for__145__k));
                        // RHS
                        // Member Accessor obj.x
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__b));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
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
                    //-----------------------------------------------------
                    // Code Block
                    // Statement
                    // Assignment - '='
                    // RHS
                    // Char Literal
                    stack.push_back (static_cast<long>(static_cast<unsigned char>('#')));
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Member Accessor obj.y
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__for__127__block__128__for__129__block__130__a));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
                                stack.push_back (*reinterpret_cast<long*>(&__res));
                            }
                            __offset = stack.back ();
                            stack.pop_back ();
                            __pointer = stack.back ();
                            stack.pop_back ();
                            __main____Vector__char* __res = (reinterpret_cast<__main____Vector__char**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    // Subtraction
                    {
                        // LHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__143__block__144__for__145__k));
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__minx));
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

                    //-----------------------------------------------------
                    // Update
                    // Pre-Decrement
                    {
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__block__130__if__143__block__144__for__145__k));
                        __rhs = stack.back ();
                        stack.pop_back ();
                        __main__for__127__block__128__for__129__block__130__if__143__block__144__for__145__k = __main__for__127__block__128__for__129__block__130__if__143__block__144__for__145__k - 1;
                        __res = __main__for__127__block__128__for__129__block__130__if__143__block__144__for__145__k;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // We can ignore the update result
                    stack.pop_back ();
                }
                //---------------------------------------------------------
                //---------------------------------------------------------
            }
            // End of if
            //-------------------------------------------------------------
            //-------------------------------------------------------------
            // Update
            // Pre-Increment
            {
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__for__127__block__128__for__129__j));
                __rhs = stack.back ();
                stack.pop_back ();
                __main__for__127__block__128__for__129__j = __main__for__127__block__128__for__129__j + 1;
                __res = __main__for__127__block__128__for__129__j;
                stack.push_back (*reinterpret_cast<long*>(&__res));
            }
            // We can ignore the update result
            stack.pop_back ();
        }
        //-----------------------------------------------------------------
        //-----------------------------------------------------------------
        // Update
        // Pre-Increment
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__for__127__i));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__for__127__i = __main__for__127__i + 1;
            __res = __main__for__127__i;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // We can ignore the update result
        stack.pop_back ();
    }
    //---------------------------------------------------------------------
    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - Point::Point(int, int) -> Point
    {
        // Arguments
        // Int Literal
        stack.push_back (500);
        // Int Literal
        stack.push_back (0);
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        long __arg1 = *reinterpret_cast<long*>(&__stackval);
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        long __arg0 = *reinterpret_cast<long*>(&__stackval);
        stack.push_back (reinterpret_cast<long>(new __main____Point (__arg0, __arg1)));
    }
    // LHS
    // Variable declaration
    __main____Point* __main__drop_point;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__drop_point = reinterpret_cast<__main____Point*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__drop_point));
    // Statement results can be ignored
    stack.pop_back ();
    // End Statement

    // Statement
    // Assignment - '='
    // RHS
    // Constructor Call - Point::Point(int, int) -> Point
    {
        // Arguments
        // Member Accessor obj.x
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__drop_point));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // Member Accessor obj.y
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__drop_point));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        long __arg1 = *reinterpret_cast<long*>(&__stackval);
        __stackval = stack.back ();
        stack.pop_back ();
        // Reinterpret from general register
        long __arg0 = *reinterpret_cast<long*>(&__stackval);
        stack.push_back (reinterpret_cast<long>(new __main____Point (__arg0, __arg1)));
    }
    // LHS
    // Variable declaration
    __main____Point* __main__sand_pos;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__sand_pos = reinterpret_cast<__main____Point*>(__rhs);
    // Result of assignment
    stack.push_back (reinterpret_cast<long>(__main__sand_pos));
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
    long __main__num_sand_at_rest;
    __rhs = stack.back ();
    stack.pop_back ();
    __main__num_sand_at_rest = *reinterpret_cast<long*>(&__rhs);
    // Result of assignment
    stack.push_back (*reinterpret_cast<long*>(&__main__num_sand_at_rest));
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
        // Statement
        // Assignment - '='
        // RHS
        // Member Accessor obj.x
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__drop_point));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__main__sand_pos));
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
        // Member Accessor obj.y
        {
            // LHS
            stack.push_back (reinterpret_cast<long>(__main__drop_point));
            // RHS
            __parent = stack.back ();
            stack.pop_back ();
            long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
        // LHS
        // Member Accessor Assignment
        // LHS
        stack.push_back (reinterpret_cast<long>(__main__sand_pos));
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
                            stack.push_back (reinterpret_cast<long>(__main__board));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // OFFSET
                        // Member Accessor obj.y
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__drop_point));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        __offset = stack.back ();
                        stack.pop_back ();
                        __pointer = stack.back ();
                        stack.pop_back ();
                        __main____Vector__char* __res = (reinterpret_cast<__main____Vector__char**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // OFFSET
                // Subtraction
                {
                    // LHS
                    // Member Accessor obj.x
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__drop_point));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    // RHS
                    stack.push_back (*reinterpret_cast<long*>(&__main__minx));
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
        long __if__149__cond = stack.back ();
        stack.pop_back ();
        // get condition from stack
        if (__if__149__cond)
        {
            // Body
            // Break out of __while__147
            break;
        }
        // End of if
        //-----------------------------------------------------------------
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
                    // Member Accessor obj.data
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
                                __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Addition
                            {
                                // LHS
                                // Member Accessor obj.y
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__sand_pos));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
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
                            __main____Vector__char* __res = (reinterpret_cast<__main____Vector__char**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    // Subtraction
                    {
                        // LHS
                        // Member Accessor obj.x
                        {
                            // LHS
                            stack.push_back (reinterpret_cast<long>(__main__sand_pos));
                            // RHS
                            __parent = stack.back ();
                            stack.pop_back ();
                            long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
                            stack.push_back (*reinterpret_cast<long*>(&__res));
                        }
                        // RHS
                        stack.push_back (*reinterpret_cast<long*>(&__main__minx));
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
            long __if__152__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__152__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '+='
                // RHS
                // Int Literal
                stack.push_back (1);
                // LHS
                // Member Accessor Assignment
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__sand_pos));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                __rhs = stack.back ();
                stack.pop_back ();
                (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y + *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Continue in __while__150
                continue;
                //---------------------------------------------------------
            }
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Addition
                            {
                                // LHS
                                // Member Accessor obj.y
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__sand_pos));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
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
                            __main____Vector__char* __res = (reinterpret_cast<__main____Vector__char**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    // Subtraction
                    {
                        // LHS
                        // Subtraction
                        {
                            // LHS
                            // Member Accessor obj.x
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__sand_pos));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
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
                        stack.push_back (*reinterpret_cast<long*>(&__main__minx));
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
            long __if__154__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__154__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '+='
                // RHS
                // Int Literal
                stack.push_back (1);
                // LHS
                // Member Accessor Assignment
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__sand_pos));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                __rhs = stack.back ();
                stack.pop_back ();
                (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y + *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Statement
                // Assignment - '-='
                // RHS
                // Int Literal
                stack.push_back (1);
                // LHS
                // Member Accessor Assignment
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__sand_pos));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                __rhs = stack.back ();
                stack.pop_back ();
                (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x - *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Continue in __while__150
                continue;
                //---------------------------------------------------------
            }
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
                                stack.push_back (reinterpret_cast<long>(__main__board));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                                stack.push_back (reinterpret_cast<long>(__res));
                            }
                            // OFFSET
                            // Addition
                            {
                                // LHS
                                // Member Accessor obj.y
                                {
                                    // LHS
                                    stack.push_back (reinterpret_cast<long>(__main__sand_pos));
                                    // RHS
                                    __parent = stack.back ();
                                    stack.pop_back ();
                                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
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
                            __main____Vector__char* __res = (reinterpret_cast<__main____Vector__char**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                            stack.push_back (reinterpret_cast<long>(__res));
                        }
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    // Subtraction
                    {
                        // LHS
                        // Addition
                        {
                            // LHS
                            // Member Accessor obj.x
                            {
                                // LHS
                                stack.push_back (reinterpret_cast<long>(__main__sand_pos));
                                // RHS
                                __parent = stack.back ();
                                stack.pop_back ();
                                long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
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
                        stack.push_back (*reinterpret_cast<long*>(&__main__minx));
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
            long __if__156__cond = stack.back ();
            stack.pop_back ();
            // get condition from stack
            if (__if__156__cond)
            {
                // Body
                //---------------------------------------------------------
                // Code Block
                // Statement
                // Assignment - '+='
                // RHS
                // Int Literal
                stack.push_back (1);
                // LHS
                // Member Accessor Assignment
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__sand_pos));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                __rhs = stack.back ();
                stack.pop_back ();
                (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y + *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Statement
                // Assignment - '+='
                // RHS
                // Int Literal
                stack.push_back (1);
                // LHS
                // Member Accessor Assignment
                // LHS
                stack.push_back (reinterpret_cast<long>(__main__sand_pos));
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                __rhs = stack.back ();
                stack.pop_back ();
                (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x + *reinterpret_cast<long*>(&__rhs);
                // Result of assignment
                stack.push_back (*reinterpret_cast<long*>(&(reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x));
                // Statement results can be ignored
                stack.pop_back ();
                // End Statement

                // Continue in __while__150
                continue;
                //---------------------------------------------------------
            }
            // End of if
            //-------------------------------------------------------------
            // Statement
            // Assignment - '='
            // RHS
            // Char Literal
            stack.push_back (static_cast<long>(static_cast<unsigned char>('o')));
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
                        stack.push_back (reinterpret_cast<long>(__main__board));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        __main____Vector__char** __res = (reinterpret_cast<__main____Vector__Vector*>(__parent))->__field____main____Vector__Vector____data;
                        stack.push_back (reinterpret_cast<long>(__res));
                    }
                    // OFFSET
                    // Member Accessor obj.y
                    {
                        // LHS
                        stack.push_back (reinterpret_cast<long>(__main__sand_pos));
                        // RHS
                        __parent = stack.back ();
                        stack.pop_back ();
                        long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____y;
                        stack.push_back (*reinterpret_cast<long*>(&__res));
                    }
                    __offset = stack.back ();
                    stack.pop_back ();
                    __pointer = stack.back ();
                    stack.pop_back ();
                    __main____Vector__char* __res = (reinterpret_cast<__main____Vector__char**>(__pointer))[*reinterpret_cast<long*>(&__offset)];
                    stack.push_back (reinterpret_cast<long>(__res));
                }
                // RHS
                __parent = stack.back ();
                stack.pop_back ();
                char* __res = (reinterpret_cast<__main____Vector__char*>(__parent))->__field____main____Vector__char____data;
                stack.push_back (reinterpret_cast<long>(__res));
            }
            // OFFSET
            // Subtraction
            {
                // LHS
                // Member Accessor obj.x
                {
                    // LHS
                    stack.push_back (reinterpret_cast<long>(__main__sand_pos));
                    // RHS
                    __parent = stack.back ();
                    stack.pop_back ();
                    long __res = (reinterpret_cast<__main____Point*>(__parent))->__field____main____Point____x;
                    stack.push_back (*reinterpret_cast<long*>(&__res));
                }
                // RHS
                stack.push_back (*reinterpret_cast<long*>(&__main__minx));
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

            // Break out of __while__150
            break;
            //-------------------------------------------------------------
        }
        // End of While
        //-----------------------------------------------------------------
        // Statement
        // Pre-Increment
        {
            // RHS
            stack.push_back (*reinterpret_cast<long*>(&__main__num_sand_at_rest));
            __rhs = stack.back ();
            stack.pop_back ();
            __main__num_sand_at_rest = __main__num_sand_at_rest + 1;
            __res = __main__num_sand_at_rest;
            stack.push_back (*reinterpret_cast<long*>(&__res));
        }
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
        stack.push_back (*reinterpret_cast<long*>(&__main__num_sand_at_rest));
        
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

