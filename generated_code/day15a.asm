; ### x86-64 generated from AmyScript Compiler ###########################
; ========================================================================

; ========================================================================
; ### LIBRARY CODE #######################################################
; ========================================================================

; AmyScript Built-in library
; Author: Amy Burnett
; ========================================================================

        global _start
        section   .text
        extern printf, exit, getline, stdin
        extern free, malloc
        extern atoi, atof

; ========================================================================

; Exits the program with the given exit code 
; void exit(int exit_code)
; - exit_code : [rbp + 16]
; - uses external exit function from libc
__builtin__exit__int: 
        push    rbp 
        mov     rbp, rsp 
        and     rsp, -16                 ; ensure stack is 16-byte aligned
        
        mov     rdi, qword [rbp + 16]
        call exit                          ; invoke operating system to exit

        mov     rsp, rbp                 ; restore stack pointer
        pop     rbp 
        ret

; ========================================================================

; Frees memory of the given pointer
; void free()
; - exit_code : [rbp + 16]
; - uses external exit function from libc
; __builtin__free__void__: 
;         push    rbp 
;         mov     rbp, rsp 
        


;         pop     rbp 
;         ret

; ========================================================================
; Prints a given string to the screen
; void print (char[] stringToPrint);
; stringToPrint : [rbp + 16]
; *requires null at the end of the string
__builtin__print__char__1:
        push rbp
        mov rbp, rsp
        and     rsp, -16                 ; ensure stack is 16-byte aligned

        mov     rsi, qword [rbp + 16]
        mov     rdi, __data__print__char__1__format
        mov     eax, 0
        call    printf 

        mov     rsp, rbp                 ; restore stack pointer
        pop rbp
        ret

section .data
__data__print__char__1__format: db "%s", 0
section .text

; print__char__1:
;     // grab string
;     stackget __str 0
;     sizeof __size __str
;     // print each char
;     // init
;     assign __i 0
; __print__char__1__loop:
;     // cond
;     cmp __i __size
;     jge __print__char__1__endloop
;     // Body
;     print __str[__i]
;     // update
;     add __i __i 1
;     // repeat
;     jump __print__char__1__loop
; __print__char__1__endloop:
;     return 0

; ========================================================================

; Prints an int to the screen
; Utilizes printf "%d"
; void print (int valueToPrint);
; valueToPrint : [rbp + 16]
__builtin__print__int:
        push    rbp 
        mov     rbp, rsp
        and     rsp, -16                 ; ensure stack is 16-byte aligned

        mov     rsi, qword [rbp + 16]
        mov     rdi, __data__print__int__format
        mov     eax, 0
        call    printf 

        mov     rsp, rbp                 ; restore stack pointer
        pop     rbp
        ret 

section .data
__data__print__int__format: db "%ld", 0
section .text

; Prints an int to the screen
; void print (int intToPrint);
; - intToPrint : [rbp + 16] (8-bytes)
; Usage:
;        push rdx
;        call print__int
;        pop
; manual_print__int:
;         push    rbp
;         mov     rbp, rsp  
;         sub     rsp, 4                   ; num        [rbp -  4] [int 4-bytes]
;         sub     rsp, 4                   ; isNegative [rbp -  8] [int 4-bytes]
;         sub     rsp, 4                   ; digit      [rbp - 12] [int 4-bytes]
;         sub     rsp, 4                   ; char       [rbp - 16] [int 4-bytes]
;         sub     rsp, 4                   ; numDigits  [rbp - 20] [int 4-bytes]

;         ; initialize local vars
;         mov     edx, dword [rbp + 16]
;         mov     dword [rbp - 4], edx
;         mov     dword [rbp - 8], 0
;         mov     dword [rbp - 12], 0
;         mov     dword [rbp - 16], 0
;         mov     dword [rbp - 20], 0

;         ; account for negative numbers
;         ; if num < 0:
;         ;   isNegative = 1
;         ;   num = -num
;         cmp     dword [rbp - 4], 0
;         jge     positive0
;         mov     dword [rbp - 8], 1
;         neg     dword [rbp - 4]
; positive0: nop

;         ; while num > 9:
; while0:
;         cmp     dword [rbp - 4], 9 
;         jle     endwhile0 
;         ;   digit = num % 10
;         ;   num = num / 10
;         mov     edi, 10
;         mov     eax, dword [rbp - 4]
;         cdq     
;         idiv    edi
;         mov     dword [rbp - 12], edx  ; digit = num % 10
;         mov     dword [rbp - 4], eax   ; num = num / 10

;         ;   char = digit + '0'
;         mov     eax, dword [rbp - 12]
;         add     eax, '0'
;         ;   push char
;         push    rax
;         ;   numDigits++ 
;         inc     dword [rbp - 20]
;         ; repeat
;         jmp     while0
; endwhile0: 

;         ;   char = num + '0'
;         mov     eax, dword [rbp - 4]
;         add     eax, '0'
;         ;   push char
;         push    rax
;         ;   numDigits++ 
;         inc     dword [rbp - 20]
        
;         ; if isNegative == 1:
;         cmp     dword [rbp - 8], 1
;         jne     positive1
;         ;   push '-'
;         push    '-'
;         ;   numDigits++
;         inc     dword [rbp - 20]

; positive1: 
;         nop
        
;         ; while numDigits > 0:
; while1:
;         cmp     dword [rbp - 20], 0
;         jle     endwhile1
;         ;   pop char
;         pop     rdx
;         ;   printchar char
;         push    rdx   ; arg0
;         call    print__char 
;         pop     rdx    ; arg0
;         ;   numDigits--
;         dec     dword [rbp - 20]
;         ;   repeat 
;         jmp     while1
; endwhile1:

;         mov     rsp, rbp                 ; pop local vars 
;         pop     rbp
;         ret

; ========================================================================

; Prints a char to the screen
; Utilizes printf "%c"
; void print (char valueToPrint);
; valueToPrint : [rbp + 16]
__builtin__print__char:
        push    rbp 
        mov     rbp, rsp
        and     rsp, -16                 ; ensure stack is 16-byte aligned

        mov     rsi, qword [rbp + 16]
        mov     rdi, __data__print__char__format
        mov     eax, 0
        call    printf 

        mov     rsp, rbp                 ; restore stack pointer
        pop     rbp
        ret 

section .data
__data__print__char__format: db "%c", 0
section .text

; void print(char c)
; c : [rbp + 16] (8-bytes)
manual_print__char:
        push    rbp
        mov     rbp, rsp  
        sub     rsp, 1                   ; make space for char
        mov     dl, byte [rbp + 16]
        mov     byte [rbp - 4], dl

        mov     rax, 1                   ; system call for write
        mov     rdi, 1                   ; file handle 1 is stdout
        mov     rsi, rbp                 ; address of string to output
        sub     rsi, 4
        mov     rdx, 1                   ; number of bytes
        syscall                          ; invoke operating system to do the write

        mov     rsp, rbp                 ; restore stack pointer
        pop     rbp
        ret

; ========================================================================

; Prints a float to the screen
; Utilizes printf "%f"
; void print (float valueToPrint);
; valueToPrint : [rbp + 16]
; Usage:
;       push qword [myfloat]
;       call print__float
;       pop rdx 
;       ...
; section   .data
; myfloat: dq 3.1415926535
__builtin__print__float:
        push    rbp 
        mov     rbp, rsp
        and     rsp, -16                 ; ensure stack is 16-byte aligned

        movsd   xmm0, qword [rbp + 16]
        mov     rdi, __data__print__float__format
        mov     eax, 1
        call    printf 

        mov     rsp, rbp                 ; pop local vars 
        pop     rbp
        ret 

section .data
__data__print__float__format: db "%g", 0
section .text

; //========================================================================
; // Prints a given string to the screen with a newline at the end
; // void println (char[] stringToPrint);
; stringToPrint : [rbp + 16]
__builtin__println__char__1:
        push rbp
        mov rbp, rsp
        and     rsp, -16                 ; ensure stack is 16-byte aligned

        mov     rsi, qword [rbp + 16]
        mov     rdi, __data__println__char__1__format
        mov     eax, 0
        call    printf 

        mov     rsp, rbp                 ; pop local vars 
        pop rbp
        ret

section .data
__data__println__char__1__format: db "%s", 10, 0
section .text

; println__char__1:
;     // grab string
;     stackget __str 0
;     sizeof __size __str
;     // print each char
;     // init
;     assign __i 0
; __println__char__1__loop:
;     // cond
;     cmp __i __size
;     jge __println__char__1__endloop
;     // Body
;     print __str[__i]
;     // update
;     add __i __i 1
;     // repeat
;     jump __println__char__1__loop
; __println__char__1__endloop:
;     println
;     return 0

; ========================================================================

; Prints an int to the screen with a newline
; Utilizes printf "%d"
; void println (int valueToPrint);
; valueToPrint : [rbp + 16]
__builtin__println__int:
        push    rbp 
        mov     rbp, rsp
        and     rsp, -16                 ; ensure stack is 16-byte aligned

        mov     rsi, qword [rbp + 16]
        mov     rdi, __data__println__int__format
        mov     eax, 0
        call    printf

        mov     rsp, rbp                 ; pop local vars 
        pop     rbp
        ret 

section .data
__data__println__int__format: db "%ld", 10, 0
section .text

; ========================================================================
; // Prints a float to the screen with a newline
; // void println (float floatToPrint);
; valueToPrint : [rbp + 16]
__builtin__println__float:
        push    rbp 
        mov     rbp, rsp
        and     rsp, -16                 ; ensure stack is 16-byte aligned

        movsd   xmm0, qword [rbp + 16]
        mov     rdi, __data__println__float__format
        mov     eax, 1                   ; one floating point
        call    printf

        mov     rsp, rbp                 ; pop local vars 
        pop     rbp
        ret 

section .data
; g uses the shortest representation
; of f and e (scientific)
__data__println__float__format: db "%g", 10, 0
section .text

; //========================================================================
; // Prints a char to the screen with a newline
; // void println (char charToPrint);
__builtin__println__char:
        push    rbp 
        mov     rbp, rsp

        mov     rsi, qword [rbp + 16]
        mov     rdi, __data__println__char__format
        mov     eax, 0
        call    printf 

        mov     rsp, rbp                 ; pop local vars 
        pop     rbp
        ret 

section .data
__data__println__char__format: db "%c", 10, 0
section .text

; //========================================================================
; // Prints an enum's integer value with a newline
; // void println (Enum e);
; __builtin__println__Enum:
;     stackget __e 0
;     println __e
;     return 0

; //========================================================================
; // Prints a newline to the console
; // void println ();
__builtin__println:
        push    rbp 
        mov     rbp, rsp

        mov     rdi, __data__println__format
        mov     eax, 0
        call    printf 

        pop     rbp
        ret 

section .data
__data__println__format: db 10, 0
section .text

; //========================================================================
; // grabs input from the console 
; this waits for a line if there isnt one
; // char[] input ();
__builtin__input:
        ; function setup
        push    rbp
        mov     rbp, rsp
        sub     rsp, 16
        ; function body 
        mov     qword [rbp-8], 0    ; char* buffer = nullptr;
        mov     qword [rbp-16], 0   ; size_t buflen = 0;
        ; num_chars = getline (&buffer, &buflen, stdin);
        mov     rdx, qword [stdin]  ; stdin
        lea     rcx, [rbp-16]
        lea     rax, [rbp-8]
        mov     rsi, rcx
        mov     rdi, rax
        call    getline
        ; check for eof
        cmp     rax, -1
        je      __builtin__input__eof
        ; return pointer to the line
        mov     rax, qword [rbp-8]
        jmp     __builtin__input__end

__builtin__input__eof:
        ; set rax to null
        mov     rax, 0

__builtin__input__end:
        add     rsp, 16
        pop     rbp
        ret 

; //========================================================================
; // returns default float value
; // float float ();
; __builtin__float:
;     return 0.0

; //========================================================================
; // converts int to float
; // float intToFloat (int value);
; value : [rbp + 16]
__builtin__intToFloat__int:
        ; function prologue
        push    rbp
        mov     rbp, rsp
        
        cvtsi2sd xmm0, qword [rbp + 16] ; xmm0 = float(value)

        ; function epilogue
        mov     rsp, rbp
        pop     rbp
        ret 

; //========================================================================
; // parses a float from a given char[]
; // float stringToFloat (char[]);
; str : [rbp + 16]
__builtin__stringToFloat__char__1:
        ; function setup
        push    rbp
        mov     rbp, rsp

        mov     rdi, qword [rbp+16]
        call    atof
        ; value stored in xmm0
        
        pop rbp
        ret

; //========================================================================
; // returns default int value
; // int int ();
; __builtin__int:
;     return 0

; //========================================================================
; // returns default char value
; // char char ();
; __builtin__char:
;     return '0'

; //========================================================================
; // converts float to int
; // int floatToInt (float);
; __builtin__floatToInt__float:
;     stackget val 0
;     ftoi res val
;     return res

; //========================================================================
; // parses an int from a given char[]
; // int stringToInt (char[] str);
; str : [rbp + 16]
__builtin__stringToInt__char__1:
        ; function setup
        push    rbp
        mov     rbp, rsp

        mov     rdi, qword [rbp+16]
        call    atoi
        ; value stored in rax

        pop rbp
        ret

; //========================================================================
; // parses an int from a given char
; // int charToInt (char);
__builtin__charToInt__char:
        ; function setup
        push    rbp
        mov     rbp, rsp

        mov     rax, qword [rbp+16]
        mov     rdx, '0'
        sub     rax, rdx

        pop rbp
        ret

; //========================================================================
; // converts int to string
; // char[] string (int);
; __builtin__string__int:
;     stackget val 0
;     string res val
;     return res

; //========================================================================
; // converts float to string
; // char[] string (float);
; __builtin__string__float:
;     stackget val 0
;     string res val
;     return res

; //========================================================================

; // returns default value for array and object (null)
; // null null ();
; __builtin__null:
;     return __null

; //========================================================================



; ========================================================================

section .data
__builtin__neg: dq -1.0
section .text; ========================================================================
; ### COMPILED CODE ######################################################
; ========================================================================

_start:
main:
         ; Main Header:
         push rbp
         mov rbp, rsp
         sub rsp, 256
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         ; [rbp - 8] - char[] line (<unset-scope-name>)
         ; [rbp - 16] - Vector<:char[]:> lines (<unset-scope-name>)
         ; [rbp - 24] - Vector<:Sensor:> sensors (<unset-scope-name>)
         ; [rbp - 32] - int l (<unset-scope-name>)
         ; [rbp - 40] - Vector<:char[]:> tokens (<unset-scope-name>)
         ; [rbp - 48] - char[] x0_token (<unset-scope-name>)
         ; [rbp - 56] - char[] x0_str (<unset-scope-name>)
         ; [rbp - 64] - int x0 (<unset-scope-name>)
         ; [rbp - 72] - char[] y0_token (<unset-scope-name>)
         ; [rbp - 80] - char[] y0_str (<unset-scope-name>)
         ; [rbp - 88] - int y0 (<unset-scope-name>)
         ; [rbp - 96] - char[] x1_token (<unset-scope-name>)
         ; [rbp - 104] - char[] x1_str (<unset-scope-name>)
         ; [rbp - 112] - int x1 (<unset-scope-name>)
         ; [rbp - 120] - char[] y1_token (<unset-scope-name>)
         ; [rbp - 128] - char[] y1_str (<unset-scope-name>)
         ; [rbp - 136] - int y1 (<unset-scope-name>)
         ; [rbp - 144] - int minx (<unset-scope-name>)
         ; [rbp - 152] - int maxx (<unset-scope-name>)
         ; [rbp - 160] - int miny (<unset-scope-name>)
         ; [rbp - 168] - int maxy (<unset-scope-name>)
         ; [rbp - 176] - int i (<unset-scope-name>)
         ; [rbp - 184] - Sensor sensor (<unset-scope-name>)
         ; [rbp - 192] - Vector<:Vector<:char:>:> board (<unset-scope-name>)
         ; [rbp - 200] - int important_row (<unset-scope-name>)
         ; [rbp - 208] - int j (<unset-scope-name>)
         ; [rbp - 216] - int i (<unset-scope-name>)
         ; [rbp - 224] - Sensor sensor (<unset-scope-name>)
         ; [rbp - 232] - int j (<unset-scope-name>)
         ; [rbp - 240] - int num_beaconless (<unset-scope-name>)
         ; [rbp - 248] - int j (<unset-scope-name>)

         ; Body
; ========================================================================
         ; Class Template - 
            ; Instances:
      ; ==================================================================
               ; Class Declaration - __main____Vector__char__1 inherits __builtin____main__Object
                  ; Class data
                  section .data
                     ; Dispatch Table - this might need to be a malloc**
                     .__dtable____main____Vector__char__1:
                     ; Dispatch Table Entries
                     dq .__method____main____Vector__char__1____pushBack__char__1 ; 0
                     dq .__method____main____Vector__char__1____popBack ; 1
                     dq .__method____main____Vector__char__1____clear ; 2
                     dq .__method____main____Vector__char__1____get__int ; 3
                     dq .__method____main____Vector__char__1____set__int__char__1 ; 4
                  section .text
         ;---------------------------------------------------------------
                  ; Field - char[][] Vector<:char[]:>::data
                  section .data
                  .__field____main____Vector__char__1____data: dq 1
                  section .text
         ;---------------------------------------------------------------
         ;---------------------------------------------------------------
                  ; Field - int Vector<:char[]:>::size
                  section .data
                  .__field____main____Vector__char__1____size: dq 2
                  section .text
         ;---------------------------------------------------------------
         ;---------------------------------------------------------------
                  ; Field - int Vector<:char[]:>::capacity
                  section .data
                  .__field____main____Vector__char__1____capacity: dq 3
                  section .text
         ;---------------------------------------------------------------
               ; skip over class methods
               jmp .__endclass____main____Vector__char__1
         ;---------------------------------------------------------------
                  ; Constructor Declaration - Vector<:char[]:>::Vector() -> Vector<:char[]:>
                  jmp .__end__ctor____main____Vector__char__1____Vector
                  .__ctor____main____Vector__char__1____Vector:
                  ; Function Header:
                     ; Setup stack frame
                        push rbp
                        mov rbp, rsp
                        ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
                           sub rsp, 16 ; space for local variables (16-byte aligned)
                           ; [rbp - 8] - this - Reference to 'this' object instance
                     ; Creating Class Instance
                        mov rdi, 32 ; [dtable, field0, field1, ..., fieldN] each 8 bytes
                        call malloc
                        mov qword [rbp - 8], rax ; save class instance as 'this'
                        ; Add Dispatch Table
                        mov rax, qword [rbp - 8] ; this
                        mov qword [rax + 0], .__dtable____main____Vector__char__1 ; this[0] = &dtable
                     ; Parameters
                  ; Body
            ;------------------------------------------------------------
                     ; Code Block
                        ; Assignment - '='
                           ; RHS
                              ; Int Literal
                                 mov rax, 10
                                 push rax
                           ; LHS
                              ; Member Accessor Assignment
                                 ; LHS
                                    ; This keyword
                                       push qword [rbp - 8] ; __this
                                 ; RHS
                                    push qword [.__field____main____Vector__char__1____capacity] ; 
                                 pop rdi ; rhs
                                 pop rbx ; lhs
                           pop rdx ; rhs value
                           mov qword [rbx + 8*rdi], rdx
                           push rdx
                        ; Statement results can be ignored
                        pop rdx
                        ; Assignment - '='
                           ; RHS
                              ; Int Literal
                                 mov rax, 0
                                 push rax
                           ; LHS
                              ; Member Accessor Assignment
                                 ; LHS
                                    ; This keyword
                                       push qword [rbp - 8] ; __this
                                 ; RHS
                                    push qword [.__field____main____Vector__char__1____size] ; 
                                 pop rdi ; rhs
                                 pop rbx ; lhs
                           pop rdx ; rhs value
                           mov qword [rbx + 8*rdi], rdx
                           push rdx
                        ; Statement results can be ignored
                        pop rdx
                        ; Assignment - '='
                           ; RHS
                              ; Array Allocator
                                 ; Member Accessor
                                    ; LHS
                                       ; This keyword
                                          push qword [rbp - 8] ; __this
                                    ; RHS
                                       push qword [.__field____main____Vector__char__1____capacity] ; stored index associated with field that is being accessed
                                    pop rdx ; rhs
                                    pop rax ; lhs
                                    push qword [rax + 8*rdx] ; lhs.rhs
                                 pop rdx ; num elements for dimension[0]
                                 imul rdx, 8 ; 8 bytes per element
                                 mov rdi, rdx ; num bytes to allocate
                                 call malloc ; allocates edi bytes on heap and stores pointer in rax
                                 push rax ; __ptr
                           ; LHS
                              ; Member Accessor Assignment
                                 ; LHS
                                    ; This keyword
                                       push qword [rbp - 8] ; __this
                                 ; RHS
                                    push qword [.__field____main____Vector__char__1____data] ; 
                                 pop rdi ; rhs
                                 pop rbx ; lhs
                           pop rdx ; rhs value
                           mov qword [rbx + 8*rdi], rdx
                           push rdx
                        ; Statement results can be ignored
                        pop rdx
            ;------------------------------------------------------------
                  mov rax, qword [rbp - 8] ; __this
                  ; Function Epilogue
                  mov rsp, rbp ; remove local vars + unpopped pushes
                  pop rbp
                  ret
               .__end__ctor____main____Vector__char__1____Vector:
               ; End Constructor Declaration - __ctor____main____Vector__char__1____Vector
      ;------------------------------------------------------------------

      ;------------------------------------------------------------------
               ; Constructor Declaration - Vector<:char[]:>::Vector(int) -> Vector<:char[]:>
               jmp .__end__ctor____main____Vector__char__1____Vector__int
               .__ctor____main____Vector__char__1____Vector__int:
               ; Function Header:
                  ; Setup stack frame
                     push rbp
                     mov rbp, rsp
                     ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
                        sub rsp, 16 ; space for local variables (16-byte aligned)
                        ; [rbp - 8] - this - Reference to 'this' object instance
                  ; Creating Class Instance
                     mov rdi, 32 ; [dtable, field0, field1, ..., fieldN] each 8 bytes
                     call malloc
                     mov qword [rbp - 8], rax ; save class instance as 'this'
                     ; Add Dispatch Table
                     mov rax, qword [rbp - 8] ; this
                     mov qword [rax + 0], .__dtable____main____Vector__char__1 ; this[0] = &dtable
                  ; Parameters
                     ; Param: size [rbp + 16]
               ; Body
         ;---------------------------------------------------------------
                  ; Code Block
                     ; Assignment - '='
                        ; RHS
                           ; Addition - int, int
                              ; LHS
                                 ; Identifier - int size
                                    push qword [rbp - -16]
                              ; RHS
                                 ; Int Literal
                                    mov rax, 10
                                    push rax
                              pop rdx ; rhs
                              pop rax ; lhs
                              add rax, rdx
                              push rax
                        ; LHS
                           ; Member Accessor Assignment
                              ; LHS
                                 ; This keyword
                                    push qword [rbp - 8] ; __this
                              ; RHS
                                 push qword [.__field____main____Vector__char__1____capacity] ; 
                              pop rdi ; rhs
                              pop rbx ; lhs
                        pop rdx ; rhs value
                        mov qword [rbx + 8*rdi], rdx
                        push rdx
                     ; Statement results can be ignored
                     pop rdx
                     ; Assignment - '='
                        ; RHS
                           ; Identifier - int size
                              push qword [rbp - -16]
                        ; LHS
                           ; Member Accessor Assignment
                              ; LHS
                                 ; This keyword
                                    push qword [rbp - 8] ; __this
                              ; RHS
                                 push qword [.__field____main____Vector__char__1____size] ; 
                              pop rdi ; rhs
                              pop rbx ; lhs
                        pop rdx ; rhs value
                        mov qword [rbx + 8*rdi], rdx
                        push rdx
                     ; Statement results can be ignored
                     pop rdx
                     ; Assignment - '='
                        ; RHS
                           ; Array Allocator
                              ; Member Accessor
                                 ; LHS
                                    ; This keyword
                                       push qword [rbp - 8] ; __this
                                 ; RHS
                                    push qword [.__field____main____Vector__char__1____capacity] ; stored index associated with field that is being accessed
                                 pop rdx ; rhs
                                 pop rax ; lhs
                                 push qword [rax + 8*rdx] ; lhs.rhs
                              pop rdx ; num elements for dimension[0]
                              imul rdx, 8 ; 8 bytes per element
                              mov rdi, rdx ; num bytes to allocate
                              call malloc ; allocates edi bytes on heap and stores pointer in rax
                              push rax ; __ptr
                        ; LHS
                           ; Member Accessor Assignment
                              ; LHS
                                 ; This keyword
                                    push qword [rbp - 8] ; __this
                              ; RHS
                                 push qword [.__field____main____Vector__char__1____data] ; 
                              pop rdi ; rhs
                              pop rbx ; lhs
                        pop rdx ; rhs value
                        mov qword [rbx + 8*rdi], rdx
                        push rdx
                     ; Statement results can be ignored
                     pop rdx
         ;---------------------------------------------------------------
               mov rax, qword [rbp - 8] ; __this
               ; Function Epilogue
               mov rsp, rbp ; remove local vars + unpopped pushes
               pop rbp
               ret
            .__end__ctor____main____Vector__char__1____Vector__int:
            ; End Constructor Declaration - __ctor____main____Vector__char__1____Vector__int
   ;---------------------------------------------------------------------

   ;---------------------------------------------------------------------
            ; Method Declaration - Vector<:char[]:>::pushBack(char[]) -> void
            jmp .__end__method____main____Vector__char__1____pushBack__char__1
            .__method____main____Vector__char__1____pushBack__char__1:
               ; Function Header:
               ; Setup stack frame
                  push rbp
                  mov rbp, rsp
                  ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
                     sub rsp, 32 ; space for local variables (16-byte aligned)
                     ; [rbp - 8] - this - Reference to 'this' object instance
                     mov rdx, qword [rbp + 16] ; param passed 'this'
                     mov qword [rbp - 8], rdx ; save this to a local
                     ; [rbp - 16] - char[][] nData (<unset-scope-name>)
                     ; [rbp - 24] - int i (<unset-scope-name>)
               ; Parameters
                  ; Param: val [rbp + 24] (__main____Vector__char__1__pushBack__val)
               ; Body
         ;---------------------------------------------------------------
                  ; Code Block
            ;------------------------------------------------------------
                     ; If-Statement
                        ; Condition
                           ; Greater Than or Equal to
                              ; LHS
                                 ; Addition - int, int
                                    ; LHS
                                       ; Member Accessor
                                          ; LHS
                                             ; This keyword
                                                push qword [rbp - 8] ; __this
                                          ; RHS
                                             push qword [.__field____main____Vector__char__1____size] ; stored index associated with field that is being accessed
                                          pop rdx ; rhs
                                          pop rax ; lhs
                                          push qword [rax + 8*rdx] ; lhs.rhs
                                    ; RHS
                                       ; Int Literal
                                          mov rax, 1
                                          push rax
                                    pop rdx ; rhs
                                    pop rax ; lhs
                                    add rax, rdx
                                    push rax
                              ; RHS
                                 ; Member Accessor
                                    ; LHS
                                       ; This keyword
                                          push qword [rbp - 8] ; __this
                                    ; RHS
                                       push qword [.__field____main____Vector__char__1____capacity] ; stored index associated with field that is being accessed
                                    pop rdx ; rhs
                                    pop rax ; lhs
                                    push qword [rax + 8*rdx] ; lhs.rhs
                              pop rdx ; rhs
                              pop rax ; lhs
                              cmp rax, rdx
                              setge al
                              movzx eax, al
                              push rax
                           pop rdx ; __cond
                           cmp rdx, 0 ; ensure condition is true
                           je .__endif__3 ; jump to end
                        ; Body
                  ;------------------------------------------------------
                           ; Code Block
                              ; Assignment - '='
                                 ; RHS
                                    ; Multiplication - int, int
                                       ; LHS
                                          ; Member Accessor
                                             ; LHS
                                                ; This keyword
                                                   push qword [rbp - 8] ; __this
                                             ; RHS
                                                push qword [.__field____main____Vector__char__1____capacity] ; stored index associated with field that is being accessed
                                             pop rdx ; rhs
                                             pop rax ; lhs
                                             push qword [rax + 8*rdx] ; lhs.rhs
                                       ; RHS
                                          ; Int Literal
                                             mov rax, 2
                                             push rax
                                       pop rdx
                                       pop rax
                                       imul rax, rdx
                                       push rax
                                 ; LHS
                                    ; Member Accessor Assignment
                                       ; LHS
                                          ; This keyword
                                             push qword [rbp - 8] ; __this
                                       ; RHS
                                          push qword [.__field____main____Vector__char__1____capacity] ; 
                                       pop rdi ; rhs
                                       pop rbx ; lhs
                                 pop rdx ; rhs value
                                 mov qword [rbx + 8*rdi], rdx
                                 push rdx
                              ; Statement results can be ignored
                              pop rdx
                              ; Assignment - '='
                                 ; RHS
                                    ; Array Allocator
                                       ; Member Accessor
                                          ; LHS
                                             ; This keyword
                                                push qword [rbp - 8] ; __this
                                          ; RHS
                                             push qword [.__field____main____Vector__char__1____capacity] ; stored index associated with field that is being accessed
                                          pop rdx ; rhs
                                          pop rax ; lhs
                                          push qword [rax + 8*rdx] ; lhs.rhs
                                       pop rdx ; num elements for dimension[0]
                                       imul rdx, 8 ; 8 bytes per element
                                       mov rdi, rdx ; num bytes to allocate
                                       call malloc ; allocates edi bytes on heap and stores pointer in rax
                                       push rax ; __ptr
                                 ; LHS
                                    ; Variable Declaration - nData
                                       mov rax, qword [rbp - 16]  ; __main____Vector__char__1__pushBack__block__2__if__3__block__4__nData
                                 pop rdx ; rhs value
                                 mov qword [rbp - 16], rdx
                                 push rdx
                              ; Statement results can be ignored
                              pop rdx
                     ;---------------------------------------------------
                              ; For-Loop
                              ; Init
                                 ; Assignment - '='
                                    ; RHS
                                       ; Int Literal
                                          mov rax, 0
                                          push rax
                                    ; LHS
                                       ; Variable Declaration - i
                                          mov rax, qword [rbp - 24]  ; __main____Vector__char__1__pushBack__block__2__if__3__block__4__for__5__i
                                    pop rdx ; rhs value
                                    mov qword [rbp - 24], rdx
                                    push rdx
                                 ; Loop init result can be discarded
                                 pop rax
                              jmp .__forcond__5
.__for__5:
                                 ; Update
                                    ; Pre-Increment - int
                                       ; RHS
                                          ; Identifier - int i
                                             push qword [rbp - 24]
                                       pop rdx
                                       add qword [rbp - 24], 1
                                       mov rax, qword [rbp - 24]
                                       push rax ; push result
                                    ; Loop update result can be discarded
                                    pop rax
.__forcond__5:
                                 ; Condition
                                    ; Less Than
                                       ; LHS
                                          ; Identifier - int i
                                             push qword [rbp - 24]
                                       ; RHS
                                          ; Member Accessor
                                             ; LHS
                                                ; This keyword
                                                   push qword [rbp - 8] ; __this
                                             ; RHS
                                                push qword [.__field____main____Vector__char__1____size] ; stored index associated with field that is being accessed
                                             pop rdx ; rhs
                                             pop rax ; lhs
                                             push qword [rax + 8*rdx] ; lhs.rhs
                                       pop rdx ; rhs
                                       pop rax ; lhs
                                       cmp rax, rdx
                                       setl al
                                       movzx eax, al
                                       push rax
                                    pop rax ; __cond
                                    cmp rax, 0 ; __cond
                                    je .__endfor__5
                                 ; Body
                           ;---------------------------------------------
                                    ; Code Block
                                       ; Assignment - '='
                                          ; RHS
                                             ; Subscript
                                                ; LHS
                                                   ; Member Accessor
                                                      ; LHS
                                                         ; This keyword
                                                            push qword [rbp - 8] ; __this
                                                      ; RHS
                                                         push qword [.__field____main____Vector__char__1____data] ; stored index associated with field that is being accessed
                                                      pop rdx ; rhs
                                                      pop rax ; lhs
                                                      push qword [rax + 8*rdx] ; lhs.rhs
                                                ; OFFSET
                                                   ; Identifier - int i
                                                      push qword [rbp - 24]
                                                pop rdx ; __offset
                                                pop rax ; __pointer
                                                push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
                                          ; LHS
                                             ; Subscript assignment
                                                ; LHS
                                                   ; Identifier - char[][] nData
                                                      push qword [rbp - 16]
                                                ; OFFSET
                                                   ; Identifier - int i
                                                      push qword [rbp - 24]
                                                pop rdi ; __offset
                                                pop rbx ; __pointer
                                          pop rdx ; rhs value
                                          mov qword [rbx + 8*rdi], rdx
                                          push rdx
                                       ; Statement results can be ignored
                                       pop rdx
                           ;---------------------------------------------
                                 ; Repeat
jmp .__for__5
                                 ; End of For
.__endfor__5:
                     ;---------------------------------------------------
                              ; Free Operator
                                 ; RHS
                                    ; Member Accessor
                                       ; LHS
                                          ; This keyword
                                             push qword [rbp - 8] ; __this
                                       ; RHS
                                          push qword [.__field____main____Vector__char__1____data] ; stored index associated with field that is being accessed
                                       pop rdx ; rhs
                                       pop rax ; lhs
                                       push qword [rax + 8*rdx] ; lhs.rhs
                                 ; Free pointer
                                 pop rdi   ; pointer
                                 call free ; free the pointer
                                 push rax  ; undefined return value
                              ; Statement results can be ignored
                              pop rdx
                              ; Assignment - '='
                                 ; RHS
                                    ; Identifier - char[][] nData
                                       push qword [rbp - 16]
                                 ; LHS
                                    ; Member Accessor Assignment
                                       ; LHS
                                          ; This keyword
                                             push qword [rbp - 8] ; __this
                                       ; RHS
                                          push qword [.__field____main____Vector__char__1____data] ; 
                                       pop rdi ; rhs
                                       pop rbx ; lhs
                                 pop rdx ; rhs value
                                 mov qword [rbx + 8*rdi], rdx
                                 push rdx
                              ; Statement results can be ignored
                              pop rdx
                  ;------------------------------------------------------
                        jmp .__endif__3 ; jump to end of condition chain
                        ; End of if
.__endif__3:
            ;------------------------------------------------------------
                     ; Assignment - '='
                        ; RHS
                           ; Identifier - char[] val
                              push qword [rbp - -24]
                        ; LHS
                           ; Subscript assignment
                              ; LHS
                                 ; Member Accessor
                                    ; LHS
                                       ; This keyword
                                          push qword [rbp - 8] ; __this
                                    ; RHS
                                       push qword [.__field____main____Vector__char__1____data] ; stored index associated with field that is being accessed
                                    pop rdx ; rhs
                                    pop rax ; lhs
                                    push qword [rax + 8*rdx] ; lhs.rhs
                              ; OFFSET
                                 ; Member Accessor
                                    ; LHS
                                       ; This keyword
                                          push qword [rbp - 8] ; __this
                                    ; RHS
                                       push qword [.__field____main____Vector__char__1____size] ; stored index associated with field that is being accessed
                                    pop rdx ; rhs
                                    pop rax ; lhs
                                    push qword [rax + 8*rdx] ; lhs.rhs
                              pop rdi ; __offset
                              pop rbx ; __pointer
                        pop rdx ; rhs value
                        mov qword [rbx + 8*rdi], rdx
                        push rdx
                     ; Statement results can be ignored
                     pop rdx
                     ; Pre-Increment - int
                        ; RHS
                           ; Member Accessor
                              ; LHS
                                 ; This keyword
                                    push qword [rbp - 8] ; __this
                              ; RHS
                                 push qword [.__field____main____Vector__char__1____size] ; stored index associated with field that is being accessed
                              pop rdx ; rhs
                              pop rax ; lhs
                              push qword [rax + 8*rdx] ; lhs.rhs
                        pop rdx
                        ; LHS
                           ; Member Accessor Assignment
                              ; LHS
                                 ; This keyword
                                    push qword [rbp - 8] ; __this
                              ; RHS
                                 push qword [.__field____main____Vector__char__1____size] ; size
                              pop rdi ; rhs
                              pop rbx ; lhs
                              mov rax, qword [rbx + 8*rdi]
                              add rax, 1
                              mov qword [rbx + 8*rdi], rax
                        push rax ; push result
                     ; Statement results can be ignored
                     pop rdx
         ;---------------------------------------------------------------
               ; Function Epilogue
               mov rsp, rbp ; remove local vars + unpopped pushes
               pop rbp
               ret
            .__end__method____main____Vector__char__1____pushBack__char__1:
            ; End Method Declaration - .__method____main____Vector__char__1____pushBack__char__1
   ;---------------------------------------------------------------------

   ;---------------------------------------------------------------------
            ; Method Declaration - Vector<:char[]:>::popBack() -> char[]
            jmp .__end__method____main____Vector__char__1____popBack
            .__method____main____Vector__char__1____popBack:
               ; Function Header:
               ; Setup stack frame
                  push rbp
                  mov rbp, rsp
                  ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
                     sub rsp, 16 ; space for local variables (16-byte aligned)
                     ; [rbp - 8] - this - Reference to 'this' object instance
                     mov rdx, qword [rbp + 16] ; param passed 'this'
                     mov qword [rbp - 8], rdx ; save this to a local
               ; Parameters
               ; Body
         ;---------------------------------------------------------------
                  ; Code Block
                     ; Return
                        ; Subscript
                           ; LHS
                              ; Member Accessor
                                 ; LHS
                                    ; This keyword
                                       push qword [rbp - 8] ; __this
                                 ; RHS
                                    push qword [.__field____main____Vector__char__1____data] ; stored index associated with field that is being accessed
                                 pop rdx ; rhs
                                 pop rax ; lhs
                                 push qword [rax + 8*rdx] ; lhs.rhs
                           ; OFFSET
                              ; Pre-Decrement - int
                                 ; RHS
                                    ; Member Accessor
                                       ; LHS
                                          ; This keyword
                                             push qword [rbp - 8] ; __this
                                       ; RHS
                                          push qword [.__field____main____Vector__char__1____size] ; stored index associated with field that is being accessed
                                       pop rdx ; rhs
                                       pop rax ; lhs
                                       push qword [rax + 8*rdx] ; lhs.rhs
                                 pop rdx
                                 ; LHS
                                    ; Member Accessor Assignment
                                       ; LHS
                                          ; This keyword
                                             push qword [rbp - 8] ; __this
                                       ; RHS
                                          push qword [.__field____main____Vector__char__1____size] ; size
                                       pop rdi ; rhs
                                       pop rbx ; lhs
                                       mov rax, qword [rbx + 8*rdi]
                                       sub rax, 1
                                       mov qword [rbx + 8*rdi], rax
                                 push rax ; push result
                           pop rdx ; __offset
                           pop rax ; __pointer
                           push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
                        pop rax ; return value (char[])
                        ; Clean up stack and return
                        mov rsp, rbp ; remove local vars + unpopped pushes
                        pop rbp
                        ret
         ;---------------------------------------------------------------
               ; Function Epilogue
               mov rsp, rbp ; remove local vars + unpopped pushes
               pop rbp
               ret
            .__end__method____main____Vector__char__1____popBack:
            ; End Method Declaration - .__method____main____Vector__char__1____popBack
   ;---------------------------------------------------------------------

   ;---------------------------------------------------------------------
            ; Method Declaration - Vector<:char[]:>::clear() -> void
            jmp .__end__method____main____Vector__char__1____clear
            .__method____main____Vector__char__1____clear:
               ; Function Header:
               ; Setup stack frame
                  push rbp
                  mov rbp, rsp
                  ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
                     sub rsp, 16 ; space for local variables (16-byte aligned)
                     ; [rbp - 8] - this - Reference to 'this' object instance
                     mov rdx, qword [rbp + 16] ; param passed 'this'
                     mov qword [rbp - 8], rdx ; save this to a local
               ; Parameters
               ; Body
         ;---------------------------------------------------------------
                  ; Code Block
            ;------------------------------------------------------------
                     ; While-Loop
.__while__9:
                        ; Condition
                           ; Greater Than
                              ; LHS
                                 ; Member Accessor
                                    ; LHS
                                       ; This keyword
                                          push qword [rbp - 8] ; __this
                                    ; RHS
                                       push qword [.__field____main____Vector__char__1____size] ; stored index associated with field that is being accessed
                                    pop rdx ; rhs
                                    pop rax ; lhs
                                    push qword [rax + 8*rdx] ; lhs.rhs
                              ; RHS
                                 ; Int Literal
                                    mov rax, 0
                                    push rax
                              pop rdx ; rhs
                              pop rax ; lhs
                              cmp rax, rdx
                              setg al
                              movzx eax, al
                              push rax
                           pop rax ; __cond
                           cmp rax, 0 ; __cond
                           je .__endwhile__9
                        ; Body
                           ; Method Call - Vector<:char[]:>::popBack() -> char[]
                              ; Make space for 0 arg(s) and object parameter
                              sub rsp, 8
                              ; LHS
                                 ; This keyword
                                    push qword [rbp - 8] ; __this
                                 pop rax ; object parameter
                                 mov qword [rsp + 0], rax ; place as first parameter
                              ; RHS
                              ; Arguments
                              call .__method____main____Vector__char__1____popBack
                              ; Remove args
                              add rsp, 8
                              ; Push return value
                              push rax
                           ; Statement results can be ignored
                           pop rdx
                        jmp .__while__9
                        ; End of While
.__endwhile__9:
            ;------------------------------------------------------------
         ;---------------------------------------------------------------
               ; Function Epilogue
               mov rsp, rbp ; remove local vars + unpopped pushes
               pop rbp
               ret
            .__end__method____main____Vector__char__1____clear:
            ; End Method Declaration - .__method____main____Vector__char__1____clear
   ;---------------------------------------------------------------------

   ;---------------------------------------------------------------------
            ; Method Declaration - Vector<:char[]:>::get(int) -> char[]
            jmp .__end__method____main____Vector__char__1____get__int
            .__method____main____Vector__char__1____get__int:
               ; Function Header:
               ; Setup stack frame
                  push rbp
                  mov rbp, rsp
                  ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
                     sub rsp, 16 ; space for local variables (16-byte aligned)
                     ; [rbp - 8] - this - Reference to 'this' object instance
                     mov rdx, qword [rbp + 16] ; param passed 'this'
                     mov qword [rbp - 8], rdx ; save this to a local
               ; Parameters
                  ; Param: index [rbp + 24] (__main____Vector__char__1__get__index)
               ; Body
         ;---------------------------------------------------------------
                  ; Code Block
                     ; Return
                        ; Subscript
                           ; LHS
                              ; Member Accessor
                                 ; LHS
                                    ; This keyword
                                       push qword [rbp - 8] ; __this
                                 ; RHS
                                    push qword [.__field____main____Vector__char__1____data] ; stored index associated with field that is being accessed
                                 pop rdx ; rhs
                                 pop rax ; lhs
                                 push qword [rax + 8*rdx] ; lhs.rhs
                           ; OFFSET
                              ; Identifier - int index
                                 push qword [rbp - -24]
                           pop rdx ; __offset
                           pop rax ; __pointer
                           push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
                        pop rax ; return value (char[])
                        ; Clean up stack and return
                        mov rsp, rbp ; remove local vars + unpopped pushes
                        pop rbp
                        ret
         ;---------------------------------------------------------------
               ; Function Epilogue
               mov rsp, rbp ; remove local vars + unpopped pushes
               pop rbp
               ret
            .__end__method____main____Vector__char__1____get__int:
            ; End Method Declaration - .__method____main____Vector__char__1____get__int
   ;---------------------------------------------------------------------

   ;---------------------------------------------------------------------
            ; Method Declaration - Vector<:char[]:>::set(int, char[]) -> void
            jmp .__end__method____main____Vector__char__1____set__int__char__1
            .__method____main____Vector__char__1____set__int__char__1:
               ; Function Header:
               ; Setup stack frame
                  push rbp
                  mov rbp, rsp
                  ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
                     sub rsp, 16 ; space for local variables (16-byte aligned)
                     ; [rbp - 8] - this - Reference to 'this' object instance
                     mov rdx, qword [rbp + 16] ; param passed 'this'
                     mov qword [rbp - 8], rdx ; save this to a local
               ; Parameters
                  ; Param: index [rbp + 24] (__main____Vector__char__1__set__index)
                  ; Param: value [rbp + 32] (__main____Vector__char__1__set__value)
               ; Body
         ;---------------------------------------------------------------
                  ; Code Block
                     ; Assignment - '='
                        ; RHS
                           ; Identifier - char[] value
                              push qword [rbp - -32]
                        ; LHS
                           ; Subscript assignment
                              ; LHS
                                 ; Member Accessor
                                    ; LHS
                                       ; This keyword
                                          push qword [rbp - 8] ; __this
                                    ; RHS
                                       push qword [.__field____main____Vector__char__1____data] ; stored index associated with field that is being accessed
                                    pop rdx ; rhs
                                    pop rax ; lhs
                                    push qword [rax + 8*rdx] ; lhs.rhs
                              ; OFFSET
                                 ; Identifier - int index
                                    push qword [rbp - -24]
                              pop rdi ; __offset
                              pop rbx ; __pointer
                        pop rdx ; rhs value
                        mov qword [rbx + 8*rdi], rdx
                        push rdx
                     ; Statement results can be ignored
                     pop rdx
         ;---------------------------------------------------------------
               ; Function Epilogue
               mov rsp, rbp ; remove local vars + unpopped pushes
               pop rbp
               ret
            .__end__method____main____Vector__char__1____set__int__char__1:
            ; End Method Declaration - .__method____main____Vector__char__1____set__int__char__1
   ;---------------------------------------------------------------------

.__endclass____main____Vector__char__1:
         ; End Class Declaration - __main____Vector__char__1
; ========================================================================

; ========================================================================
         ; Class Declaration - __main____Vector__Sensor inherits __builtin____main__Object
            ; Class data
            section .data
               ; Dispatch Table - this might need to be a malloc**
               .__dtable____main____Vector__Sensor:
               ; Dispatch Table Entries
               dq .__method____main____Vector__Sensor____pushBack__Sensor ; 0
               dq .__method____main____Vector__Sensor____popBack ; 1
               dq .__method____main____Vector__Sensor____clear ; 2
               dq .__method____main____Vector__Sensor____get__int ; 3
               dq .__method____main____Vector__Sensor____set__int__Sensor ; 4
            section .text
   ;---------------------------------------------------------------------
            ; Field - Sensor[] Vector<:Sensor:>::data
            section .data
            .__field____main____Vector__Sensor____data: dq 1
            section .text
   ;---------------------------------------------------------------------
   ;---------------------------------------------------------------------
            ; Field - int Vector<:Sensor:>::size
            section .data
            .__field____main____Vector__Sensor____size: dq 2
            section .text
   ;---------------------------------------------------------------------
   ;---------------------------------------------------------------------
            ; Field - int Vector<:Sensor:>::capacity
            section .data
            .__field____main____Vector__Sensor____capacity: dq 3
            section .text
   ;---------------------------------------------------------------------
         ; skip over class methods
         jmp .__endclass____main____Vector__Sensor
   ;---------------------------------------------------------------------
            ; Constructor Declaration - Vector<:Sensor:>::Vector() -> Vector<:Sensor:>
            jmp .__end__ctor____main____Vector__Sensor____Vector
            .__ctor____main____Vector__Sensor____Vector:
            ; Function Header:
               ; Setup stack frame
                  push rbp
                  mov rbp, rsp
                  ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
                     sub rsp, 16 ; space for local variables (16-byte aligned)
                     ; [rbp - 8] - this - Reference to 'this' object instance
               ; Creating Class Instance
                  mov rdi, 32 ; [dtable, field0, field1, ..., fieldN] each 8 bytes
                  call malloc
                  mov qword [rbp - 8], rax ; save class instance as 'this'
                  ; Add Dispatch Table
                  mov rax, qword [rbp - 8] ; this
                  mov qword [rax + 0], .__dtable____main____Vector__Sensor ; this[0] = &dtable
               ; Parameters
            ; Body
      ;------------------------------------------------------------------
               ; Code Block
                  ; Assignment - '='
                     ; RHS
                        ; Int Literal
                           mov rax, 10
                           push rax
                     ; LHS
                        ; Member Accessor Assignment
                           ; LHS
                              ; This keyword
                                 push qword [rbp - 8] ; __this
                           ; RHS
                              push qword [.__field____main____Vector__Sensor____capacity] ; 
                           pop rdi ; rhs
                           pop rbx ; lhs
                     pop rdx ; rhs value
                     mov qword [rbx + 8*rdi], rdx
                     push rdx
                  ; Statement results can be ignored
                  pop rdx
                  ; Assignment - '='
                     ; RHS
                        ; Int Literal
                           mov rax, 0
                           push rax
                     ; LHS
                        ; Member Accessor Assignment
                           ; LHS
                              ; This keyword
                                 push qword [rbp - 8] ; __this
                           ; RHS
                              push qword [.__field____main____Vector__Sensor____size] ; 
                           pop rdi ; rhs
                           pop rbx ; lhs
                     pop rdx ; rhs value
                     mov qword [rbx + 8*rdi], rdx
                     push rdx
                  ; Statement results can be ignored
                  pop rdx
                  ; Assignment - '='
                     ; RHS
                        ; Array Allocator
                           ; Member Accessor
                              ; LHS
                                 ; This keyword
                                    push qword [rbp - 8] ; __this
                              ; RHS
                                 push qword [.__field____main____Vector__Sensor____capacity] ; stored index associated with field that is being accessed
                              pop rdx ; rhs
                              pop rax ; lhs
                              push qword [rax + 8*rdx] ; lhs.rhs
                           pop rdx ; num elements for dimension[0]
                           imul rdx, 8 ; 8 bytes per element
                           mov rdi, rdx ; num bytes to allocate
                           call malloc ; allocates edi bytes on heap and stores pointer in rax
                           push rax ; __ptr
                     ; LHS
                        ; Member Accessor Assignment
                           ; LHS
                              ; This keyword
                                 push qword [rbp - 8] ; __this
                           ; RHS
                              push qword [.__field____main____Vector__Sensor____data] ; 
                           pop rdi ; rhs
                           pop rbx ; lhs
                     pop rdx ; rhs value
                     mov qword [rbx + 8*rdi], rdx
                     push rdx
                  ; Statement results can be ignored
                  pop rdx
      ;------------------------------------------------------------------
            mov rax, qword [rbp - 8] ; __this
            ; Function Epilogue
            mov rsp, rbp ; remove local vars + unpopped pushes
            pop rbp
            ret
         .__end__ctor____main____Vector__Sensor____Vector:
         ; End Constructor Declaration - __ctor____main____Vector__Sensor____Vector
;------------------------------------------------------------------------

;------------------------------------------------------------------------
         ; Constructor Declaration - Vector<:Sensor:>::Vector(int) -> Vector<:Sensor:>
         jmp .__end__ctor____main____Vector__Sensor____Vector__int
         .__ctor____main____Vector__Sensor____Vector__int:
         ; Function Header:
            ; Setup stack frame
               push rbp
               mov rbp, rsp
               ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
                  sub rsp, 16 ; space for local variables (16-byte aligned)
                  ; [rbp - 8] - this - Reference to 'this' object instance
            ; Creating Class Instance
               mov rdi, 32 ; [dtable, field0, field1, ..., fieldN] each 8 bytes
               call malloc
               mov qword [rbp - 8], rax ; save class instance as 'this'
               ; Add Dispatch Table
               mov rax, qword [rbp - 8] ; this
               mov qword [rax + 0], .__dtable____main____Vector__Sensor ; this[0] = &dtable
            ; Parameters
               ; Param: size [rbp + 16]
         ; Body
   ;---------------------------------------------------------------------
            ; Code Block
               ; Assignment - '='
                  ; RHS
                     ; Addition - int, int
                        ; LHS
                           ; Identifier - int size
                              push qword [rbp - -16]
                        ; RHS
                           ; Int Literal
                              mov rax, 10
                              push rax
                        pop rdx ; rhs
                        pop rax ; lhs
                        add rax, rdx
                        push rax
                  ; LHS
                     ; Member Accessor Assignment
                        ; LHS
                           ; This keyword
                              push qword [rbp - 8] ; __this
                        ; RHS
                           push qword [.__field____main____Vector__Sensor____capacity] ; 
                        pop rdi ; rhs
                        pop rbx ; lhs
                  pop rdx ; rhs value
                  mov qword [rbx + 8*rdi], rdx
                  push rdx
               ; Statement results can be ignored
               pop rdx
               ; Assignment - '='
                  ; RHS
                     ; Identifier - int size
                        push qword [rbp - -16]
                  ; LHS
                     ; Member Accessor Assignment
                        ; LHS
                           ; This keyword
                              push qword [rbp - 8] ; __this
                        ; RHS
                           push qword [.__field____main____Vector__Sensor____size] ; 
                        pop rdi ; rhs
                        pop rbx ; lhs
                  pop rdx ; rhs value
                  mov qword [rbx + 8*rdi], rdx
                  push rdx
               ; Statement results can be ignored
               pop rdx
               ; Assignment - '='
                  ; RHS
                     ; Array Allocator
                        ; Member Accessor
                           ; LHS
                              ; This keyword
                                 push qword [rbp - 8] ; __this
                           ; RHS
                              push qword [.__field____main____Vector__Sensor____capacity] ; stored index associated with field that is being accessed
                           pop rdx ; rhs
                           pop rax ; lhs
                           push qword [rax + 8*rdx] ; lhs.rhs
                        pop rdx ; num elements for dimension[0]
                        imul rdx, 8 ; 8 bytes per element
                        mov rdi, rdx ; num bytes to allocate
                        call malloc ; allocates edi bytes on heap and stores pointer in rax
                        push rax ; __ptr
                  ; LHS
                     ; Member Accessor Assignment
                        ; LHS
                           ; This keyword
                              push qword [rbp - 8] ; __this
                        ; RHS
                           push qword [.__field____main____Vector__Sensor____data] ; 
                        pop rdi ; rhs
                        pop rbx ; lhs
                  pop rdx ; rhs value
                  mov qword [rbx + 8*rdi], rdx
                  push rdx
               ; Statement results can be ignored
               pop rdx
   ;---------------------------------------------------------------------
         mov rax, qword [rbp - 8] ; __this
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__ctor____main____Vector__Sensor____Vector__int:
         ; End Constructor Declaration - __ctor____main____Vector__Sensor____Vector__int
;---------------------------------------------------------------------------

;---------------------------------------------------------------------------
         ; Method Declaration - Vector<:Sensor:>::pushBack(Sensor) -> void
         jmp .__end__method____main____Vector__Sensor____pushBack__Sensor
         .__method____main____Vector__Sensor____pushBack__Sensor:
         ; Function Header:
         ; Setup stack frame
            push rbp
            mov rbp, rsp
            ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
               sub rsp, 32 ; space for local variables (16-byte aligned)
               ; [rbp - 8] - this - Reference to 'this' object instance
               mov rdx, qword [rbp + 16] ; param passed 'this'
               mov qword [rbp - 8], rdx ; save this to a local
               ; [rbp - 16] - Sensor[] nData (<unset-scope-name>)
               ; [rbp - 24] - int i (<unset-scope-name>)
         ; Parameters
            ; Param: val [rbp + 24] (__main____Vector__Sensor__pushBack__val)
         ; Body
   ;---------------------------------------------------------------------
            ; Code Block
      ;------------------------------------------------------------------
               ; If-Statement
                  ; Condition
                     ; Greater Than or Equal to
                        ; LHS
                           ; Addition - int, int
                              ; LHS
                                 ; Member Accessor
                                    ; LHS
                                       ; This keyword
                                          push qword [rbp - 8] ; __this
                                    ; RHS
                                       push qword [.__field____main____Vector__Sensor____size] ; stored index associated with field that is being accessed
                                    pop rdx ; rhs
                                    pop rax ; lhs
                                    push qword [rax + 8*rdx] ; lhs.rhs
                              ; RHS
                                 ; Int Literal
                                    mov rax, 1
                                    push rax
                              pop rdx ; rhs
                              pop rax ; lhs
                              add rax, rdx
                              push rax
                        ; RHS
                           ; Member Accessor
                              ; LHS
                                 ; This keyword
                                    push qword [rbp - 8] ; __this
                              ; RHS
                                 push qword [.__field____main____Vector__Sensor____capacity] ; stored index associated with field that is being accessed
                              pop rdx ; rhs
                              pop rax ; lhs
                              push qword [rax + 8*rdx] ; lhs.rhs
                        pop rdx ; rhs
                        pop rax ; lhs
                        cmp rax, rdx
                        setge al
                        movzx eax, al
                        push rax
                     pop rdx ; __cond
                     cmp rdx, 0 ; ensure condition is true
                     je .__endif__15 ; jump to end
                  ; Body
            ;------------------------------------------------------------
                     ; Code Block
                        ; Assignment - '='
                           ; RHS
                              ; Multiplication - int, int
                                 ; LHS
                                    ; Member Accessor
                                       ; LHS
                                          ; This keyword
                                             push qword [rbp - 8] ; __this
                                       ; RHS
                                          push qword [.__field____main____Vector__Sensor____capacity] ; stored index associated with field that is being accessed
                                       pop rdx ; rhs
                                       pop rax ; lhs
                                       push qword [rax + 8*rdx] ; lhs.rhs
                                 ; RHS
                                    ; Int Literal
                                       mov rax, 2
                                       push rax
                                 pop rdx
                                 pop rax
                                 imul rax, rdx
                                 push rax
                           ; LHS
                              ; Member Accessor Assignment
                                 ; LHS
                                    ; This keyword
                                       push qword [rbp - 8] ; __this
                                 ; RHS
                                    push qword [.__field____main____Vector__Sensor____capacity] ; 
                                 pop rdi ; rhs
                                 pop rbx ; lhs
                           pop rdx ; rhs value
                           mov qword [rbx + 8*rdi], rdx
                           push rdx
                        ; Statement results can be ignored
                        pop rdx
                        ; Assignment - '='
                           ; RHS
                              ; Array Allocator
                                 ; Member Accessor
                                    ; LHS
                                       ; This keyword
                                          push qword [rbp - 8] ; __this
                                    ; RHS
                                       push qword [.__field____main____Vector__Sensor____capacity] ; stored index associated with field that is being accessed
                                    pop rdx ; rhs
                                    pop rax ; lhs
                                    push qword [rax + 8*rdx] ; lhs.rhs
                                 pop rdx ; num elements for dimension[0]
                                 imul rdx, 8 ; 8 bytes per element
                                 mov rdi, rdx ; num bytes to allocate
                                 call malloc ; allocates edi bytes on heap and stores pointer in rax
                                 push rax ; __ptr
                           ; LHS
                              ; Variable Declaration - nData
                                 mov rax, qword [rbp - 16]  ; __main____Vector__Sensor__pushBack__block__14__if__15__block__16__nData
                           pop rdx ; rhs value
                           mov qword [rbp - 16], rdx
                           push rdx
                        ; Statement results can be ignored
                        pop rdx
               ;---------------------------------------------------------
                        ; For-Loop
                        ; Init
                           ; Assignment - '='
                              ; RHS
                                 ; Int Literal
                                    mov rax, 0
                                    push rax
                              ; LHS
                                 ; Variable Declaration - i
                                    mov rax, qword [rbp - 24]  ; __main____Vector__Sensor__pushBack__block__14__if__15__block__16__for__17__i
                              pop rdx ; rhs value
                              mov qword [rbp - 24], rdx
                              push rdx
                           ; Loop init result can be discarded
                           pop rax
                        jmp .__forcond__17
.__for__17:
                           ; Update
                              ; Pre-Increment - int
                                 ; RHS
                                    ; Identifier - int i
                                       push qword [rbp - 24]
                                 pop rdx
                                 add qword [rbp - 24], 1
                                 mov rax, qword [rbp - 24]
                                 push rax ; push result
                              ; Loop update result can be discarded
                              pop rax
.__forcond__17:
                           ; Condition
                              ; Less Than
                                 ; LHS
                                    ; Identifier - int i
                                       push qword [rbp - 24]
                                 ; RHS
                                    ; Member Accessor
                                       ; LHS
                                          ; This keyword
                                             push qword [rbp - 8] ; __this
                                       ; RHS
                                          push qword [.__field____main____Vector__Sensor____size] ; stored index associated with field that is being accessed
                                       pop rdx ; rhs
                                       pop rax ; lhs
                                       push qword [rax + 8*rdx] ; lhs.rhs
                                 pop rdx ; rhs
                                 pop rax ; lhs
                                 cmp rax, rdx
                                 setl al
                                 movzx eax, al
                                 push rax
                              pop rax ; __cond
                              cmp rax, 0 ; __cond
                              je .__endfor__17
                           ; Body
                     ;---------------------------------------------------
                              ; Code Block
                                 ; Assignment - '='
                                    ; RHS
                                       ; Subscript
                                          ; LHS
                                             ; Member Accessor
                                                ; LHS
                                                   ; This keyword
                                                      push qword [rbp - 8] ; __this
                                                ; RHS
                                                   push qword [.__field____main____Vector__Sensor____data] ; stored index associated with field that is being accessed
                                                pop rdx ; rhs
                                                pop rax ; lhs
                                                push qword [rax + 8*rdx] ; lhs.rhs
                                          ; OFFSET
                                             ; Identifier - int i
                                                push qword [rbp - 24]
                                          pop rdx ; __offset
                                          pop rax ; __pointer
                                          push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
                                    ; LHS
                                       ; Subscript assignment
                                          ; LHS
                                             ; Identifier - Sensor[] nData
                                                push qword [rbp - 16]
                                          ; OFFSET
                                             ; Identifier - int i
                                                push qword [rbp - 24]
                                          pop rdi ; __offset
                                          pop rbx ; __pointer
                                    pop rdx ; rhs value
                                    mov qword [rbx + 8*rdi], rdx
                                    push rdx
                                 ; Statement results can be ignored
                                 pop rdx
                     ;---------------------------------------------------
                           ; Repeat
jmp .__for__17
                           ; End of For
.__endfor__17:
               ;---------------------------------------------------------
                        ; Free Operator
                           ; RHS
                              ; Member Accessor
                                 ; LHS
                                    ; This keyword
                                       push qword [rbp - 8] ; __this
                                 ; RHS
                                    push qword [.__field____main____Vector__Sensor____data] ; stored index associated with field that is being accessed
                                 pop rdx ; rhs
                                 pop rax ; lhs
                                 push qword [rax + 8*rdx] ; lhs.rhs
                           ; Free pointer
                           pop rdi   ; pointer
                           call free ; free the pointer
                           push rax  ; undefined return value
                        ; Statement results can be ignored
                        pop rdx
                        ; Assignment - '='
                           ; RHS
                              ; Identifier - Sensor[] nData
                                 push qword [rbp - 16]
                           ; LHS
                              ; Member Accessor Assignment
                                 ; LHS
                                    ; This keyword
                                       push qword [rbp - 8] ; __this
                                 ; RHS
                                    push qword [.__field____main____Vector__Sensor____data] ; 
                                 pop rdi ; rhs
                                 pop rbx ; lhs
                           pop rdx ; rhs value
                           mov qword [rbx + 8*rdi], rdx
                           push rdx
                        ; Statement results can be ignored
                        pop rdx
            ;------------------------------------------------------------
                  jmp .__endif__15 ; jump to end of condition chain
                  ; End of if
.__endif__15:
      ;------------------------------------------------------------------
               ; Assignment - '='
                  ; RHS
                     ; Identifier - Sensor val
                        push qword [rbp - -24]
                  ; LHS
                     ; Subscript assignment
                        ; LHS
                           ; Member Accessor
                              ; LHS
                                 ; This keyword
                                    push qword [rbp - 8] ; __this
                              ; RHS
                                 push qword [.__field____main____Vector__Sensor____data] ; stored index associated with field that is being accessed
                              pop rdx ; rhs
                              pop rax ; lhs
                              push qword [rax + 8*rdx] ; lhs.rhs
                        ; OFFSET
                           ; Member Accessor
                              ; LHS
                                 ; This keyword
                                    push qword [rbp - 8] ; __this
                              ; RHS
                                 push qword [.__field____main____Vector__Sensor____size] ; stored index associated with field that is being accessed
                              pop rdx ; rhs
                              pop rax ; lhs
                              push qword [rax + 8*rdx] ; lhs.rhs
                        pop rdi ; __offset
                        pop rbx ; __pointer
                  pop rdx ; rhs value
                  mov qword [rbx + 8*rdi], rdx
                  push rdx
               ; Statement results can be ignored
               pop rdx
               ; Pre-Increment - int
                  ; RHS
                     ; Member Accessor
                        ; LHS
                           ; This keyword
                              push qword [rbp - 8] ; __this
                        ; RHS
                           push qword [.__field____main____Vector__Sensor____size] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                  pop rdx
                  ; LHS
                     ; Member Accessor Assignment
                        ; LHS
                           ; This keyword
                              push qword [rbp - 8] ; __this
                        ; RHS
                           push qword [.__field____main____Vector__Sensor____size] ; size
                        pop rdi ; rhs
                        pop rbx ; lhs
                        mov rax, qword [rbx + 8*rdi]
                        add rax, 1
                        mov qword [rbx + 8*rdi], rax
                  push rax ; push result
               ; Statement results can be ignored
               pop rdx
   ;---------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__method____main____Vector__Sensor____pushBack__Sensor:
         ; End Method Declaration - .__method____main____Vector__Sensor____pushBack__Sensor
;---------------------------------------------------------------------------

;---------------------------------------------------------------------------
         ; Method Declaration - Vector<:Sensor:>::popBack() -> Sensor
         jmp .__end__method____main____Vector__Sensor____popBack
         .__method____main____Vector__Sensor____popBack:
         ; Function Header:
         ; Setup stack frame
            push rbp
            mov rbp, rsp
            ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
               sub rsp, 16 ; space for local variables (16-byte aligned)
               ; [rbp - 8] - this - Reference to 'this' object instance
               mov rdx, qword [rbp + 16] ; param passed 'this'
               mov qword [rbp - 8], rdx ; save this to a local
         ; Parameters
         ; Body
   ;---------------------------------------------------------------------
            ; Code Block
               ; Return
                  ; Subscript
                     ; LHS
                        ; Member Accessor
                           ; LHS
                              ; This keyword
                                 push qword [rbp - 8] ; __this
                           ; RHS
                              push qword [.__field____main____Vector__Sensor____data] ; stored index associated with field that is being accessed
                           pop rdx ; rhs
                           pop rax ; lhs
                           push qword [rax + 8*rdx] ; lhs.rhs
                     ; OFFSET
                        ; Pre-Decrement - int
                           ; RHS
                              ; Member Accessor
                                 ; LHS
                                    ; This keyword
                                       push qword [rbp - 8] ; __this
                                 ; RHS
                                    push qword [.__field____main____Vector__Sensor____size] ; stored index associated with field that is being accessed
                                 pop rdx ; rhs
                                 pop rax ; lhs
                                 push qword [rax + 8*rdx] ; lhs.rhs
                           pop rdx
                           ; LHS
                              ; Member Accessor Assignment
                                 ; LHS
                                    ; This keyword
                                       push qword [rbp - 8] ; __this
                                 ; RHS
                                    push qword [.__field____main____Vector__Sensor____size] ; size
                                 pop rdi ; rhs
                                 pop rbx ; lhs
                                 mov rax, qword [rbx + 8*rdi]
                                 sub rax, 1
                                 mov qword [rbx + 8*rdi], rax
                           push rax ; push result
                     pop rdx ; __offset
                     pop rax ; __pointer
                     push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
                  pop rax ; return value (Sensor)
                  ; Clean up stack and return
                  mov rsp, rbp ; remove local vars + unpopped pushes
                  pop rbp
                  ret
   ;---------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__method____main____Vector__Sensor____popBack:
         ; End Method Declaration - .__method____main____Vector__Sensor____popBack
;---------------------------------------------------------------------------

;---------------------------------------------------------------------------
         ; Method Declaration - Vector<:Sensor:>::clear() -> void
         jmp .__end__method____main____Vector__Sensor____clear
         .__method____main____Vector__Sensor____clear:
         ; Function Header:
         ; Setup stack frame
            push rbp
            mov rbp, rsp
            ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
               sub rsp, 16 ; space for local variables (16-byte aligned)
               ; [rbp - 8] - this - Reference to 'this' object instance
               mov rdx, qword [rbp + 16] ; param passed 'this'
               mov qword [rbp - 8], rdx ; save this to a local
         ; Parameters
         ; Body
   ;---------------------------------------------------------------------
            ; Code Block
      ;------------------------------------------------------------------
               ; While-Loop
.__while__21:
                  ; Condition
                     ; Greater Than
                        ; LHS
                           ; Member Accessor
                              ; LHS
                                 ; This keyword
                                    push qword [rbp - 8] ; __this
                              ; RHS
                                 push qword [.__field____main____Vector__Sensor____size] ; stored index associated with field that is being accessed
                              pop rdx ; rhs
                              pop rax ; lhs
                              push qword [rax + 8*rdx] ; lhs.rhs
                        ; RHS
                           ; Int Literal
                              mov rax, 0
                              push rax
                        pop rdx ; rhs
                        pop rax ; lhs
                        cmp rax, rdx
                        setg al
                        movzx eax, al
                        push rax
                     pop rax ; __cond
                     cmp rax, 0 ; __cond
                     je .__endwhile__21
                  ; Body
                     ; Method Call - Vector<:Sensor:>::popBack() -> Sensor
                        ; Make space for 0 arg(s) and object parameter
                        sub rsp, 8
                        ; LHS
                           ; This keyword
                              push qword [rbp - 8] ; __this
                           pop rax ; object parameter
                           mov qword [rsp + 0], rax ; place as first parameter
                        ; RHS
                        ; Arguments
                        call .__method____main____Vector__Sensor____popBack
                        ; Remove args
                        add rsp, 8
                        ; Push return value
                        push rax
                     ; Statement results can be ignored
                     pop rdx
                  jmp .__while__21
                  ; End of While
.__endwhile__21:
      ;------------------------------------------------------------------
   ;---------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__method____main____Vector__Sensor____clear:
         ; End Method Declaration - .__method____main____Vector__Sensor____clear
;---------------------------------------------------------------------------

;---------------------------------------------------------------------------
         ; Method Declaration - Vector<:Sensor:>::get(int) -> Sensor
         jmp .__end__method____main____Vector__Sensor____get__int
         .__method____main____Vector__Sensor____get__int:
         ; Function Header:
         ; Setup stack frame
            push rbp
            mov rbp, rsp
            ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
               sub rsp, 16 ; space for local variables (16-byte aligned)
               ; [rbp - 8] - this - Reference to 'this' object instance
               mov rdx, qword [rbp + 16] ; param passed 'this'
               mov qword [rbp - 8], rdx ; save this to a local
         ; Parameters
            ; Param: index [rbp + 24] (__main____Vector__Sensor__get__index)
         ; Body
   ;---------------------------------------------------------------------
            ; Code Block
               ; Return
                  ; Subscript
                     ; LHS
                        ; Member Accessor
                           ; LHS
                              ; This keyword
                                 push qword [rbp - 8] ; __this
                           ; RHS
                              push qword [.__field____main____Vector__Sensor____data] ; stored index associated with field that is being accessed
                           pop rdx ; rhs
                           pop rax ; lhs
                           push qword [rax + 8*rdx] ; lhs.rhs
                     ; OFFSET
                        ; Identifier - int index
                           push qword [rbp - -24]
                     pop rdx ; __offset
                     pop rax ; __pointer
                     push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
                  pop rax ; return value (Sensor)
                  ; Clean up stack and return
                  mov rsp, rbp ; remove local vars + unpopped pushes
                  pop rbp
                  ret
   ;---------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__method____main____Vector__Sensor____get__int:
         ; End Method Declaration - .__method____main____Vector__Sensor____get__int
;---------------------------------------------------------------------------

;---------------------------------------------------------------------------
         ; Method Declaration - Vector<:Sensor:>::set(int, Sensor) -> void
         jmp .__end__method____main____Vector__Sensor____set__int__Sensor
         .__method____main____Vector__Sensor____set__int__Sensor:
         ; Function Header:
         ; Setup stack frame
            push rbp
            mov rbp, rsp
            ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
               sub rsp, 16 ; space for local variables (16-byte aligned)
               ; [rbp - 8] - this - Reference to 'this' object instance
               mov rdx, qword [rbp + 16] ; param passed 'this'
               mov qword [rbp - 8], rdx ; save this to a local
         ; Parameters
            ; Param: index [rbp + 24] (__main____Vector__Sensor__set__index)
            ; Param: value [rbp + 32] (__main____Vector__Sensor__set__value)
         ; Body
   ;---------------------------------------------------------------------
            ; Code Block
               ; Assignment - '='
                  ; RHS
                     ; Identifier - Sensor value
                        push qword [rbp - -32]
                  ; LHS
                     ; Subscript assignment
                        ; LHS
                           ; Member Accessor
                              ; LHS
                                 ; This keyword
                                    push qword [rbp - 8] ; __this
                              ; RHS
                                 push qword [.__field____main____Vector__Sensor____data] ; stored index associated with field that is being accessed
                              pop rdx ; rhs
                              pop rax ; lhs
                              push qword [rax + 8*rdx] ; lhs.rhs
                        ; OFFSET
                           ; Identifier - int index
                              push qword [rbp - -24]
                        pop rdi ; __offset
                        pop rbx ; __pointer
                  pop rdx ; rhs value
                  mov qword [rbx + 8*rdi], rdx
                  push rdx
               ; Statement results can be ignored
               pop rdx
   ;---------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__method____main____Vector__Sensor____set__int__Sensor:
         ; End Method Declaration - .__method____main____Vector__Sensor____set__int__Sensor
;---------------------------------------------------------------------------

.__endclass____main____Vector__Sensor:
         ; End Class Declaration - __main____Vector__Sensor
; ==============================================================================

; ==============================================================================
         ; Class Declaration - __main____Vector__char inherits __builtin____main__Object
         ; Class data
         section .data
         ; Dispatch Table - this might need to be a malloc**
         .__dtable____main____Vector__char:
         ; Dispatch Table Entries
         dq .__method____main____Vector__char____pushBack__char ; 0
         dq .__method____main____Vector__char____popBack ; 1
         dq .__method____main____Vector__char____clear ; 2
         dq .__method____main____Vector__char____get__int ; 3
         dq .__method____main____Vector__char____set__int__char ; 4
         section .text
;---------------------------------------------------------------------------
         ; Field - char[] Vector<:char:>::data
         section .data
         .__field____main____Vector__char____data: dq 1
         section .text
;---------------------------------------------------------------------------
;---------------------------------------------------------------------------
         ; Field - int Vector<:char:>::size
         section .data
         .__field____main____Vector__char____size: dq 2
         section .text
;---------------------------------------------------------------------------
;---------------------------------------------------------------------------
         ; Field - int Vector<:char:>::capacity
         section .data
         .__field____main____Vector__char____capacity: dq 3
         section .text
;---------------------------------------------------------------------------
         ; skip over class methods
         jmp .__endclass____main____Vector__char
;---------------------------------------------------------------------------
         ; Constructor Declaration - Vector<:char:>::Vector() -> Vector<:char:>
         jmp .__end__ctor____main____Vector__char____Vector
         .__ctor____main____Vector__char____Vector:
         ; Function Header:
         ; Setup stack frame
            push rbp
            mov rbp, rsp
            ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
               sub rsp, 16 ; space for local variables (16-byte aligned)
               ; [rbp - 8] - this - Reference to 'this' object instance
         ; Creating Class Instance
            mov rdi, 32 ; [dtable, field0, field1, ..., fieldN] each 8 bytes
            call malloc
            mov qword [rbp - 8], rax ; save class instance as 'this'
            ; Add Dispatch Table
            mov rax, qword [rbp - 8] ; this
            mov qword [rax + 0], .__dtable____main____Vector__char ; this[0] = &dtable
         ; Parameters
         ; Body
;------------------------------------------------------------------------
         ; Code Block
            ; Assignment - '='
               ; RHS
                  ; Int Literal
                     mov rax, 10
                     push rax
               ; LHS
                  ; Member Accessor Assignment
                     ; LHS
                        ; This keyword
                           push qword [rbp - 8] ; __this
                     ; RHS
                        push qword [.__field____main____Vector__char____capacity] ; 
                     pop rdi ; rhs
                     pop rbx ; lhs
               pop rdx ; rhs value
               mov qword [rbx + 8*rdi], rdx
               push rdx
            ; Statement results can be ignored
            pop rdx
            ; Assignment - '='
               ; RHS
                  ; Int Literal
                     mov rax, 0
                     push rax
               ; LHS
                  ; Member Accessor Assignment
                     ; LHS
                        ; This keyword
                           push qword [rbp - 8] ; __this
                     ; RHS
                        push qword [.__field____main____Vector__char____size] ; 
                     pop rdi ; rhs
                     pop rbx ; lhs
               pop rdx ; rhs value
               mov qword [rbx + 8*rdi], rdx
               push rdx
            ; Statement results can be ignored
            pop rdx
            ; Assignment - '='
               ; RHS
                  ; Array Allocator
                     ; Member Accessor
                        ; LHS
                           ; This keyword
                              push qword [rbp - 8] ; __this
                        ; RHS
                           push qword [.__field____main____Vector__char____capacity] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                     pop rdx ; num elements for dimension[0]
                     mov rdi, rdx ; num bytes to allocate (1 byte per element)
                     call malloc ; allocates edi bytes on heap and stores pointer in rax
                     push rax ; __ptr
               ; LHS
                  ; Member Accessor Assignment
                     ; LHS
                        ; This keyword
                           push qword [rbp - 8] ; __this
                     ; RHS
                        push qword [.__field____main____Vector__char____data] ; 
                     pop rdi ; rhs
                     pop rbx ; lhs
               pop rdx ; rhs value
               mov qword [rbx + 8*rdi], rdx
               push rdx
            ; Statement results can be ignored
            pop rdx
;------------------------------------------------------------------------
         mov rax, qword [rbp - 8] ; __this
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__ctor____main____Vector__char____Vector:
         ; End Constructor Declaration - __ctor____main____Vector__char____Vector
;------------------------------------------------------------------------------

;------------------------------------------------------------------------------
         ; Constructor Declaration - Vector<:char:>::Vector(int) -> Vector<:char:>
         jmp .__end__ctor____main____Vector__char____Vector__int
         .__ctor____main____Vector__char____Vector__int:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
            sub rsp, 16 ; space for local variables (16-byte aligned)
            ; [rbp - 8] - this - Reference to 'this' object instance
         ; Creating Class Instance
         mov rdi, 32 ; [dtable, field0, field1, ..., fieldN] each 8 bytes
         call malloc
         mov qword [rbp - 8], rax ; save class instance as 'this'
         ; Add Dispatch Table
         mov rax, qword [rbp - 8] ; this
         mov qword [rax + 0], .__dtable____main____Vector__char ; this[0] = &dtable
         ; Parameters
         ; Param: size [rbp + 16]
         ; Body
;---------------------------------------------------------------------------
         ; Code Block
         ; Assignment - '='
            ; RHS
               ; Addition - int, int
                  ; LHS
                     ; Identifier - int size
                        push qword [rbp - -16]
                  ; RHS
                     ; Int Literal
                        mov rax, 10
                        push rax
                  pop rdx ; rhs
                  pop rax ; lhs
                  add rax, rdx
                  push rax
            ; LHS
               ; Member Accessor Assignment
                  ; LHS
                     ; This keyword
                        push qword [rbp - 8] ; __this
                  ; RHS
                     push qword [.__field____main____Vector__char____capacity] ; 
                  pop rdi ; rhs
                  pop rbx ; lhs
            pop rdx ; rhs value
            mov qword [rbx + 8*rdi], rdx
            push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
            ; RHS
               ; Identifier - int size
                  push qword [rbp - -16]
            ; LHS
               ; Member Accessor Assignment
                  ; LHS
                     ; This keyword
                        push qword [rbp - 8] ; __this
                  ; RHS
                     push qword [.__field____main____Vector__char____size] ; 
                  pop rdi ; rhs
                  pop rbx ; lhs
            pop rdx ; rhs value
            mov qword [rbx + 8*rdi], rdx
            push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
            ; RHS
               ; Array Allocator
                  ; Member Accessor
                     ; LHS
                        ; This keyword
                           push qword [rbp - 8] ; __this
                     ; RHS
                        push qword [.__field____main____Vector__char____capacity] ; stored index associated with field that is being accessed
                     pop rdx ; rhs
                     pop rax ; lhs
                     push qword [rax + 8*rdx] ; lhs.rhs
                  pop rdx ; num elements for dimension[0]
                  mov rdi, rdx ; num bytes to allocate (1 byte per element)
                  call malloc ; allocates edi bytes on heap and stores pointer in rax
                  push rax ; __ptr
            ; LHS
               ; Member Accessor Assignment
                  ; LHS
                     ; This keyword
                        push qword [rbp - 8] ; __this
                  ; RHS
                     push qword [.__field____main____Vector__char____data] ; 
                  pop rdi ; rhs
                  pop rbx ; lhs
            pop rdx ; rhs value
            mov qword [rbx + 8*rdi], rdx
            push rdx
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------
         mov rax, qword [rbp - 8] ; __this
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__ctor____main____Vector__char____Vector__int:
         ; End Constructor Declaration - __ctor____main____Vector__char____Vector__int
;---------------------------------------------------------------------------------

;---------------------------------------------------------------------------------
         ; Method Declaration - Vector<:char:>::pushBack(char) -> void
         jmp .__end__method____main____Vector__char____pushBack__char
         .__method____main____Vector__char____pushBack__char:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         sub rsp, 32 ; space for local variables (16-byte aligned)
         ; [rbp - 8] - this - Reference to 'this' object instance
         mov rdx, qword [rbp + 16] ; param passed 'this'
         mov qword [rbp - 8], rdx ; save this to a local
         ; [rbp - 16] - char[] nData (<unset-scope-name>)
         ; [rbp - 24] - int i (<unset-scope-name>)
         ; Parameters
         ; Param: val [rbp + 24] (__main____Vector__char__pushBack__val)
         ; Body
;---------------------------------------------------------------------------
         ; Code Block
;------------------------------------------------------------------------
         ; If-Statement
            ; Condition
               ; Greater Than or Equal to
                  ; LHS
                     ; Addition - int, int
                        ; LHS
                           ; Member Accessor
                              ; LHS
                                 ; This keyword
                                    push qword [rbp - 8] ; __this
                              ; RHS
                                 push qword [.__field____main____Vector__char____size] ; stored index associated with field that is being accessed
                              pop rdx ; rhs
                              pop rax ; lhs
                              push qword [rax + 8*rdx] ; lhs.rhs
                        ; RHS
                           ; Int Literal
                              mov rax, 1
                              push rax
                        pop rdx ; rhs
                        pop rax ; lhs
                        add rax, rdx
                        push rax
                  ; RHS
                     ; Member Accessor
                        ; LHS
                           ; This keyword
                              push qword [rbp - 8] ; __this
                        ; RHS
                           push qword [.__field____main____Vector__char____capacity] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                  pop rdx ; rhs
                  pop rax ; lhs
                  cmp rax, rdx
                  setge al
                  movzx eax, al
                  push rax
               pop rdx ; __cond
               cmp rdx, 0 ; ensure condition is true
               je .__endif__27 ; jump to end
            ; Body
      ;------------------------------------------------------------------
               ; Code Block
                  ; Assignment - '='
                     ; RHS
                        ; Multiplication - int, int
                           ; LHS
                              ; Member Accessor
                                 ; LHS
                                    ; This keyword
                                       push qword [rbp - 8] ; __this
                                 ; RHS
                                    push qword [.__field____main____Vector__char____capacity] ; stored index associated with field that is being accessed
                                 pop rdx ; rhs
                                 pop rax ; lhs
                                 push qword [rax + 8*rdx] ; lhs.rhs
                           ; RHS
                              ; Int Literal
                                 mov rax, 2
                                 push rax
                           pop rdx
                           pop rax
                           imul rax, rdx
                           push rax
                     ; LHS
                        ; Member Accessor Assignment
                           ; LHS
                              ; This keyword
                                 push qword [rbp - 8] ; __this
                           ; RHS
                              push qword [.__field____main____Vector__char____capacity] ; 
                           pop rdi ; rhs
                           pop rbx ; lhs
                     pop rdx ; rhs value
                     mov qword [rbx + 8*rdi], rdx
                     push rdx
                  ; Statement results can be ignored
                  pop rdx
                  ; Assignment - '='
                     ; RHS
                        ; Array Allocator
                           ; Member Accessor
                              ; LHS
                                 ; This keyword
                                    push qword [rbp - 8] ; __this
                              ; RHS
                                 push qword [.__field____main____Vector__char____capacity] ; stored index associated with field that is being accessed
                              pop rdx ; rhs
                              pop rax ; lhs
                              push qword [rax + 8*rdx] ; lhs.rhs
                           pop rdx ; num elements for dimension[0]
                           mov rdi, rdx ; num bytes to allocate (1 byte per element)
                           call malloc ; allocates edi bytes on heap and stores pointer in rax
                           push rax ; __ptr
                     ; LHS
                        ; Variable Declaration - nData
                           mov rax, qword [rbp - 16]  ; __main____Vector__char__pushBack__block__26__if__27__block__28__nData
                     pop rdx ; rhs value
                     mov qword [rbp - 16], rdx
                     push rdx
                  ; Statement results can be ignored
                  pop rdx
         ;---------------------------------------------------------------
                  ; For-Loop
                  ; Init
                     ; Assignment - '='
                        ; RHS
                           ; Int Literal
                              mov rax, 0
                              push rax
                        ; LHS
                           ; Variable Declaration - i
                              mov rax, qword [rbp - 24]  ; __main____Vector__char__pushBack__block__26__if__27__block__28__for__29__i
                        pop rdx ; rhs value
                        mov qword [rbp - 24], rdx
                        push rdx
                     ; Loop init result can be discarded
                     pop rax
                  jmp .__forcond__29
.__for__29:
                     ; Update
                        ; Pre-Increment - int
                           ; RHS
                              ; Identifier - int i
                                 push qword [rbp - 24]
                           pop rdx
                           add qword [rbp - 24], 1
                           mov rax, qword [rbp - 24]
                           push rax ; push result
                        ; Loop update result can be discarded
                        pop rax
.__forcond__29:
                     ; Condition
                        ; Less Than
                           ; LHS
                              ; Identifier - int i
                                 push qword [rbp - 24]
                           ; RHS
                              ; Member Accessor
                                 ; LHS
                                    ; This keyword
                                       push qword [rbp - 8] ; __this
                                 ; RHS
                                    push qword [.__field____main____Vector__char____size] ; stored index associated with field that is being accessed
                                 pop rdx ; rhs
                                 pop rax ; lhs
                                 push qword [rax + 8*rdx] ; lhs.rhs
                           pop rdx ; rhs
                           pop rax ; lhs
                           cmp rax, rdx
                           setl al
                           movzx eax, al
                           push rax
                        pop rax ; __cond
                        cmp rax, 0 ; __cond
                        je .__endfor__29
                     ; Body
               ;---------------------------------------------------------
                        ; Code Block
                           ; Assignment - '='
                              ; RHS
                                 ; Subscript
                                    ; LHS
                                       ; Member Accessor
                                          ; LHS
                                             ; This keyword
                                                push qword [rbp - 8] ; __this
                                          ; RHS
                                             push qword [.__field____main____Vector__char____data] ; stored index associated with field that is being accessed
                                          pop rdx ; rhs
                                          pop rax ; lhs
                                          push qword [rax + 8*rdx] ; lhs.rhs
                                    ; OFFSET
                                       ; Identifier - int i
                                          push qword [rbp - 24]
                                    pop rdx ; __offset
                                    pop rax ; __pointer
                                    mov al, byte [rax + rdx] ; pointer + sizeof(data_t) * offset
                                    movzx rax, al ; zero extend because we need to push 64bit to stack
                                    push rax ; push char onto stack
                              ; LHS
                                 ; Subscript assignment
                                    ; LHS
                                       ; Identifier - char[] nData
                                          push qword [rbp - 16]
                                    ; OFFSET
                                       ; Identifier - int i
                                          push qword [rbp - 24]
                                    pop rdi ; __offset
                                    pop rbx ; __pointer
                              pop rdx ; rhs value
                              mov byte [rbx + rdi], dl
                              push rdx
                           ; Statement results can be ignored
                           pop rdx
               ;---------------------------------------------------------
                     ; Repeat
jmp .__for__29
                     ; End of For
.__endfor__29:
         ;---------------------------------------------------------------
                  ; Free Operator
                     ; RHS
                        ; Member Accessor
                           ; LHS
                              ; This keyword
                                 push qword [rbp - 8] ; __this
                           ; RHS
                              push qword [.__field____main____Vector__char____data] ; stored index associated with field that is being accessed
                           pop rdx ; rhs
                           pop rax ; lhs
                           push qword [rax + 8*rdx] ; lhs.rhs
                     ; Free pointer
                     pop rdi   ; pointer
                     call free ; free the pointer
                     push rax  ; undefined return value
                  ; Statement results can be ignored
                  pop rdx
                  ; Assignment - '='
                     ; RHS
                        ; Identifier - char[] nData
                           push qword [rbp - 16]
                     ; LHS
                        ; Member Accessor Assignment
                           ; LHS
                              ; This keyword
                                 push qword [rbp - 8] ; __this
                           ; RHS
                              push qword [.__field____main____Vector__char____data] ; 
                           pop rdi ; rhs
                           pop rbx ; lhs
                     pop rdx ; rhs value
                     mov qword [rbx + 8*rdi], rdx
                     push rdx
                  ; Statement results can be ignored
                  pop rdx
      ;------------------------------------------------------------------
            jmp .__endif__27 ; jump to end of condition chain
            ; End of if
.__endif__27:
;------------------------------------------------------------------------
         ; Assignment - '='
            ; RHS
               ; Identifier - char val
                  mov al, byte [rbp - -24]
                  movzx rax, al
                  push rax
            ; LHS
               ; Subscript assignment
                  ; LHS
                     ; Member Accessor
                        ; LHS
                           ; This keyword
                              push qword [rbp - 8] ; __this
                        ; RHS
                           push qword [.__field____main____Vector__char____data] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                  ; OFFSET
                     ; Member Accessor
                        ; LHS
                           ; This keyword
                              push qword [rbp - 8] ; __this
                        ; RHS
                           push qword [.__field____main____Vector__char____size] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                  pop rdi ; __offset
                  pop rbx ; __pointer
            pop rdx ; rhs value
            mov byte [rbx + rdi], dl
            push rdx
         ; Statement results can be ignored
         pop rdx
         ; Pre-Increment - int
            ; RHS
               ; Member Accessor
                  ; LHS
                     ; This keyword
                        push qword [rbp - 8] ; __this
                  ; RHS
                     push qword [.__field____main____Vector__char____size] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            pop rdx
            ; LHS
               ; Member Accessor Assignment
                  ; LHS
                     ; This keyword
                        push qword [rbp - 8] ; __this
                  ; RHS
                     push qword [.__field____main____Vector__char____size] ; size
                  pop rdi ; rhs
                  pop rbx ; lhs
                  mov rax, qword [rbx + 8*rdi]
                  add rax, 1
                  mov qword [rbx + 8*rdi], rax
            push rax ; push result
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__method____main____Vector__char____pushBack__char:
         ; End Method Declaration - .__method____main____Vector__char____pushBack__char
;---------------------------------------------------------------------------------

;---------------------------------------------------------------------------------
         ; Method Declaration - Vector<:char:>::popBack() -> char
         jmp .__end__method____main____Vector__char____popBack
         .__method____main____Vector__char____popBack:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         sub rsp, 16 ; space for local variables (16-byte aligned)
         ; [rbp - 8] - this - Reference to 'this' object instance
         mov rdx, qword [rbp + 16] ; param passed 'this'
         mov qword [rbp - 8], rdx ; save this to a local
         ; Parameters
         ; Body
;---------------------------------------------------------------------------
         ; Code Block
         ; Return
            ; Subscript
               ; LHS
                  ; Member Accessor
                     ; LHS
                        ; This keyword
                           push qword [rbp - 8] ; __this
                     ; RHS
                        push qword [.__field____main____Vector__char____data] ; stored index associated with field that is being accessed
                     pop rdx ; rhs
                     pop rax ; lhs
                     push qword [rax + 8*rdx] ; lhs.rhs
               ; OFFSET
                  ; Pre-Decrement - int
                     ; RHS
                        ; Member Accessor
                           ; LHS
                              ; This keyword
                                 push qword [rbp - 8] ; __this
                           ; RHS
                              push qword [.__field____main____Vector__char____size] ; stored index associated with field that is being accessed
                           pop rdx ; rhs
                           pop rax ; lhs
                           push qword [rax + 8*rdx] ; lhs.rhs
                     pop rdx
                     ; LHS
                        ; Member Accessor Assignment
                           ; LHS
                              ; This keyword
                                 push qword [rbp - 8] ; __this
                           ; RHS
                              push qword [.__field____main____Vector__char____size] ; size
                           pop rdi ; rhs
                           pop rbx ; lhs
                           mov rax, qword [rbx + 8*rdi]
                           sub rax, 1
                           mov qword [rbx + 8*rdi], rax
                     push rax ; push result
               pop rdx ; __offset
               pop rax ; __pointer
               mov al, byte [rax + rdx] ; pointer + sizeof(data_t) * offset
               movzx rax, al ; zero extend because we need to push 64bit to stack
               push rax ; push char onto stack
            pop rax ; return value (char)
            ; Clean up stack and return
            mov rsp, rbp ; remove local vars + unpopped pushes
            pop rbp
            ret
;---------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__method____main____Vector__char____popBack:
         ; End Method Declaration - .__method____main____Vector__char____popBack
;---------------------------------------------------------------------------------

;---------------------------------------------------------------------------------
         ; Method Declaration - Vector<:char:>::clear() -> void
         jmp .__end__method____main____Vector__char____clear
         .__method____main____Vector__char____clear:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         sub rsp, 16 ; space for local variables (16-byte aligned)
         ; [rbp - 8] - this - Reference to 'this' object instance
         mov rdx, qword [rbp + 16] ; param passed 'this'
         mov qword [rbp - 8], rdx ; save this to a local
         ; Parameters
         ; Body
;---------------------------------------------------------------------------
         ; Code Block
;------------------------------------------------------------------------
         ; While-Loop
.__while__33:
            ; Condition
               ; Greater Than
                  ; LHS
                     ; Member Accessor
                        ; LHS
                           ; This keyword
                              push qword [rbp - 8] ; __this
                        ; RHS
                           push qword [.__field____main____Vector__char____size] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                  ; RHS
                     ; Int Literal
                        mov rax, 0
                        push rax
                  pop rdx ; rhs
                  pop rax ; lhs
                  cmp rax, rdx
                  setg al
                  movzx eax, al
                  push rax
               pop rax ; __cond
               cmp rax, 0 ; __cond
               je .__endwhile__33
            ; Body
               ; Method Call - Vector<:char:>::popBack() -> char
                  ; Make space for 0 arg(s) and object parameter
                  sub rsp, 8
                  ; LHS
                     ; This keyword
                        push qword [rbp - 8] ; __this
                     pop rax ; object parameter
                     mov qword [rsp + 0], rax ; place as first parameter
                  ; RHS
                  ; Arguments
                  call .__method____main____Vector__char____popBack
                  ; Remove args
                  add rsp, 8
                  ; Push return value
                  push rax
               ; Statement results can be ignored
               pop rdx
            jmp .__while__33
            ; End of While
.__endwhile__33:
;------------------------------------------------------------------------
;---------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__method____main____Vector__char____clear:
         ; End Method Declaration - .__method____main____Vector__char____clear
;---------------------------------------------------------------------------------

;---------------------------------------------------------------------------------
         ; Method Declaration - Vector<:char:>::get(int) -> char
         jmp .__end__method____main____Vector__char____get__int
         .__method____main____Vector__char____get__int:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         sub rsp, 16 ; space for local variables (16-byte aligned)
         ; [rbp - 8] - this - Reference to 'this' object instance
         mov rdx, qword [rbp + 16] ; param passed 'this'
         mov qword [rbp - 8], rdx ; save this to a local
         ; Parameters
         ; Param: index [rbp + 24] (__main____Vector__char__get__index)
         ; Body
;---------------------------------------------------------------------------
         ; Code Block
         ; Return
            ; Subscript
               ; LHS
                  ; Member Accessor
                     ; LHS
                        ; This keyword
                           push qword [rbp - 8] ; __this
                     ; RHS
                        push qword [.__field____main____Vector__char____data] ; stored index associated with field that is being accessed
                     pop rdx ; rhs
                     pop rax ; lhs
                     push qword [rax + 8*rdx] ; lhs.rhs
               ; OFFSET
                  ; Identifier - int index
                     push qword [rbp - -24]
               pop rdx ; __offset
               pop rax ; __pointer
               mov al, byte [rax + rdx] ; pointer + sizeof(data_t) * offset
               movzx rax, al ; zero extend because we need to push 64bit to stack
               push rax ; push char onto stack
            pop rax ; return value (char)
            ; Clean up stack and return
            mov rsp, rbp ; remove local vars + unpopped pushes
            pop rbp
            ret
;---------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__method____main____Vector__char____get__int:
         ; End Method Declaration - .__method____main____Vector__char____get__int
;---------------------------------------------------------------------------------

;---------------------------------------------------------------------------------
         ; Method Declaration - Vector<:char:>::set(int, char) -> void
         jmp .__end__method____main____Vector__char____set__int__char
         .__method____main____Vector__char____set__int__char:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         sub rsp, 16 ; space for local variables (16-byte aligned)
         ; [rbp - 8] - this - Reference to 'this' object instance
         mov rdx, qword [rbp + 16] ; param passed 'this'
         mov qword [rbp - 8], rdx ; save this to a local
         ; Parameters
         ; Param: index [rbp + 24] (__main____Vector__char__set__index)
         ; Param: value [rbp + 32] (__main____Vector__char__set__value)
         ; Body
;---------------------------------------------------------------------------
         ; Code Block
         ; Assignment - '='
            ; RHS
               ; Identifier - char value
                  mov al, byte [rbp - -32]
                  movzx rax, al
                  push rax
            ; LHS
               ; Subscript assignment
                  ; LHS
                     ; Member Accessor
                        ; LHS
                           ; This keyword
                              push qword [rbp - 8] ; __this
                        ; RHS
                           push qword [.__field____main____Vector__char____data] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                  ; OFFSET
                     ; Identifier - int index
                        push qword [rbp - -24]
                  pop rdi ; __offset
                  pop rbx ; __pointer
            pop rdx ; rhs value
            mov byte [rbx + rdi], dl
            push rdx
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__method____main____Vector__char____set__int__char:
         ; End Method Declaration - .__method____main____Vector__char____set__int__char
;---------------------------------------------------------------------------------

.__endclass____main____Vector__char:
         ; End Class Declaration - __main____Vector__char
; ====================================================================================

; ====================================================================================
         ; Class Declaration - __main____Vector__Vector inherits __builtin____main__Object
         ; Class data
         section .data
         ; Dispatch Table - this might need to be a malloc**
         .__dtable____main____Vector__Vector:
         ; Dispatch Table Entries
         dq .__method____main____Vector__Vector____pushBack__Vector ; 0
         dq .__method____main____Vector__Vector____popBack ; 1
         dq .__method____main____Vector__Vector____clear ; 2
         dq .__method____main____Vector__Vector____get__int ; 3
         dq .__method____main____Vector__Vector____set__int__Vector ; 4
         section .text
;---------------------------------------------------------------------------------
         ; Field - Vector<:char:>[] Vector<:Vector<:char:>:>::data
         section .data
         .__field____main____Vector__Vector____data: dq 1
         section .text
;---------------------------------------------------------------------------------
;---------------------------------------------------------------------------------
         ; Field - int Vector<:Vector<:char:>:>::size
         section .data
         .__field____main____Vector__Vector____size: dq 2
         section .text
;---------------------------------------------------------------------------------
;---------------------------------------------------------------------------------
         ; Field - int Vector<:Vector<:char:>:>::capacity
         section .data
         .__field____main____Vector__Vector____capacity: dq 3
         section .text
;---------------------------------------------------------------------------------
         ; skip over class methods
         jmp .__endclass____main____Vector__Vector
;---------------------------------------------------------------------------------
         ; Constructor Declaration - Vector<:Vector<:char:>:>::Vector() -> Vector<:Vector<:char:>:>
         jmp .__end__ctor____main____Vector__Vector____Vector
         .__ctor____main____Vector__Vector____Vector:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         sub rsp, 16 ; space for local variables (16-byte aligned)
         ; [rbp - 8] - this - Reference to 'this' object instance
         ; Creating Class Instance
         mov rdi, 32 ; [dtable, field0, field1, ..., fieldN] each 8 bytes
         call malloc
         mov qword [rbp - 8], rax ; save class instance as 'this'
         ; Add Dispatch Table
         mov rax, qword [rbp - 8] ; this
         mov qword [rax + 0], .__dtable____main____Vector__Vector ; this[0] = &dtable
         ; Parameters
         ; Body
;------------------------------------------------------------------------------
         ; Code Block
         ; Assignment - '='
         ; RHS
            ; Int Literal
               mov rax, 10
               push rax
         ; LHS
            ; Member Accessor Assignment
               ; LHS
                  ; This keyword
                     push qword [rbp - 8] ; __this
               ; RHS
                  push qword [.__field____main____Vector__Vector____capacity] ; 
               pop rdi ; rhs
               pop rbx ; lhs
         pop rdx ; rhs value
         mov qword [rbx + 8*rdi], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
            ; Int Literal
               mov rax, 0
               push rax
         ; LHS
            ; Member Accessor Assignment
               ; LHS
                  ; This keyword
                     push qword [rbp - 8] ; __this
               ; RHS
                  push qword [.__field____main____Vector__Vector____size] ; 
               pop rdi ; rhs
               pop rbx ; lhs
         pop rdx ; rhs value
         mov qword [rbx + 8*rdi], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
            ; Array Allocator
               ; Member Accessor
                  ; LHS
                     ; This keyword
                        push qword [rbp - 8] ; __this
                  ; RHS
                     push qword [.__field____main____Vector__Vector____capacity] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
               pop rdx ; num elements for dimension[0]
               imul rdx, 8 ; 8 bytes per element
               mov rdi, rdx ; num bytes to allocate
               call malloc ; allocates edi bytes on heap and stores pointer in rax
               push rax ; __ptr
         ; LHS
            ; Member Accessor Assignment
               ; LHS
                  ; This keyword
                     push qword [rbp - 8] ; __this
               ; RHS
                  push qword [.__field____main____Vector__Vector____data] ; 
               pop rdi ; rhs
               pop rbx ; lhs
         pop rdx ; rhs value
         mov qword [rbx + 8*rdi], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;------------------------------------------------------------------------------
         mov rax, qword [rbp - 8] ; __this
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__ctor____main____Vector__Vector____Vector:
         ; End Constructor Declaration - __ctor____main____Vector__Vector____Vector
;------------------------------------------------------------------------------------

;------------------------------------------------------------------------------------
         ; Constructor Declaration - Vector<:Vector<:char:>:>::Vector(int) -> Vector<:Vector<:char:>:>
         jmp .__end__ctor____main____Vector__Vector____Vector__int
         .__ctor____main____Vector__Vector____Vector__int:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         sub rsp, 16 ; space for local variables (16-byte aligned)
         ; [rbp - 8] - this - Reference to 'this' object instance
         ; Creating Class Instance
         mov rdi, 32 ; [dtable, field0, field1, ..., fieldN] each 8 bytes
         call malloc
         mov qword [rbp - 8], rax ; save class instance as 'this'
         ; Add Dispatch Table
         mov rax, qword [rbp - 8] ; this
         mov qword [rax + 0], .__dtable____main____Vector__Vector ; this[0] = &dtable
         ; Parameters
         ; Param: size [rbp + 16]
         ; Body
;---------------------------------------------------------------------------------
         ; Code Block
         ; Assignment - '='
         ; RHS
         ; Addition - int, int
            ; LHS
               ; Identifier - int size
                  push qword [rbp - -16]
            ; RHS
               ; Int Literal
                  mov rax, 10
                  push rax
            pop rdx ; rhs
            pop rax ; lhs
            add rax, rdx
            push rax
         ; LHS
         ; Member Accessor Assignment
            ; LHS
               ; This keyword
                  push qword [rbp - 8] ; __this
            ; RHS
               push qword [.__field____main____Vector__Vector____capacity] ; 
            pop rdi ; rhs
            pop rbx ; lhs
         pop rdx ; rhs value
         mov qword [rbx + 8*rdi], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Identifier - int size
            push qword [rbp - -16]
         ; LHS
         ; Member Accessor Assignment
            ; LHS
               ; This keyword
                  push qword [rbp - 8] ; __this
            ; RHS
               push qword [.__field____main____Vector__Vector____size] ; 
            pop rdi ; rhs
            pop rbx ; lhs
         pop rdx ; rhs value
         mov qword [rbx + 8*rdi], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Array Allocator
            ; Member Accessor
               ; LHS
                  ; This keyword
                     push qword [rbp - 8] ; __this
               ; RHS
                  push qword [.__field____main____Vector__Vector____capacity] ; stored index associated with field that is being accessed
               pop rdx ; rhs
               pop rax ; lhs
               push qword [rax + 8*rdx] ; lhs.rhs
            pop rdx ; num elements for dimension[0]
            imul rdx, 8 ; 8 bytes per element
            mov rdi, rdx ; num bytes to allocate
            call malloc ; allocates edi bytes on heap and stores pointer in rax
            push rax ; __ptr
         ; LHS
         ; Member Accessor Assignment
            ; LHS
               ; This keyword
                  push qword [rbp - 8] ; __this
            ; RHS
               push qword [.__field____main____Vector__Vector____data] ; 
            pop rdi ; rhs
            pop rbx ; lhs
         pop rdx ; rhs value
         mov qword [rbx + 8*rdi], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------------
         mov rax, qword [rbp - 8] ; __this
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__ctor____main____Vector__Vector____Vector__int:
         ; End Constructor Declaration - __ctor____main____Vector__Vector____Vector__int
;---------------------------------------------------------------------------------------

;---------------------------------------------------------------------------------------
         ; Method Declaration - Vector<:Vector<:char:>:>::pushBack(Vector<:char:>) -> void
         jmp .__end__method____main____Vector__Vector____pushBack__Vector
         .__method____main____Vector__Vector____pushBack__Vector:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         sub rsp, 32 ; space for local variables (16-byte aligned)
         ; [rbp - 8] - this - Reference to 'this' object instance
         mov rdx, qword [rbp + 16] ; param passed 'this'
         mov qword [rbp - 8], rdx ; save this to a local
         ; [rbp - 16] - Vector<:char:>[] nData (<unset-scope-name>)
         ; [rbp - 24] - int i (<unset-scope-name>)
         ; Parameters
         ; Param: val [rbp + 24] (__main____Vector__Vector__pushBack__val)
         ; Body
;---------------------------------------------------------------------------------
         ; Code Block
;------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Greater Than or Equal to
            ; LHS
               ; Addition - int, int
                  ; LHS
                     ; Member Accessor
                        ; LHS
                           ; This keyword
                              push qword [rbp - 8] ; __this
                        ; RHS
                           push qword [.__field____main____Vector__Vector____size] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                  ; RHS
                     ; Int Literal
                        mov rax, 1
                        push rax
                  pop rdx ; rhs
                  pop rax ; lhs
                  add rax, rdx
                  push rax
            ; RHS
               ; Member Accessor
                  ; LHS
                     ; This keyword
                        push qword [rbp - 8] ; __this
                  ; RHS
                     push qword [.__field____main____Vector__Vector____capacity] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            pop rdx ; rhs
            pop rax ; lhs
            cmp rax, rdx
            setge al
            movzx eax, al
            push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__39 ; jump to end
         ; Body
;------------------------------------------------------------------------
         ; Code Block
            ; Assignment - '='
               ; RHS
                  ; Multiplication - int, int
                     ; LHS
                        ; Member Accessor
                           ; LHS
                              ; This keyword
                                 push qword [rbp - 8] ; __this
                           ; RHS
                              push qword [.__field____main____Vector__Vector____capacity] ; stored index associated with field that is being accessed
                           pop rdx ; rhs
                           pop rax ; lhs
                           push qword [rax + 8*rdx] ; lhs.rhs
                     ; RHS
                        ; Int Literal
                           mov rax, 2
                           push rax
                     pop rdx
                     pop rax
                     imul rax, rdx
                     push rax
               ; LHS
                  ; Member Accessor Assignment
                     ; LHS
                        ; This keyword
                           push qword [rbp - 8] ; __this
                     ; RHS
                        push qword [.__field____main____Vector__Vector____capacity] ; 
                     pop rdi ; rhs
                     pop rbx ; lhs
               pop rdx ; rhs value
               mov qword [rbx + 8*rdi], rdx
               push rdx
            ; Statement results can be ignored
            pop rdx
            ; Assignment - '='
               ; RHS
                  ; Array Allocator
                     ; Member Accessor
                        ; LHS
                           ; This keyword
                              push qword [rbp - 8] ; __this
                        ; RHS
                           push qword [.__field____main____Vector__Vector____capacity] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                     pop rdx ; num elements for dimension[0]
                     imul rdx, 8 ; 8 bytes per element
                     mov rdi, rdx ; num bytes to allocate
                     call malloc ; allocates edi bytes on heap and stores pointer in rax
                     push rax ; __ptr
               ; LHS
                  ; Variable Declaration - nData
                     mov rax, qword [rbp - 16]  ; __main____Vector__Vector__pushBack__block__38__if__39__block__40__nData
               pop rdx ; rhs value
               mov qword [rbp - 16], rdx
               push rdx
            ; Statement results can be ignored
            pop rdx
   ;---------------------------------------------------------------------
            ; For-Loop
            ; Init
               ; Assignment - '='
                  ; RHS
                     ; Int Literal
                        mov rax, 0
                        push rax
                  ; LHS
                     ; Variable Declaration - i
                        mov rax, qword [rbp - 24]  ; __main____Vector__Vector__pushBack__block__38__if__39__block__40__for__41__i
                  pop rdx ; rhs value
                  mov qword [rbp - 24], rdx
                  push rdx
               ; Loop init result can be discarded
               pop rax
            jmp .__forcond__41
.__for__41:
               ; Update
                  ; Pre-Increment - int
                     ; RHS
                        ; Identifier - int i
                           push qword [rbp - 24]
                     pop rdx
                     add qword [rbp - 24], 1
                     mov rax, qword [rbp - 24]
                     push rax ; push result
                  ; Loop update result can be discarded
                  pop rax
.__forcond__41:
               ; Condition
                  ; Less Than
                     ; LHS
                        ; Identifier - int i
                           push qword [rbp - 24]
                     ; RHS
                        ; Member Accessor
                           ; LHS
                              ; This keyword
                                 push qword [rbp - 8] ; __this
                           ; RHS
                              push qword [.__field____main____Vector__Vector____size] ; stored index associated with field that is being accessed
                           pop rdx ; rhs
                           pop rax ; lhs
                           push qword [rax + 8*rdx] ; lhs.rhs
                     pop rdx ; rhs
                     pop rax ; lhs
                     cmp rax, rdx
                     setl al
                     movzx eax, al
                     push rax
                  pop rax ; __cond
                  cmp rax, 0 ; __cond
                  je .__endfor__41
               ; Body
         ;---------------------------------------------------------------
                  ; Code Block
                     ; Assignment - '='
                        ; RHS
                           ; Subscript
                              ; LHS
                                 ; Member Accessor
                                    ; LHS
                                       ; This keyword
                                          push qword [rbp - 8] ; __this
                                    ; RHS
                                       push qword [.__field____main____Vector__Vector____data] ; stored index associated with field that is being accessed
                                    pop rdx ; rhs
                                    pop rax ; lhs
                                    push qword [rax + 8*rdx] ; lhs.rhs
                              ; OFFSET
                                 ; Identifier - int i
                                    push qword [rbp - 24]
                              pop rdx ; __offset
                              pop rax ; __pointer
                              push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
                        ; LHS
                           ; Subscript assignment
                              ; LHS
                                 ; Identifier - Vector<:char:>[] nData
                                    push qword [rbp - 16]
                              ; OFFSET
                                 ; Identifier - int i
                                    push qword [rbp - 24]
                              pop rdi ; __offset
                              pop rbx ; __pointer
                        pop rdx ; rhs value
                        mov qword [rbx + 8*rdi], rdx
                        push rdx
                     ; Statement results can be ignored
                     pop rdx
         ;---------------------------------------------------------------
               ; Repeat
jmp .__for__41
               ; End of For
.__endfor__41:
   ;---------------------------------------------------------------------
            ; Free Operator
               ; RHS
                  ; Member Accessor
                     ; LHS
                        ; This keyword
                           push qword [rbp - 8] ; __this
                     ; RHS
                        push qword [.__field____main____Vector__Vector____data] ; stored index associated with field that is being accessed
                     pop rdx ; rhs
                     pop rax ; lhs
                     push qword [rax + 8*rdx] ; lhs.rhs
               ; Free pointer
               pop rdi   ; pointer
               call free ; free the pointer
               push rax  ; undefined return value
            ; Statement results can be ignored
            pop rdx
            ; Assignment - '='
               ; RHS
                  ; Identifier - Vector<:char:>[] nData
                     push qword [rbp - 16]
               ; LHS
                  ; Member Accessor Assignment
                     ; LHS
                        ; This keyword
                           push qword [rbp - 8] ; __this
                     ; RHS
                        push qword [.__field____main____Vector__Vector____data] ; 
                     pop rdi ; rhs
                     pop rbx ; lhs
               pop rdx ; rhs value
               mov qword [rbx + 8*rdi], rdx
               push rdx
            ; Statement results can be ignored
            pop rdx
;------------------------------------------------------------------------
         jmp .__endif__39 ; jump to end of condition chain
         ; End of if
.__endif__39:
;------------------------------------------------------------------------------
         ; Assignment - '='
         ; RHS
         ; Identifier - Vector<:char:> val
            push qword [rbp - -24]
         ; LHS
         ; Subscript assignment
            ; LHS
               ; Member Accessor
                  ; LHS
                     ; This keyword
                        push qword [rbp - 8] ; __this
                  ; RHS
                     push qword [.__field____main____Vector__Vector____data] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            ; OFFSET
               ; Member Accessor
                  ; LHS
                     ; This keyword
                        push qword [rbp - 8] ; __this
                  ; RHS
                     push qword [.__field____main____Vector__Vector____size] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            pop rdi ; __offset
            pop rbx ; __pointer
         pop rdx ; rhs value
         mov qword [rbx + 8*rdi], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Pre-Increment - int
         ; RHS
         ; Member Accessor
            ; LHS
               ; This keyword
                  push qword [rbp - 8] ; __this
            ; RHS
               push qword [.__field____main____Vector__Vector____size] ; stored index associated with field that is being accessed
            pop rdx ; rhs
            pop rax ; lhs
            push qword [rax + 8*rdx] ; lhs.rhs
         pop rdx
         ; LHS
         ; Member Accessor Assignment
            ; LHS
               ; This keyword
                  push qword [rbp - 8] ; __this
            ; RHS
               push qword [.__field____main____Vector__Vector____size] ; size
            pop rdi ; rhs
            pop rbx ; lhs
            mov rax, qword [rbx + 8*rdi]
            add rax, 1
            mov qword [rbx + 8*rdi], rax
         push rax ; push result
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__method____main____Vector__Vector____pushBack__Vector:
         ; End Method Declaration - .__method____main____Vector__Vector____pushBack__Vector
;---------------------------------------------------------------------------------------

;---------------------------------------------------------------------------------------
         ; Method Declaration - Vector<:Vector<:char:>:>::popBack() -> Vector<:char:>
         jmp .__end__method____main____Vector__Vector____popBack
         .__method____main____Vector__Vector____popBack:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         sub rsp, 16 ; space for local variables (16-byte aligned)
         ; [rbp - 8] - this - Reference to 'this' object instance
         mov rdx, qword [rbp + 16] ; param passed 'this'
         mov qword [rbp - 8], rdx ; save this to a local
         ; Parameters
         ; Body
;---------------------------------------------------------------------------------
         ; Code Block
         ; Return
         ; Subscript
         ; LHS
            ; Member Accessor
               ; LHS
                  ; This keyword
                     push qword [rbp - 8] ; __this
               ; RHS
                  push qword [.__field____main____Vector__Vector____data] ; stored index associated with field that is being accessed
               pop rdx ; rhs
               pop rax ; lhs
               push qword [rax + 8*rdx] ; lhs.rhs
         ; OFFSET
            ; Pre-Decrement - int
               ; RHS
                  ; Member Accessor
                     ; LHS
                        ; This keyword
                           push qword [rbp - 8] ; __this
                     ; RHS
                        push qword [.__field____main____Vector__Vector____size] ; stored index associated with field that is being accessed
                     pop rdx ; rhs
                     pop rax ; lhs
                     push qword [rax + 8*rdx] ; lhs.rhs
               pop rdx
               ; LHS
                  ; Member Accessor Assignment
                     ; LHS
                        ; This keyword
                           push qword [rbp - 8] ; __this
                     ; RHS
                        push qword [.__field____main____Vector__Vector____size] ; size
                     pop rdi ; rhs
                     pop rbx ; lhs
                     mov rax, qword [rbx + 8*rdi]
                     sub rax, 1
                     mov qword [rbx + 8*rdi], rax
               push rax ; push result
         pop rdx ; __offset
         pop rax ; __pointer
         push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
         pop rax ; return value (Vector<:char:>)
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
;---------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__method____main____Vector__Vector____popBack:
         ; End Method Declaration - .__method____main____Vector__Vector____popBack
;---------------------------------------------------------------------------------------

;---------------------------------------------------------------------------------------
         ; Method Declaration - Vector<:Vector<:char:>:>::clear() -> void
         jmp .__end__method____main____Vector__Vector____clear
         .__method____main____Vector__Vector____clear:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         sub rsp, 16 ; space for local variables (16-byte aligned)
         ; [rbp - 8] - this - Reference to 'this' object instance
         mov rdx, qword [rbp + 16] ; param passed 'this'
         mov qword [rbp - 8], rdx ; save this to a local
         ; Parameters
         ; Body
;---------------------------------------------------------------------------------
         ; Code Block
;------------------------------------------------------------------------------
         ; While-Loop
.__while__45:
         ; Condition
         ; Greater Than
            ; LHS
               ; Member Accessor
                  ; LHS
                     ; This keyword
                        push qword [rbp - 8] ; __this
                  ; RHS
                     push qword [.__field____main____Vector__Vector____size] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            ; RHS
               ; Int Literal
                  mov rax, 0
                  push rax
            pop rdx ; rhs
            pop rax ; lhs
            cmp rax, rdx
            setg al
            movzx eax, al
            push rax
         pop rax ; __cond
         cmp rax, 0 ; __cond
         je .__endwhile__45
         ; Body
         ; Method Call - Vector<:Vector<:char:>:>::popBack() -> Vector<:char:>
            ; Make space for 0 arg(s) and object parameter
            sub rsp, 8
            ; LHS
               ; This keyword
                  push qword [rbp - 8] ; __this
               pop rax ; object parameter
               mov qword [rsp + 0], rax ; place as first parameter
            ; RHS
            ; Arguments
            call .__method____main____Vector__Vector____popBack
            ; Remove args
            add rsp, 8
            ; Push return value
            push rax
         ; Statement results can be ignored
         pop rdx
         jmp .__while__45
         ; End of While
.__endwhile__45:
;------------------------------------------------------------------------------
;---------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__method____main____Vector__Vector____clear:
         ; End Method Declaration - .__method____main____Vector__Vector____clear
;---------------------------------------------------------------------------------------

;---------------------------------------------------------------------------------------
         ; Method Declaration - Vector<:Vector<:char:>:>::get(int) -> Vector<:char:>
         jmp .__end__method____main____Vector__Vector____get__int
         .__method____main____Vector__Vector____get__int:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         sub rsp, 16 ; space for local variables (16-byte aligned)
         ; [rbp - 8] - this - Reference to 'this' object instance
         mov rdx, qword [rbp + 16] ; param passed 'this'
         mov qword [rbp - 8], rdx ; save this to a local
         ; Parameters
         ; Param: index [rbp + 24] (__main____Vector__Vector__get__index)
         ; Body
;---------------------------------------------------------------------------------
         ; Code Block
         ; Return
         ; Subscript
         ; LHS
            ; Member Accessor
               ; LHS
                  ; This keyword
                     push qword [rbp - 8] ; __this
               ; RHS
                  push qword [.__field____main____Vector__Vector____data] ; stored index associated with field that is being accessed
               pop rdx ; rhs
               pop rax ; lhs
               push qword [rax + 8*rdx] ; lhs.rhs
         ; OFFSET
            ; Identifier - int index
               push qword [rbp - -24]
         pop rdx ; __offset
         pop rax ; __pointer
         push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
         pop rax ; return value (Vector<:char:>)
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
;---------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__method____main____Vector__Vector____get__int:
         ; End Method Declaration - .__method____main____Vector__Vector____get__int
;---------------------------------------------------------------------------------------

;---------------------------------------------------------------------------------------
         ; Method Declaration - Vector<:Vector<:char:>:>::set(int, Vector<:char:>) -> void
         jmp .__end__method____main____Vector__Vector____set__int__Vector
         .__method____main____Vector__Vector____set__int__Vector:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         sub rsp, 16 ; space for local variables (16-byte aligned)
         ; [rbp - 8] - this - Reference to 'this' object instance
         mov rdx, qword [rbp + 16] ; param passed 'this'
         mov qword [rbp - 8], rdx ; save this to a local
         ; Parameters
         ; Param: index [rbp + 24] (__main____Vector__Vector__set__index)
         ; Param: value [rbp + 32] (__main____Vector__Vector__set__value)
         ; Body
;---------------------------------------------------------------------------------
         ; Code Block
         ; Assignment - '='
         ; RHS
         ; Identifier - Vector<:char:> value
            push qword [rbp - -32]
         ; LHS
         ; Subscript assignment
            ; LHS
               ; Member Accessor
                  ; LHS
                     ; This keyword
                        push qword [rbp - 8] ; __this
                  ; RHS
                     push qword [.__field____main____Vector__Vector____data] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            ; OFFSET
               ; Identifier - int index
                  push qword [rbp - -24]
            pop rdi ; __offset
            pop rbx ; __pointer
         pop rdx ; rhs value
         mov qword [rbx + 8*rdi], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__method____main____Vector__Vector____set__int__Vector:
         ; End Method Declaration - .__method____main____Vector__Vector____set__int__Vector
;---------------------------------------------------------------------------------------

.__endclass____main____Vector__Vector:
         ; End Class Declaration - __main____Vector__Vector
; ==========================================================================================

         ; End Class Template - 
; ================================================================================================

; ================================================================================================
         ; Function Template - 
         ; Instances:
         ; End Function Template - 
; ================================================================================================

; ================================================================================================
         ; Function Template - 
         ; Instances:
         ; End Function Template - 
; ================================================================================================

; ================================================================================================
         ; Function Declaration - strlen(char[]) -> int
         ; Skip over function declaration
         jmp .__end____main____strlen__char__1
.__main____strlen__char__1:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 16
         ; Parameters
         ; Param: str [rbp + 16]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         ; [rbp - 8] - int size (<unset-scope-name>)

         ; Body
;------------------------------------------------------------------------------------------
         ; Code Block
;---------------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Equal
         ; LHS
         ; Identifier - char[] str
         push qword [rbp - -16]
         ; RHS
         ; Null Literal
         push 0
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         sete al
         movzx eax, al
         push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__49 ; jump to end
         ; Body
         ; Return
         ; Negative - int
         ; RHS
         ; Int Literal
            mov rax, 1
            push rax
         pop rdx
         ; val = 0 - val
         mov rax, 0
         sub rax, rdx
         push rax ; push result
         pop rax ; return value (int)
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         jmp .__endif__49 ; jump to end of condition chain
         ; End of if
.__endif__49:
;---------------------------------------------------------------------------------------
         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 0
         push rax
         ; LHS
         ; Variable Declaration - size
         mov rax, qword [rbp - 8]  ; __main__strlen__block__48__size
         pop rdx ; rhs value
         mov qword [rbp - 8], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------------------
         ; While-Loop
.__while__50:
         ; Condition
         ; Not Equal
         ; LHS
         ; Subscript
         ; LHS
            ; Identifier - char[] str
               push qword [rbp - -16]
         ; OFFSET
            ; Post-Increment
               mov rax, qword [rbp - 8]
               add qword [rbp - 8], 1
               push rax
         pop rdx ; __offset
         pop rax ; __pointer
         mov al, byte [rax + rdx] ; pointer + sizeof(data_t) * offset
         movzx rax, al ; zero extend because we need to push 64bit to stack
         push rax ; push char onto stack
         ; RHS
         ; Char Literal
         push 0 ; \0
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setne al
         movzx eax, al
         push rax
         pop rax ; __cond
         cmp rax, 0 ; __cond
         je .__endwhile__50
         ; Body
         jmp .__while__50
         ; End of While
.__endwhile__50:
;---------------------------------------------------------------------------------------
         ; Return
         ; Subtraction - int, int
         ; LHS
         ; Identifier - int size
         push qword [rbp - 8]
         ; RHS
         ; Int Literal
         mov rax, 1
         push rax
         pop rdx ; rhs
         pop rax ; lhs
         sub rax, rdx
         push rax
         pop rax ; return value (int)
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
;------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____strlen__char__1:
         ; End Function Declaration - strlen(char[]) -> int
; ================================================================================================

; ================================================================================================
         ; Function Declaration - strcmp(char[], char[]) -> int
         ; Skip over function declaration
         jmp .__end____main____strcmp__char__1__char__1
.__main____strcmp__char__1__char__1:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 32
         ; Parameters
         ; Param: a [rbp + 16]
         ; Param: b [rbp + 24]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         ; [rbp - 8] - int asize (<unset-scope-name>)
         ; [rbp - 16] - int bsize (<unset-scope-name>)
         ; [rbp - 24] - int i (<unset-scope-name>)

         ; Body
;------------------------------------------------------------------------------------------
         ; Code Block
         ; Assignment - '='
         ; RHS
         ; Function Call - strlen(char[]) -> int
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Identifier - char[] a
            push qword [rbp - -16]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call strlen(char[])
         call .__main____strlen__char__1
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - asize
         mov rax, qword [rbp - 8]  ; __main__strcmp__block__51__asize
         pop rdx ; rhs value
         mov qword [rbp - 8], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - strlen(char[]) -> int
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Identifier - char[] b
            push qword [rbp - -24]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call strlen(char[])
         call .__main____strlen__char__1
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - bsize
         mov rax, qword [rbp - 16]  ; __main__strcmp__block__51__bsize
         pop rdx ; rhs value
         mov qword [rbp - 16], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Not Equal
         ; LHS
         ; Identifier - int asize
         push qword [rbp - 8]
         ; RHS
         ; Identifier - int bsize
         push qword [rbp - 16]
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setne al
         movzx eax, al
         push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__52 ; jump to end
         ; Body
         ; Return
         ; Int Literal
         mov rax, 0
         push rax
         pop rax ; return value (int)
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         jmp .__endif__52 ; jump to end of condition chain
         ; End of if
.__endif__52:
;---------------------------------------------------------------------------------------
;---------------------------------------------------------------------------------------
         ; For-Loop
         ; Init
         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 0
         push rax
         ; LHS
         ; Variable Declaration - i
         mov rax, qword [rbp - 24]  ; __main__strcmp__block__51__for__53__i
         pop rdx ; rhs value
         mov qword [rbp - 24], rdx
         push rdx
         ; Loop init result can be discarded
         pop rax
         jmp .__forcond__53
.__for__53:
         ; Update
         ; Pre-Increment - int
         ; RHS
         ; Identifier - int i
         push qword [rbp - 24]
         pop rdx
         add qword [rbp - 24], 1
         mov rax, qword [rbp - 24]
         push rax ; push result
         ; Loop update result can be discarded
         pop rax
.__forcond__53:
         ; Condition
         ; Less Than
         ; LHS
         ; Identifier - int i
         push qword [rbp - 24]
         ; RHS
         ; Identifier - int asize
         push qword [rbp - 8]
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setl al
         movzx eax, al
         push rax
         pop rax ; __cond
         cmp rax, 0 ; __cond
         je .__endfor__53
         ; Body
;---------------------------------------------------------------------------------
         ; Code Block
;------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Not Equal
            ; LHS
               ; Subscript
                  ; LHS
                     ; Identifier - char[] a
                        push qword [rbp - -16]
                  ; OFFSET
                     ; Identifier - int i
                        push qword [rbp - 24]
                  pop rdx ; __offset
                  pop rax ; __pointer
                  mov al, byte [rax + rdx] ; pointer + sizeof(data_t) * offset
                  movzx rax, al ; zero extend because we need to push 64bit to stack
                  push rax ; push char onto stack
            ; RHS
               ; Subscript
                  ; LHS
                     ; Identifier - char[] b
                        push qword [rbp - -24]
                  ; OFFSET
                     ; Identifier - int i
                        push qword [rbp - 24]
                  pop rdx ; __offset
                  pop rax ; __pointer
                  mov al, byte [rax + rdx] ; pointer + sizeof(data_t) * offset
                  movzx rax, al ; zero extend because we need to push 64bit to stack
                  push rax ; push char onto stack
            pop rdx ; rhs
            pop rax ; lhs
            cmp rax, rdx
            setne al
            movzx eax, al
            push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__55 ; jump to end
         ; Body
;------------------------------------------------------------------------
         ; Code Block
            ; Return
               ; Int Literal
                  mov rax, 0
                  push rax
               pop rax ; return value (int)
               ; Clean up stack and return
               mov rsp, rbp ; remove local vars + unpopped pushes
               pop rbp
               ret
;------------------------------------------------------------------------
         jmp .__endif__55 ; jump to end of condition chain
         ; End of if
.__endif__55:
;------------------------------------------------------------------------------
;---------------------------------------------------------------------------------
         ; Repeat
jmp .__for__53
         ; End of For
.__endfor__53:
;---------------------------------------------------------------------------------------
         ; Return
         ; Int Literal
         mov rax, 1
         push rax
         pop rax ; return value (int)
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
;------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____strcmp__char__1__char__1:
         ; End Function Declaration - strcmp(char[], char[]) -> int
; ================================================================================================

; ================================================================================================
         ; Function Declaration - substr(char[], int, int) -> char[]
         ; Skip over function declaration
         jmp .__end____main____substr__char__1__int__int
.__main____substr__char__1__int__int:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 16
         ; Parameters
         ; Param: a [rbp + 16]
         ; Param: start [rbp + 24]
         ; Param: end [rbp + 32]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         ; [rbp - 8] - char[] res (<unset-scope-name>)
         ; [rbp - 16] - int i (<unset-scope-name>)

         ; Body
;------------------------------------------------------------------------------------------
         ; Code Block
         ; Assignment - '='
         ; RHS
         ; Array Allocator
         ; Addition - int, int
         ; LHS
         ; Subtraction - int, int
            ; LHS
               ; Identifier - int end
                  push qword [rbp - -32]
            ; RHS
               ; Identifier - int start
                  push qword [rbp - -24]
            pop rdx ; rhs
            pop rax ; lhs
            sub rax, rdx
            push rax
         ; RHS
         ; Int Literal
            mov rax, 1
            push rax
         pop rdx ; rhs
         pop rax ; lhs
         add rax, rdx
         push rax
         pop rdx ; num elements for dimension[0]
         mov rdi, rdx ; num bytes to allocate (1 byte per element)
         call malloc ; allocates edi bytes on heap and stores pointer in rax
         push rax ; __ptr
         ; LHS
         ; Variable Declaration - res
         mov rax, qword [rbp - 8]  ; __main__substr__block__57__res
         pop rdx ; rhs value
         mov qword [rbp - 8], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------------------
         ; For-Loop
         ; Init
         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 0
         push rax
         ; LHS
         ; Variable Declaration - i
         mov rax, qword [rbp - 16]  ; __main__substr__block__57__for__58__i
         pop rdx ; rhs value
         mov qword [rbp - 16], rdx
         push rdx
         ; Loop init result can be discarded
         pop rax
         jmp .__forcond__58
.__for__58:
         ; Update
         ; Pre-Increment - int
         ; RHS
         ; Identifier - int i
         push qword [rbp - 16]
         pop rdx
         add qword [rbp - 16], 1
         mov rax, qword [rbp - 16]
         push rax ; push result
         ; Loop update result can be discarded
         pop rax
.__forcond__58:
         ; Condition
         ; Less Than
         ; LHS
         ; Identifier - int i
         push qword [rbp - 16]
         ; RHS
         ; Subtraction - int, int
         ; LHS
            ; Identifier - int end
               push qword [rbp - -32]
         ; RHS
            ; Identifier - int start
               push qword [rbp - -24]
         pop rdx ; rhs
         pop rax ; lhs
         sub rax, rdx
         push rax
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setl al
         movzx eax, al
         push rax
         pop rax ; __cond
         cmp rax, 0 ; __cond
         je .__endfor__58
         ; Body
;---------------------------------------------------------------------------------
         ; Code Block
         ; Assignment - '='
         ; RHS
         ; Subscript
            ; LHS
               ; Identifier - char[] a
                  push qword [rbp - -16]
            ; OFFSET
               ; Addition - int, int
                  ; LHS
                     ; Identifier - int i
                        push qword [rbp - 16]
                  ; RHS
                     ; Identifier - int start
                        push qword [rbp - -24]
                  pop rdx ; rhs
                  pop rax ; lhs
                  add rax, rdx
                  push rax
            pop rdx ; __offset
            pop rax ; __pointer
            mov al, byte [rax + rdx] ; pointer + sizeof(data_t) * offset
            movzx rax, al ; zero extend because we need to push 64bit to stack
            push rax ; push char onto stack
         ; LHS
         ; Subscript assignment
            ; LHS
               ; Identifier - char[] res
                  push qword [rbp - 8]
            ; OFFSET
               ; Identifier - int i
                  push qword [rbp - 16]
            pop rdi ; __offset
            pop rbx ; __pointer
         pop rdx ; rhs value
         mov byte [rbx + rdi], dl
         push rdx
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------------
         ; Repeat
jmp .__for__58
         ; End of For
.__endfor__58:
;---------------------------------------------------------------------------------------
         ; Assignment - '='
         ; RHS
         ; Char Literal
         push 0 ; \0
         ; LHS
         ; Subscript assignment
         ; LHS
         ; Identifier - char[] res
         push qword [rbp - 8]
         ; OFFSET
         ; Subtraction - int, int
         ; LHS
            ; Identifier - int end
               push qword [rbp - -32]
         ; RHS
            ; Identifier - int start
               push qword [rbp - -24]
         pop rdx ; rhs
         pop rax ; lhs
         sub rax, rdx
         push rax
         pop rdi ; __offset
         pop rbx ; __pointer
         pop rdx ; rhs value
         mov byte [rbx + rdi], dl
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Return
         ; Identifier - char[] res
         push qword [rbp - 8]
         pop rax ; return value (char[])
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
;------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____substr__char__1__int__int:
         ; End Function Declaration - substr(char[], int, int) -> char[]
; ================================================================================================

; ================================================================================================
         ; Function Declaration - first_index_of(char[], char) -> int
         ; Skip over function declaration
         jmp .__end____main____first_index_of__char__1__char
.__main____first_index_of__char__1__char:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 16
         ; Parameters
         ; Param: arr [rbp + 16]
         ; Param: c [rbp + 24]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         ; [rbp - 8] - int size (<unset-scope-name>)
         ; [rbp - 16] - int i (<unset-scope-name>)

         ; Body
;------------------------------------------------------------------------------------------
         ; Code Block
         ; Assignment - '='
         ; RHS
         ; Function Call - strlen(char[]) -> int
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Identifier - char[] arr
            push qword [rbp - -16]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call strlen(char[])
         call .__main____strlen__char__1
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - size
         mov rax, qword [rbp - 8]  ; __main__first_index_of__block__60__size
         pop rdx ; rhs value
         mov qword [rbp - 8], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------------------
         ; For-Loop
         ; Init
         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 0
         push rax
         ; LHS
         ; Variable Declaration - i
         mov rax, qword [rbp - 16]  ; __main__first_index_of__block__60__for__61__i
         pop rdx ; rhs value
         mov qword [rbp - 16], rdx
         push rdx
         ; Loop init result can be discarded
         pop rax
         jmp .__forcond__61
.__for__61:
         ; Update
         ; Pre-Increment - int
         ; RHS
         ; Identifier - int i
         push qword [rbp - 16]
         pop rdx
         add qword [rbp - 16], 1
         mov rax, qword [rbp - 16]
         push rax ; push result
         ; Loop update result can be discarded
         pop rax
.__forcond__61:
         ; Condition
         ; Less Than
         ; LHS
         ; Identifier - int i
         push qword [rbp - 16]
         ; RHS
         ; Identifier - int size
         push qword [rbp - 8]
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setl al
         movzx eax, al
         push rax
         pop rax ; __cond
         cmp rax, 0 ; __cond
         je .__endfor__61
         ; Body
;---------------------------------------------------------------------------------
         ; Code Block
;------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Equal
            ; LHS
               ; Subscript
                  ; LHS
                     ; Identifier - char[] arr
                        push qword [rbp - -16]
                  ; OFFSET
                     ; Identifier - int i
                        push qword [rbp - 16]
                  pop rdx ; __offset
                  pop rax ; __pointer
                  mov al, byte [rax + rdx] ; pointer + sizeof(data_t) * offset
                  movzx rax, al ; zero extend because we need to push 64bit to stack
                  push rax ; push char onto stack
            ; RHS
               ; Identifier - char c
                  mov al, byte [rbp - -24]
                  movzx rax, al
                  push rax
            pop rdx ; rhs
            pop rax ; lhs
            cmp rax, rdx
            sete al
            movzx eax, al
            push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__63 ; jump to end
         ; Body
         ; Return
            ; Identifier - int i
               push qword [rbp - 16]
            pop rax ; return value (int)
            ; Clean up stack and return
            mov rsp, rbp ; remove local vars + unpopped pushes
            pop rbp
            ret
         jmp .__endif__63 ; jump to end of condition chain
         ; End of if
.__endif__63:
;------------------------------------------------------------------------------
;---------------------------------------------------------------------------------
         ; Repeat
jmp .__for__61
         ; End of For
.__endfor__61:
;---------------------------------------------------------------------------------------
         ; Return
         ; Negative - int
         ; RHS
         ; Int Literal
         mov rax, 1
         push rax
         pop rdx
         ; val = 0 - val
         mov rax, 0
         sub rax, rdx
         push rax ; push result
         pop rax ; return value (int)
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
;------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____first_index_of__char__1__char:
         ; End Function Declaration - first_index_of(char[], char) -> int
; ================================================================================================

; ================================================================================================
         ; Function Declaration - split(char[], char) -> Vector<:char[]:>
         ; Skip over function declaration
         jmp .__end____main____split__char__1__char
.__main____split__char__1__char:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 64
         ; Parameters
         ; Param: str [rbp + 16]
         ; Param: delim [rbp + 24]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         ; [rbp - 8] - Vector<:char[]:> tokens (<unset-scope-name>)
         ; [rbp - 16] - int size (<unset-scope-name>)
         ; [rbp - 24] - int i (<unset-scope-name>)
         ; [rbp - 32] - int j (<unset-scope-name>)
         ; [rbp - 40] - int count (<unset-scope-name>)
         ; [rbp - 48] - int k (<unset-scope-name>)
         ; [rbp - 56] - int k (<unset-scope-name>)

         ; Body
;------------------------------------------------------------------------------------------
         ; Code Block
         ; Assignment - '='
         ; RHS
         ; Constructor Call - Vector<:char[]:>::Vector() -> Vector<:char[]:>
         ; Make space for 0 arg(s)
         sub rsp, 0
         ; Arguments
         ; Call Vector<:char[]:>::Vector()
         call .__ctor____main____Vector__char__1____Vector
         ; Remove args
         add rsp, 0
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - tokens
         mov rax, qword [rbp - 8]  ; __main__split__block__64__tokens
         pop rdx ; rhs value
         mov qword [rbp - 8], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - strlen(char[]) -> int
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Identifier - char[] str
            push qword [rbp - -16]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call strlen(char[])
         call .__main____strlen__char__1
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - size
         mov rax, qword [rbp - 16]  ; __main__split__block__64__size
         pop rdx ; rhs value
         mov qword [rbp - 16], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 0
         push rax
         ; LHS
         ; Variable Declaration - i
         mov rax, qword [rbp - 24]  ; __main__split__block__64__i
         pop rdx ; rhs value
         mov qword [rbp - 24], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 0
         push rax
         ; LHS
         ; Variable Declaration - j
         mov rax, qword [rbp - 32]  ; __main__split__block__64__j
         pop rdx ; rhs value
         mov qword [rbp - 32], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------------------
         ; While-Loop
.__while__65:
         ; Condition
         ; Less Than
         ; LHS
         ; Identifier - int i
         push qword [rbp - 24]
         ; RHS
         ; Identifier - int size
         push qword [rbp - 16]
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setl al
         movzx eax, al
         push rax
         pop rax ; __cond
         cmp rax, 0 ; __cond
         je .__endwhile__65
         ; Body
;---------------------------------------------------------------------------------
         ; Code Block
;------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Not Equal
            ; LHS
               ; Subscript
                  ; LHS
                     ; Identifier - char[] str
                        push qword [rbp - -16]
                  ; OFFSET
                     ; Identifier - int i
                        push qword [rbp - 24]
                  pop rdx ; __offset
                  pop rax ; __pointer
                  mov al, byte [rax + rdx] ; pointer + sizeof(data_t) * offset
                  movzx rax, al ; zero extend because we need to push 64bit to stack
                  push rax ; push char onto stack
            ; RHS
               ; Identifier - char delim
                  mov al, byte [rbp - -24]
                  movzx rax, al
                  push rax
            pop rdx ; rhs
            pop rax ; lhs
            cmp rax, rdx
            setne al
            movzx eax, al
            push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__67 ; jump to end
         ; Body
;------------------------------------------------------------------------
         ; Code Block
            ; Assignment - '='
               ; RHS
                  ; Int Literal
                     mov rax, 0
                     push rax
               ; LHS
                  ; Variable Declaration - count
                     mov rax, qword [rbp - 40]  ; __main__split__block__64__while__65__block__66__if__67__block__68__count
               pop rdx ; rhs value
               mov qword [rbp - 40], rdx
               push rdx
            ; Statement results can be ignored
            pop rdx
            ; Assignment - '='
               ; RHS
                  ; Identifier - int i
                     push qword [rbp - 24]
               ; LHS
                  ; Variable Declaration - k
                     mov rax, qword [rbp - 48]  ; __main__split__block__64__while__65__block__66__if__67__block__68__k
               pop rdx ; rhs value
               mov qword [rbp - 48], rdx
               push rdx
            ; Statement results can be ignored
            pop rdx
   ;---------------------------------------------------------------------
            ; While-Loop
.__while__69:
               ; Condition
                  ; Less Than
                     ; LHS
                        ; Identifier - int k
                           push qword [rbp - 48]
                     ; RHS
                        ; Identifier - int size
                           push qword [rbp - 16]
                     pop rdx ; rhs
                     pop rax ; lhs
                     cmp rax, rdx
                     setl al
                     movzx eax, al
                     push rax
                  pop rax ; __cond
                  cmp rax, 0 ; __cond
                  je .__endwhile__69
               ; Body
         ;---------------------------------------------------------------
                  ; If-Statement
                     ; Condition
                        ; Not Equal
                           ; LHS
                              ; Subscript
                                 ; LHS
                                    ; Identifier - char[] str
                                       push qword [rbp - -16]
                                 ; OFFSET
                                    ; Post-Increment
                                       mov rax, qword [rbp - 48]
                                       add qword [rbp - 48], 1
                                       push rax
                                 pop rdx ; __offset
                                 pop rax ; __pointer
                                 mov al, byte [rax + rdx] ; pointer + sizeof(data_t) * offset
                                 movzx rax, al ; zero extend because we need to push 64bit to stack
                                 push rax ; push char onto stack
                           ; RHS
                              ; Identifier - char delim
                                 mov al, byte [rbp - -24]
                                 movzx rax, al
                                 push rax
                           pop rdx ; rhs
                           pop rax ; lhs
                           cmp rax, rdx
                           setne al
                           movzx eax, al
                           push rax
                        pop rdx ; __cond
                        cmp rdx, 0 ; ensure condition is true
                        je .__else__70 ; jump to else
                     ; Body
                        ; Pre-Increment - int
                           ; RHS
                              ; Identifier - int count
                                 push qword [rbp - 40]
                           pop rdx
                           add qword [rbp - 40], 1
                           mov rax, qword [rbp - 40]
                           push rax ; push result
                        ; Statement results can be ignored
                        pop rdx
                     jmp .__endif__70 ; jump to end of condition chain
            ;------------------------------------------------------------
                     ; Else-Statement
.__else__70:
                     ; Break out of __while__69
                     jmp .__endwhile__69
            ;------------------------------------------------------------
                     ; End of if
.__endif__70:
         ;---------------------------------------------------------------
               jmp .__while__69
               ; End of While
.__endwhile__69:
   ;---------------------------------------------------------------------
            ; Method Call - Vector<:char[]:>::pushBack(char[]) -> void
               ; Make space for 1 arg(s) and object parameter
               sub rsp, 16
               ; LHS
                  ; Identifier - Vector<:char[]:> tokens
                     push qword [rbp - 8]
                  pop rax ; object parameter
                  mov qword [rsp + 0], rax ; place as first parameter
               ; RHS
               ; Arguments
                  ; Eval arg0
                     ; Array Allocator
                        ; Addition - int, int
                           ; LHS
                              ; Identifier - int count
                                 push qword [rbp - 40]
                           ; RHS
                              ; Int Literal
                                 mov rax, 1
                                 push rax
                           pop rdx ; rhs
                           pop rax ; lhs
                           add rax, rdx
                           push rax
                        pop rdx ; num elements for dimension[0]
                        mov rdi, rdx ; num bytes to allocate (1 byte per element)
                        call malloc ; allocates edi bytes on heap and stores pointer in rax
                        push rax ; __ptr
                  ; Move arg0's result to reverse order position on stack
                  pop rax
                  mov qword [rsp + 8], rax
               call .__method____main____Vector__char__1____pushBack__char__1
               ; Remove args
               add rsp, 16
               ; Push return value
               push rax
            ; Statement results can be ignored
            pop rdx
   ;---------------------------------------------------------------------
            ; For-Loop
            ; Init
               ; Assignment - '='
                  ; RHS
                     ; Int Literal
                        mov rax, 0
                        push rax
                  ; LHS
                     ; Variable Declaration - k
                        mov rax, qword [rbp - 56]  ; __main__split__block__64__while__65__block__66__if__67__block__68__for__71__k
                  pop rdx ; rhs value
                  mov qword [rbp - 56], rdx
                  push rdx
               ; Loop init result can be discarded
               pop rax
            jmp .__forcond__71
.__for__71:
               ; Update
                  ; Pre-Increment - int
                     ; RHS
                        ; Identifier - int k
                           push qword [rbp - 56]
                     pop rdx
                     add qword [rbp - 56], 1
                     mov rax, qword [rbp - 56]
                     push rax ; push result
                  ; Loop update result can be discarded
                  pop rax
.__forcond__71:
               ; Condition
                  ; Less Than
                     ; LHS
                        ; Identifier - int k
                           push qword [rbp - 56]
                     ; RHS
                        ; Identifier - int count
                           push qword [rbp - 40]
                     pop rdx ; rhs
                     pop rax ; lhs
                     cmp rax, rdx
                     setl al
                     movzx eax, al
                     push rax
                  pop rax ; __cond
                  cmp rax, 0 ; __cond
                  je .__endfor__71
               ; Body
         ;---------------------------------------------------------------
                  ; Code Block
                     ; Assignment - '='
                        ; RHS
                           ; Subscript
                              ; LHS
                                 ; Identifier - char[] str
                                    push qword [rbp - -16]
                              ; OFFSET
                                 ; Post-Increment
                                    mov rax, qword [rbp - 24]
                                    add qword [rbp - 24], 1
                                    push rax
                              pop rdx ; __offset
                              pop rax ; __pointer
                              mov al, byte [rax + rdx] ; pointer + sizeof(data_t) * offset
                              movzx rax, al ; zero extend because we need to push 64bit to stack
                              push rax ; push char onto stack
                        ; LHS
                           ; Subscript assignment
                              ; LHS
                                 ; Subscript
                                    ; LHS
                                       ; Member Accessor
                                          ; LHS
                                             ; Identifier - Vector<:char[]:> tokens
                                                push qword [rbp - 8]
                                          ; RHS
                                             push qword [.__field____main____Vector__char__1____data] ; stored index associated with field that is being accessed
                                          pop rdx ; rhs
                                          pop rax ; lhs
                                          push qword [rax + 8*rdx] ; lhs.rhs
                                    ; OFFSET
                                       ; Identifier - int j
                                          push qword [rbp - 32]
                                    pop rdx ; __offset
                                    pop rax ; __pointer
                                    push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
                              ; OFFSET
                                 ; Identifier - int k
                                    push qword [rbp - 56]
                              pop rdi ; __offset
                              pop rbx ; __pointer
                        pop rdx ; rhs value
                        mov byte [rbx + rdi], dl
                        push rdx
                     ; Statement results can be ignored
                     pop rdx
         ;---------------------------------------------------------------
               ; Repeat
jmp .__for__71
               ; End of For
.__endfor__71:
   ;---------------------------------------------------------------------
            ; Assignment - '='
               ; RHS
                  ; Char Literal
                     push 0 ; \0
               ; LHS
                  ; Subscript assignment
                     ; LHS
                        ; Subscript
                           ; LHS
                              ; Member Accessor
                                 ; LHS
                                    ; Identifier - Vector<:char[]:> tokens
                                       push qword [rbp - 8]
                                 ; RHS
                                    push qword [.__field____main____Vector__char__1____data] ; stored index associated with field that is being accessed
                                 pop rdx ; rhs
                                 pop rax ; lhs
                                 push qword [rax + 8*rdx] ; lhs.rhs
                           ; OFFSET
                              ; Identifier - int j
                                 push qword [rbp - 32]
                           pop rdx ; __offset
                           pop rax ; __pointer
                           push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
                     ; OFFSET
                        ; Identifier - int count
                           push qword [rbp - 40]
                     pop rdi ; __offset
                     pop rbx ; __pointer
               pop rdx ; rhs value
               mov byte [rbx + rdi], dl
               push rdx
            ; Statement results can be ignored
            pop rdx
            ; Pre-Increment - int
               ; RHS
                  ; Identifier - int j
                     push qword [rbp - 32]
               pop rdx
               add qword [rbp - 32], 1
               mov rax, qword [rbp - 32]
               push rax ; push result
            ; Statement results can be ignored
            pop rdx
;------------------------------------------------------------------------
         jmp .__endif__67 ; jump to end of condition chain
         ; End of if
.__endif__67:
;------------------------------------------------------------------------------
         ; Pre-Increment - int
         ; RHS
         ; Identifier - int i
            push qword [rbp - 24]
         pop rdx
         add qword [rbp - 24], 1
         mov rax, qword [rbp - 24]
         push rax ; push result
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------------
         jmp .__while__65
         ; End of While
.__endwhile__65:
;---------------------------------------------------------------------------------------
         ; Return
         ; Identifier - Vector<:char[]:> tokens
         push qword [rbp - 8]
         pop rax ; return value (Vector<:char[]:>)
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
;------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____split__char__1__char:
         ; End Function Declaration - split(char[], char) -> Vector<:char[]:>
; ================================================================================================

; ================================================================================================
         ; Function Declaration - max(int, int) -> int
         ; Skip over function declaration
         jmp .__end____main____max__int__int
.__main____max__int__int:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 0
         ; Parameters
         ; Param: a [rbp + 16]
         ; Param: b [rbp + 24]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)

         ; Body
;------------------------------------------------------------------------------------------
         ; Code Block
;---------------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Greater Than or Equal to
         ; LHS
         ; Identifier - int a
         push qword [rbp - -16]
         ; RHS
         ; Identifier - int b
         push qword [rbp - -24]
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setge al
         movzx eax, al
         push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__74 ; jump to end
         ; Body
         ; Return
         ; Identifier - int a
         push qword [rbp - -16]
         pop rax ; return value (int)
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         jmp .__endif__74 ; jump to end of condition chain
         ; End of if
.__endif__74:
;---------------------------------------------------------------------------------------
         ; Return
         ; Identifier - int b
         push qword [rbp - -24]
         pop rax ; return value (int)
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
;------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____max__int__int:
         ; End Function Declaration - max(int, int) -> int
; ================================================================================================

; ================================================================================================
         ; Function Declaration - max(float, float) -> float
         ; Skip over function declaration
         jmp .__end____main____max__float__float
.__main____max__float__float:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 0
         ; Parameters
         ; Param: a [rbp + 16]
         ; Param: b [rbp + 24]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)

         ; Body
;------------------------------------------------------------------------------------------
         ; Code Block
;---------------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Greater Than or Equal to
         ; LHS
         ; Identifier - float a
         push qword [rbp - -16]
         ; RHS
         ; Identifier - float b
         push qword [rbp - -24]
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setge al
         movzx eax, al
         push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__76 ; jump to end
         ; Body
         ; Return
         ; Identifier - float a
         push qword [rbp - -16]
         pop rax ; return value (float)
         movq xmm0, rax ; xmm0 is used for float return values
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         jmp .__endif__76 ; jump to end of condition chain
         ; End of if
.__endif__76:
;---------------------------------------------------------------------------------------
         ; Return
         ; Identifier - float b
         push qword [rbp - -24]
         pop rax ; return value (float)
         movq xmm0, rax ; xmm0 is used for float return values
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
;------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____max__float__float:
         ; End Function Declaration - max(float, float) -> float
; ================================================================================================

; ================================================================================================
         ; Function Declaration - min(int, int) -> int
         ; Skip over function declaration
         jmp .__end____main____min__int__int
.__main____min__int__int:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 0
         ; Parameters
         ; Param: a [rbp + 16]
         ; Param: b [rbp + 24]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)

         ; Body
;------------------------------------------------------------------------------------------
         ; Code Block
;---------------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Less Than or Equal to
         ; LHS
         ; Identifier - int a
         push qword [rbp - -16]
         ; RHS
         ; Identifier - int b
         push qword [rbp - -24]
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setle al
         movzx eax, al
         push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__78 ; jump to end
         ; Body
         ; Return
         ; Identifier - int a
         push qword [rbp - -16]
         pop rax ; return value (int)
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         jmp .__endif__78 ; jump to end of condition chain
         ; End of if
.__endif__78:
;---------------------------------------------------------------------------------------
         ; Return
         ; Identifier - int b
         push qword [rbp - -24]
         pop rax ; return value (int)
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
;------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____min__int__int:
         ; End Function Declaration - min(int, int) -> int
; ================================================================================================

; ================================================================================================
         ; Function Declaration - min(float, float) -> float
         ; Skip over function declaration
         jmp .__end____main____min__float__float
.__main____min__float__float:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 0
         ; Parameters
         ; Param: a [rbp + 16]
         ; Param: b [rbp + 24]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)

         ; Body
;------------------------------------------------------------------------------------------
         ; Code Block
;---------------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Less Than or Equal to
         ; LHS
         ; Identifier - float a
         push qword [rbp - -16]
         ; RHS
         ; Identifier - float b
         push qword [rbp - -24]
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setle al
         movzx eax, al
         push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__80 ; jump to end
         ; Body
         ; Return
         ; Identifier - float a
         push qword [rbp - -16]
         pop rax ; return value (float)
         movq xmm0, rax ; xmm0 is used for float return values
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         jmp .__endif__80 ; jump to end of condition chain
         ; End of if
.__endif__80:
;---------------------------------------------------------------------------------------
         ; Return
         ; Identifier - float b
         push qword [rbp - -24]
         pop rax ; return value (float)
         movq xmm0, rax ; xmm0 is used for float return values
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
;------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____min__float__float:
         ; End Function Declaration - min(float, float) -> float
; ================================================================================================

; ================================================================================================
         ; Function Declaration - abs(int) -> int
         ; Skip over function declaration
         jmp .__end____main____abs__int
.__main____abs__int:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 0
         ; Parameters
         ; Param: v [rbp + 16]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)

         ; Body
;------------------------------------------------------------------------------------------
         ; Code Block
;---------------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Less Than
         ; LHS
         ; Identifier - int v
         push qword [rbp - -16]
         ; RHS
         ; Int Literal
         mov rax, 0
         push rax
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setl al
         movzx eax, al
         push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__82 ; jump to end
         ; Body
         ; Return
         ; Negative - int
         ; RHS
         ; Identifier - int v
            push qword [rbp - -16]
         pop rdx
         ; val = 0 - val
         mov rax, 0
         sub rax, rdx
         push rax ; push result
         pop rax ; return value (int)
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         jmp .__endif__82 ; jump to end of condition chain
         ; End of if
.__endif__82:
;---------------------------------------------------------------------------------------
         ; Return
         ; Identifier - int v
         push qword [rbp - -16]
         pop rax ; return value (int)
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
;------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____abs__int:
         ; End Function Declaration - abs(int) -> int
; ================================================================================================

; ================================================================================================
         ; Function Declaration - abs(float) -> float
         ; Skip over function declaration
         jmp .__end____main____abs__float
.__main____abs__float:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 0
         ; Parameters
         ; Param: v [rbp + 16]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)

         ; Body
;------------------------------------------------------------------------------------------
         ; Code Block
;---------------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Less Than
         ; LHS
         ; Identifier - float v
         push qword [rbp - -16]
         ; RHS
         ; Float Literal
         mov rax, qword [.float0] ; 0.0
         push rax
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setl al
         movzx eax, al
         push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__84 ; jump to end
         ; Body
         ; Return
         ; Negative - float
         ; RHS
         ; Identifier - float v
            push qword [rbp - -16]
         pop rdx
         ; Implemented as multiplying by -1.0
         movsd xmm1, qword [__builtin__neg] ; -1.0
         movq xmm0, rdx
         mulsd xmm0, xmm1 ; v = v * -1.0
         movq rax, xmm0
         push rax ; push result
         pop rax ; return value (float)
         movq xmm0, rax ; xmm0 is used for float return values
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         jmp .__endif__84 ; jump to end of condition chain
         ; End of if
.__endif__84:
;---------------------------------------------------------------------------------------
         ; Return
         ; Identifier - float v
         push qword [rbp - -16]
         pop rax ; return value (float)
         movq xmm0, rax ; xmm0 is used for float return values
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
;------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____abs__float:
         ; End Function Declaration - abs(float) -> float
; ================================================================================================

; ================================================================================================
         ; Class Template - 
         ; Instances:
         ; End Class Template - 
; ================================================================================================

; ================================================================================================
         ; Class Template - 
         ; Instances:
         ; End Class Template - 
; ================================================================================================

; ================================================================================================
         ; Function Template - 
         ; Instances:
         ; End Function Template - 
; ================================================================================================

; ================================================================================================
         ; Function Template - 
         ; Instances:
         ; End Function Template - 
; ================================================================================================

         ; Assignment - '='
         ; RHS
         ; Function Call - input() -> char[]
         ; Make space for 0 arg(s)
         sub rsp, 0
         ; Arguments
         ; Call input()
         call __builtin__input
         ; Remove args
         add rsp, 0
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - line
         mov rax, qword [rbp - 8]  ; __main__line
         pop rdx ; rhs value
         mov qword [rbp - 8], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Constructor Call - Vector<:char[]:>::Vector() -> Vector<:char[]:>
         ; Make space for 0 arg(s)
         sub rsp, 0
         ; Arguments
         ; Call Vector<:char[]:>::Vector()
         call .__ctor____main____Vector__char__1____Vector
         ; Remove args
         add rsp, 0
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - lines
         mov rax, qword [rbp - 16]  ; __main__lines
         pop rdx ; rhs value
         mov qword [rbp - 16], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;------------------------------------------------------------------------------------------------
         ; While-Loop
.__while__85:
         ; Condition
         ; Not Equal
         ; LHS
         ; Identifier - char[] line
         push qword [rbp - 8]
         ; RHS
         ; Null Literal
         push 0
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setne al
         movzx eax, al
         push rax
         pop rax ; __cond
         cmp rax, 0 ; __cond
         je .__endwhile__85
         ; Body
;------------------------------------------------------------------------------------------
         ; Code Block
         ; Method Call - Vector<:char[]:>::pushBack(char[]) -> void
         ; Make space for 1 arg(s) and object parameter
         sub rsp, 16
         ; LHS
         ; Identifier - Vector<:char[]:> lines
         push qword [rbp - 16]
         pop rax ; object parameter
         mov qword [rsp + 0], rax ; place as first parameter
         ; RHS
         ; Arguments
         ; Eval arg0
         ; Identifier - char[] line
         push qword [rbp - 8]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 8], rax
         call .__method____main____Vector__char__1____pushBack__char__1
         ; Remove args
         add rsp, 16
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - input() -> char[]
         ; Make space for 0 arg(s)
         sub rsp, 0
         ; Arguments
         ; Call input()
         call __builtin__input
         ; Remove args
         add rsp, 0
         ; Push return value
         push rax
         pop rdx ; rhs value
         mov qword [rbp - 8], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;------------------------------------------------------------------------------------------
         jmp .__while__85
         ; End of While
.__endwhile__85:
;------------------------------------------------------------------------------------------------
; ================================================================================================
         ; Class Declaration - __main____Point inherits __builtin____main__Object
         ; Class data
         section .data
         ; Dispatch Table - this might need to be a malloc**
         .__dtable____main____Point:
         ; Dispatch Table Entries
         section .text
;---------------------------------------------------------------------------------------------
         ; Field - int Point::x
         section .data
         .__field____main____Point____x: dq 1
         section .text
;---------------------------------------------------------------------------------------------
;---------------------------------------------------------------------------------------------
         ; Field - int Point::y
         section .data
         .__field____main____Point____y: dq 2
         section .text
;---------------------------------------------------------------------------------------------
         ; skip over class methods
         jmp .__endclass____main____Point
;---------------------------------------------------------------------------------------------
         ; Constructor Declaration - Point::Point(int, int) -> Point
         jmp .__end__ctor____main____Point____Point__int__int
         .__ctor____main____Point____Point__int__int:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         sub rsp, 16 ; space for local variables (16-byte aligned)
         ; [rbp - 8] - this - Reference to 'this' object instance
         ; Creating Class Instance
         mov rdi, 24 ; [dtable, field0, field1, ..., fieldN] each 8 bytes
         call malloc
         mov qword [rbp - 8], rax ; save class instance as 'this'
         ; Add Dispatch Table
         mov rax, qword [rbp - 8] ; this
         mov qword [rax + 0], .__dtable____main____Point ; this[0] = &dtable
         ; Parameters
         ; Param: x [rbp + 16]
         ; Param: y [rbp + 24]
         ; Body
;------------------------------------------------------------------------------------------
         ; Code Block
         ; Assignment - '='
         ; RHS
         ; Identifier - int x
         push qword [rbp - -16]
         ; LHS
         ; Member Accessor Assignment
         ; LHS
         ; This keyword
         push qword [rbp - 8] ; __this
         ; RHS
         push qword [.__field____main____Point____x] ; 
         pop rdi ; rhs
         pop rbx ; lhs
         pop rdx ; rhs value
         mov qword [rbx + 8*rdi], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Identifier - int y
         push qword [rbp - -24]
         ; LHS
         ; Member Accessor Assignment
         ; LHS
         ; This keyword
         push qword [rbp - 8] ; __this
         ; RHS
         push qword [.__field____main____Point____y] ; 
         pop rdi ; rhs
         pop rbx ; lhs
         pop rdx ; rhs value
         mov qword [rbx + 8*rdi], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;------------------------------------------------------------------------------------------
         mov rax, qword [rbp - 8] ; __this
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__ctor____main____Point____Point__int__int:
         ; End Constructor Declaration - __ctor____main____Point____Point__int__int
;------------------------------------------------------------------------------------------------

.__endclass____main____Point:
         ; End Class Declaration - __main____Point
; ===================================================================================================

; ===================================================================================================
         ; Function Declaration - print(Point) -> void
         ; Skip over function declaration
         jmp .__end____main____print__Point
.__main____print__Point:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 0
         ; Parameters
         ; Param: p [rbp + 16]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)

         ; Body
;---------------------------------------------------------------------------------------------
         ; Code Block
         ; Function Call - print(char) -> void
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Char Literal
         push '('
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call print(char)
         call __builtin__print__char
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
         ; Function Call - print(int) -> void
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Member Accessor
         ; LHS
         ; Identifier - Point p
         push qword [rbp - -16]
         ; RHS
         push qword [.__field____main____Point____x] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call print(int)
         call __builtin__print__int
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
         ; Function Call - print(char) -> void
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Char Literal
         push ','
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call print(char)
         call __builtin__print__char
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
         ; Function Call - print(char) -> void
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Char Literal
         push ' '
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call print(char)
         call __builtin__print__char
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
         ; Function Call - print(int) -> void
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Member Accessor
         ; LHS
         ; Identifier - Point p
         push qword [rbp - -16]
         ; RHS
         push qword [.__field____main____Point____y] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call print(int)
         call __builtin__print__int
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
         ; Function Call - print(char) -> void
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Char Literal
         push ')'
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call print(char)
         call __builtin__print__char
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____print__Point:
         ; End Function Declaration - print(Point) -> void
; ===================================================================================================

; ===================================================================================================
         ; Function Declaration - println(Point) -> void
         ; Skip over function declaration
         jmp .__end____main____println__Point
.__main____println__Point:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 0
         ; Parameters
         ; Param: p [rbp + 16]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)

         ; Body
;---------------------------------------------------------------------------------------------
         ; Code Block
         ; Function Call - print(Point) -> void
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Identifier - Point p
         push qword [rbp - -16]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call print(Point)
         call .__main____print__Point
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
         ; Function Call - println() -> void
         ; Make space for 0 arg(s)
         sub rsp, 0
         ; Arguments
         ; Call println()
         call __builtin__println
         ; Remove args
         add rsp, 0
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____println__Point:
         ; End Function Declaration - println(Point) -> void
; ===================================================================================================

; ===================================================================================================
         ; Function Declaration - manhattan(Point, Point) -> int
         ; Skip over function declaration
         jmp .__end____main____manhattan__Point__Point
.__main____manhattan__Point__Point:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 0
         ; Parameters
         ; Param: a [rbp + 16]
         ; Param: b [rbp + 24]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)

         ; Body
;---------------------------------------------------------------------------------------------
         ; Code Block
         ; Return
         ; Addition - int, int
         ; LHS
         ; Function Call - abs(int) -> int
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Subtraction - int, int
            ; LHS
               ; Member Accessor
                  ; LHS
                     ; Identifier - Point a
                        push qword [rbp - -16]
                  ; RHS
                     push qword [.__field____main____Point____x] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            ; RHS
               ; Member Accessor
                  ; LHS
                     ; Identifier - Point b
                        push qword [rbp - -24]
                  ; RHS
                     push qword [.__field____main____Point____x] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            pop rdx ; rhs
            pop rax ; lhs
            sub rax, rdx
            push rax
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call abs(int)
         call .__main____abs__int
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; RHS
         ; Function Call - abs(int) -> int
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Subtraction - int, int
            ; LHS
               ; Member Accessor
                  ; LHS
                     ; Identifier - Point a
                        push qword [rbp - -16]
                  ; RHS
                     push qword [.__field____main____Point____y] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            ; RHS
               ; Member Accessor
                  ; LHS
                     ; Identifier - Point b
                        push qword [rbp - -24]
                  ; RHS
                     push qword [.__field____main____Point____y] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            pop rdx ; rhs
            pop rax ; lhs
            sub rax, rdx
            push rax
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call abs(int)
         call .__main____abs__int
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         pop rdx ; rhs
         pop rax ; lhs
         add rax, rdx
         push rax
         pop rax ; return value (int)
         ; Clean up stack and return
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
;---------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____manhattan__Point__Point:
         ; End Function Declaration - manhattan(Point, Point) -> int
; ===================================================================================================

; ===================================================================================================
         ; Class Declaration - __main____Sensor inherits __builtin____main__Object
         ; Class data
         section .data
         ; Dispatch Table - this might need to be a malloc**
         .__dtable____main____Sensor:
         ; Dispatch Table Entries
         section .text
;------------------------------------------------------------------------------------------------
         ; Field - Point Sensor::position
         section .data
         .__field____main____Sensor____position: dq 1
         section .text
;------------------------------------------------------------------------------------------------
;------------------------------------------------------------------------------------------------
         ; Field - Point Sensor::closest_beacon
         section .data
         .__field____main____Sensor____closest_beacon: dq 2
         section .text
;------------------------------------------------------------------------------------------------
;------------------------------------------------------------------------------------------------
         ; Field - int Sensor::radius
         section .data
         .__field____main____Sensor____radius: dq 3
         section .text
;------------------------------------------------------------------------------------------------
         ; skip over class methods
         jmp .__endclass____main____Sensor
;------------------------------------------------------------------------------------------------
         ; Constructor Declaration - Sensor::Sensor(Point, Point) -> Sensor
         jmp .__end__ctor____main____Sensor____Sensor__Point__Point
         .__ctor____main____Sensor____Sensor__Point__Point:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         sub rsp, 16 ; space for local variables (16-byte aligned)
         ; [rbp - 8] - this - Reference to 'this' object instance
         ; Creating Class Instance
         mov rdi, 32 ; [dtable, field0, field1, ..., fieldN] each 8 bytes
         call malloc
         mov qword [rbp - 8], rax ; save class instance as 'this'
         ; Add Dispatch Table
         mov rax, qword [rbp - 8] ; this
         mov qword [rax + 0], .__dtable____main____Sensor ; this[0] = &dtable
         ; Parameters
         ; Param: pos [rbp + 16]
         ; Param: b [rbp + 24]
         ; Body
;---------------------------------------------------------------------------------------------
         ; Code Block
         ; Assignment - '='
         ; RHS
         ; Identifier - Point pos
         push qword [rbp - -16]
         ; LHS
         ; Member Accessor Assignment
         ; LHS
         ; This keyword
         push qword [rbp - 8] ; __this
         ; RHS
         push qword [.__field____main____Sensor____position] ; 
         pop rdi ; rhs
         pop rbx ; lhs
         pop rdx ; rhs value
         mov qword [rbx + 8*rdi], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Identifier - Point b
         push qword [rbp - -24]
         ; LHS
         ; Member Accessor Assignment
         ; LHS
         ; This keyword
         push qword [rbp - 8] ; __this
         ; RHS
         push qword [.__field____main____Sensor____closest_beacon] ; 
         pop rdi ; rhs
         pop rbx ; lhs
         pop rdx ; rhs value
         mov qword [rbx + 8*rdi], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - manhattan(Point, Point) -> int
         ; Make space for 2 arg(s)
         sub rsp, 16
         ; Arguments
         ; Eval arg0
         ; Member Accessor
         ; LHS
            ; This keyword
               push qword [rbp - 8] ; __this
         ; RHS
            push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Eval arg1
         ; Member Accessor
         ; LHS
            ; This keyword
               push qword [rbp - 8] ; __this
         ; RHS
            push qword [.__field____main____Sensor____closest_beacon] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; Move arg1's result to reverse order position on stack
         pop rax
         mov qword [rsp + 8], rax
         ; Call manhattan(Point, Point)
         call .__main____manhattan__Point__Point
         ; Remove args
         add rsp, 16
         ; Push return value
         push rax
         ; LHS
         ; Member Accessor Assignment
         ; LHS
         ; This keyword
         push qword [rbp - 8] ; __this
         ; RHS
         push qword [.__field____main____Sensor____radius] ; 
         pop rdi ; rhs
         pop rbx ; lhs
         pop rdx ; rhs value
         mov qword [rbx + 8*rdi], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------------------------
         mov rax, qword [rbp - 8] ; __this
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
         .__end__ctor____main____Sensor____Sensor__Point__Point:
         ; End Constructor Declaration - __ctor____main____Sensor____Sensor__Point__Point
;---------------------------------------------------------------------------------------------------

.__endclass____main____Sensor:
         ; End Class Declaration - __main____Sensor
; ======================================================================================================

; ======================================================================================================
         ; Function Declaration - print(Sensor) -> void
         ; Skip over function declaration
         jmp .__end____main____print__Sensor
.__main____print__Sensor:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 0
         ; Parameters
         ; Param: s [rbp + 16]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)

         ; Body
;------------------------------------------------------------------------------------------------
         ; Code Block
         ; Function Call - print(Point) -> void
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Member Accessor
         ; LHS
         ; Identifier - Sensor s
         push qword [rbp - -16]
         ; RHS
         push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call print(Point)
         call .__main____print__Point
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
         ; Function Call - print(char) -> void
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Char Literal
         push ' '
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call print(char)
         call __builtin__print__char
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
         ; Function Call - print(Point) -> void
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Member Accessor
         ; LHS
         ; Identifier - Sensor s
         push qword [rbp - -16]
         ; RHS
         push qword [.__field____main____Sensor____closest_beacon] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call print(Point)
         call .__main____print__Point
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
;------------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____print__Sensor:
         ; End Function Declaration - print(Sensor) -> void
; ======================================================================================================

; ======================================================================================================
         ; Function Declaration - println(Sensor) -> void
         ; Skip over function declaration
         jmp .__end____main____println__Sensor
.__main____println__Sensor:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 0
         ; Parameters
         ; Param: s [rbp + 16]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)

         ; Body
;------------------------------------------------------------------------------------------------
         ; Code Block
         ; Function Call - print(Sensor) -> void
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Identifier - Sensor s
         push qword [rbp - -16]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call print(Sensor)
         call .__main____print__Sensor
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
         ; Function Call - println() -> void
         ; Make space for 0 arg(s)
         sub rsp, 0
         ; Arguments
         ; Call println()
         call __builtin__println
         ; Remove args
         add rsp, 0
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
;------------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____println__Sensor:
         ; End Function Declaration - println(Sensor) -> void
; ======================================================================================================

         ; Assignment - '='
         ; RHS
         ; Constructor Call - Vector<:Sensor:>::Vector() -> Vector<:Sensor:>
         ; Make space for 0 arg(s)
         sub rsp, 0
         ; Arguments
         ; Call Vector<:Sensor:>::Vector()
         call .__ctor____main____Vector__Sensor____Vector
         ; Remove args
         add rsp, 0
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - sensors
         mov rax, qword [rbp - 24]  ; __main__sensors
         pop rdx ; rhs value
         mov qword [rbp - 24], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;------------------------------------------------------------------------------------------------------
         ; For-Loop
         ; Init
         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 0
         push rax
         ; LHS
         ; Variable Declaration - l
         mov rax, qword [rbp - 32]  ; __main__for__94__l
         pop rdx ; rhs value
         mov qword [rbp - 32], rdx
         push rdx
         ; Loop init result can be discarded
         pop rax
         jmp .__forcond__94
.__for__94:
         ; Update
         ; Assignment - '+='
         ; RHS
         ; Int Literal
         mov rax, 1
         push rax
         pop rdx ; rhs value
         mov rax, qword [rbp - 32] ; read lhs value
         add rax, rdx      ; add lhs and rhs
         mov qword [rbp - 32], rax ; write back to lhs
         push rax          ; push result for other expressions
         ; Loop update result can be discarded
         pop rax
.__forcond__94:
         ; Condition
         ; Less Than
         ; LHS
         ; Identifier - int l
         push qword [rbp - 32]
         ; RHS
         ; Member Accessor
         ; LHS
         ; Identifier - Vector<:char[]:> lines
         push qword [rbp - 16]
         ; RHS
         push qword [.__field____main____Vector__char__1____size] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setl al
         movzx eax, al
         push rax
         pop rax ; __cond
         cmp rax, 0 ; __cond
         je .__endfor__94
         ; Body
;------------------------------------------------------------------------------------------------
         ; Code Block
         ; Assignment - '='
         ; RHS
         ; Function Call - split(char[], char) -> Vector<:char[]:>
         ; Make space for 2 arg(s)
         sub rsp, 16
         ; Arguments
         ; Eval arg0
         ; Subscript
         ; LHS
         ; Member Accessor
            ; LHS
               ; Identifier - Vector<:char[]:> lines
                  push qword [rbp - 16]
            ; RHS
               push qword [.__field____main____Vector__char__1____data] ; stored index associated with field that is being accessed
            pop rdx ; rhs
            pop rax ; lhs
            push qword [rax + 8*rdx] ; lhs.rhs
         ; OFFSET
         ; Identifier - int l
            push qword [rbp - 32]
         pop rdx ; __offset
         pop rax ; __pointer
         push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Eval arg1
         ; Char Literal
         push ' '
         ; Move arg1's result to reverse order position on stack
         pop rax
         mov qword [rsp + 8], rax
         ; Call split(char[], char)
         call .__main____split__char__1__char
         ; Remove args
         add rsp, 16
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - tokens
         mov rax, qword [rbp - 40]  ; __main__for__94__block__95__tokens
         pop rdx ; rhs value
         mov qword [rbp - 40], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Subscript
         ; LHS
         ; Member Accessor
         ; LHS
         ; Identifier - Vector<:char[]:> tokens
         push qword [rbp - 40]
         ; RHS
         push qword [.__field____main____Vector__char__1____data] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; OFFSET
         ; Int Literal
         mov rax, 2
         push rax
         pop rdx ; __offset
         pop rax ; __pointer
         push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
         ; LHS
         ; Variable Declaration - x0_token
         mov rax, qword [rbp - 48]  ; __main__for__94__block__95__x0_token
         pop rdx ; rhs value
         mov qword [rbp - 48], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - substr(char[], int, int) -> char[]
         ; Make space for 3 arg(s)
         sub rsp, 24
         ; Arguments
         ; Eval arg0
         ; Identifier - char[] x0_token
         push qword [rbp - 48]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Eval arg1
         ; Int Literal
         mov rax, 2
         push rax
         ; Move arg1's result to reverse order position on stack
         pop rax
         mov qword [rsp + 8], rax
         ; Eval arg2
         ; Subtraction - int, int
         ; LHS
         ; Function Call - strlen(char[]) -> int
            ; Make space for 1 arg(s)
            sub rsp, 8
            ; Arguments
               ; Eval arg0
                  ; Identifier - char[] x0_token
                     push qword [rbp - 48]
               ; Move arg0's result to reverse order position on stack
               pop rax
               mov qword [rsp + 0], rax
            ; Call strlen(char[])
            call .__main____strlen__char__1
            ; Remove args
            add rsp, 8
            ; Push return value
            push rax
         ; RHS
         ; Int Literal
            mov rax, 1
            push rax
         pop rdx ; rhs
         pop rax ; lhs
         sub rax, rdx
         push rax
         ; Move arg2's result to reverse order position on stack
         pop rax
         mov qword [rsp + 16], rax
         ; Call substr(char[], int, int)
         call .__main____substr__char__1__int__int
         ; Remove args
         add rsp, 24
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - x0_str
         mov rax, qword [rbp - 56]  ; __main__for__94__block__95__x0_str
         pop rdx ; rhs value
         mov qword [rbp - 56], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - stringToInt(char[]) -> int
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Identifier - char[] x0_str
         push qword [rbp - 56]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call stringToInt(char[])
         call __builtin__stringToInt__char__1
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - x0
         mov rax, qword [rbp - 64]  ; __main__for__94__block__95__x0
         pop rdx ; rhs value
         mov qword [rbp - 64], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Subscript
         ; LHS
         ; Member Accessor
         ; LHS
         ; Identifier - Vector<:char[]:> tokens
         push qword [rbp - 40]
         ; RHS
         push qword [.__field____main____Vector__char__1____data] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; OFFSET
         ; Int Literal
         mov rax, 3
         push rax
         pop rdx ; __offset
         pop rax ; __pointer
         push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
         ; LHS
         ; Variable Declaration - y0_token
         mov rax, qword [rbp - 72]  ; __main__for__94__block__95__y0_token
         pop rdx ; rhs value
         mov qword [rbp - 72], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - substr(char[], int, int) -> char[]
         ; Make space for 3 arg(s)
         sub rsp, 24
         ; Arguments
         ; Eval arg0
         ; Identifier - char[] y0_token
         push qword [rbp - 72]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Eval arg1
         ; Int Literal
         mov rax, 2
         push rax
         ; Move arg1's result to reverse order position on stack
         pop rax
         mov qword [rsp + 8], rax
         ; Eval arg2
         ; Subtraction - int, int
         ; LHS
         ; Function Call - strlen(char[]) -> int
            ; Make space for 1 arg(s)
            sub rsp, 8
            ; Arguments
               ; Eval arg0
                  ; Identifier - char[] y0_token
                     push qword [rbp - 72]
               ; Move arg0's result to reverse order position on stack
               pop rax
               mov qword [rsp + 0], rax
            ; Call strlen(char[])
            call .__main____strlen__char__1
            ; Remove args
            add rsp, 8
            ; Push return value
            push rax
         ; RHS
         ; Int Literal
            mov rax, 1
            push rax
         pop rdx ; rhs
         pop rax ; lhs
         sub rax, rdx
         push rax
         ; Move arg2's result to reverse order position on stack
         pop rax
         mov qword [rsp + 16], rax
         ; Call substr(char[], int, int)
         call .__main____substr__char__1__int__int
         ; Remove args
         add rsp, 24
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - y0_str
         mov rax, qword [rbp - 80]  ; __main__for__94__block__95__y0_str
         pop rdx ; rhs value
         mov qword [rbp - 80], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - stringToInt(char[]) -> int
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Identifier - char[] y0_str
         push qword [rbp - 80]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call stringToInt(char[])
         call __builtin__stringToInt__char__1
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - y0
         mov rax, qword [rbp - 88]  ; __main__for__94__block__95__y0
         pop rdx ; rhs value
         mov qword [rbp - 88], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Subscript
         ; LHS
         ; Member Accessor
         ; LHS
         ; Identifier - Vector<:char[]:> tokens
         push qword [rbp - 40]
         ; RHS
         push qword [.__field____main____Vector__char__1____data] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; OFFSET
         ; Int Literal
         mov rax, 8
         push rax
         pop rdx ; __offset
         pop rax ; __pointer
         push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
         ; LHS
         ; Variable Declaration - x1_token
         mov rax, qword [rbp - 96]  ; __main__for__94__block__95__x1_token
         pop rdx ; rhs value
         mov qword [rbp - 96], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - substr(char[], int, int) -> char[]
         ; Make space for 3 arg(s)
         sub rsp, 24
         ; Arguments
         ; Eval arg0
         ; Identifier - char[] x1_token
         push qword [rbp - 96]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Eval arg1
         ; Int Literal
         mov rax, 2
         push rax
         ; Move arg1's result to reverse order position on stack
         pop rax
         mov qword [rsp + 8], rax
         ; Eval arg2
         ; Subtraction - int, int
         ; LHS
         ; Function Call - strlen(char[]) -> int
            ; Make space for 1 arg(s)
            sub rsp, 8
            ; Arguments
               ; Eval arg0
                  ; Identifier - char[] x1_token
                     push qword [rbp - 96]
               ; Move arg0's result to reverse order position on stack
               pop rax
               mov qword [rsp + 0], rax
            ; Call strlen(char[])
            call .__main____strlen__char__1
            ; Remove args
            add rsp, 8
            ; Push return value
            push rax
         ; RHS
         ; Int Literal
            mov rax, 1
            push rax
         pop rdx ; rhs
         pop rax ; lhs
         sub rax, rdx
         push rax
         ; Move arg2's result to reverse order position on stack
         pop rax
         mov qword [rsp + 16], rax
         ; Call substr(char[], int, int)
         call .__main____substr__char__1__int__int
         ; Remove args
         add rsp, 24
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - x1_str
         mov rax, qword [rbp - 104]  ; __main__for__94__block__95__x1_str
         pop rdx ; rhs value
         mov qword [rbp - 104], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - stringToInt(char[]) -> int
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Identifier - char[] x1_str
         push qword [rbp - 104]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call stringToInt(char[])
         call __builtin__stringToInt__char__1
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - x1
         mov rax, qword [rbp - 112]  ; __main__for__94__block__95__x1
         pop rdx ; rhs value
         mov qword [rbp - 112], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Subscript
         ; LHS
         ; Member Accessor
         ; LHS
         ; Identifier - Vector<:char[]:> tokens
         push qword [rbp - 40]
         ; RHS
         push qword [.__field____main____Vector__char__1____data] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; OFFSET
         ; Int Literal
         mov rax, 9
         push rax
         pop rdx ; __offset
         pop rax ; __pointer
         push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
         ; LHS
         ; Variable Declaration - y1_token
         mov rax, qword [rbp - 120]  ; __main__for__94__block__95__y1_token
         pop rdx ; rhs value
         mov qword [rbp - 120], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - substr(char[], int, int) -> char[]
         ; Make space for 3 arg(s)
         sub rsp, 24
         ; Arguments
         ; Eval arg0
         ; Identifier - char[] y1_token
         push qword [rbp - 120]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Eval arg1
         ; Int Literal
         mov rax, 2
         push rax
         ; Move arg1's result to reverse order position on stack
         pop rax
         mov qword [rsp + 8], rax
         ; Eval arg2
         ; Function Call - strlen(char[]) -> int
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
            ; Identifier - char[] y1_token
               push qword [rbp - 120]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call strlen(char[])
         call .__main____strlen__char__1
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; Move arg2's result to reverse order position on stack
         pop rax
         mov qword [rsp + 16], rax
         ; Call substr(char[], int, int)
         call .__main____substr__char__1__int__int
         ; Remove args
         add rsp, 24
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - y1_str
         mov rax, qword [rbp - 128]  ; __main__for__94__block__95__y1_str
         pop rdx ; rhs value
         mov qword [rbp - 128], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - stringToInt(char[]) -> int
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Identifier - char[] y1_str
         push qword [rbp - 128]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call stringToInt(char[])
         call __builtin__stringToInt__char__1
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - y1
         mov rax, qword [rbp - 136]  ; __main__for__94__block__95__y1
         pop rdx ; rhs value
         mov qword [rbp - 136], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Method Call - Vector<:Sensor:>::pushBack(Sensor) -> void
         ; Make space for 1 arg(s) and object parameter
         sub rsp, 16
         ; LHS
         ; Identifier - Vector<:Sensor:> sensors
         push qword [rbp - 24]
         pop rax ; object parameter
         mov qword [rsp + 0], rax ; place as first parameter
         ; RHS
         ; Arguments
         ; Eval arg0
         ; Constructor Call - Sensor::Sensor(Point, Point) -> Sensor
         ; Make space for 2 arg(s)
         sub rsp, 16
         ; Arguments
         ; Eval arg0
         ; Constructor Call - Point::Point(int, int) -> Point
         ; Make space for 2 arg(s)
         sub rsp, 16
         ; Arguments
            ; Eval arg0
               ; Identifier - int x0
                  push qword [rbp - 64]
            ; Move arg0's result to reverse order position on stack
            pop rax
            mov qword [rsp + 0], rax
            ; Eval arg1
               ; Identifier - int y0
                  push qword [rbp - 88]
            ; Move arg1's result to reverse order position on stack
            pop rax
            mov qword [rsp + 8], rax
         ; Call Point::Point(int, int)
         call .__ctor____main____Point____Point__int__int
         ; Remove args
         add rsp, 16
         ; Push return value
         push rax
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Eval arg1
         ; Constructor Call - Point::Point(int, int) -> Point
         ; Make space for 2 arg(s)
         sub rsp, 16
         ; Arguments
            ; Eval arg0
               ; Identifier - int x1
                  push qword [rbp - 112]
            ; Move arg0's result to reverse order position on stack
            pop rax
            mov qword [rsp + 0], rax
            ; Eval arg1
               ; Identifier - int y1
                  push qword [rbp - 136]
            ; Move arg1's result to reverse order position on stack
            pop rax
            mov qword [rsp + 8], rax
         ; Call Point::Point(int, int)
         call .__ctor____main____Point____Point__int__int
         ; Remove args
         add rsp, 16
         ; Push return value
         push rax
         ; Move arg1's result to reverse order position on stack
         pop rax
         mov qword [rsp + 8], rax
         ; Call Sensor::Sensor(Point, Point)
         call .__ctor____main____Sensor____Sensor__Point__Point
         ; Remove args
         add rsp, 16
         ; Push return value
         push rax
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 8], rax
         call .__method____main____Vector__Sensor____pushBack__Sensor
         ; Remove args
         add rsp, 16
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
;------------------------------------------------------------------------------------------------
         ; Repeat
jmp .__for__94
         ; End of For
.__endfor__94:
;------------------------------------------------------------------------------------------------------
         ; Assignment - '='
         ; RHS
         ; Member Accessor
         ; LHS
         ; Member Accessor
         ; LHS
         ; Subscript
         ; LHS
         ; Member Accessor
         ; LHS
         ; Identifier - Vector<:Sensor:> sensors
            push qword [rbp - 24]
         ; RHS
         push qword [.__field____main____Vector__Sensor____data] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; OFFSET
         ; Int Literal
         mov rax, 0
         push rax
         pop rdx ; __offset
         pop rax ; __pointer
         push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
         ; RHS
         push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; RHS
         push qword [.__field____main____Point____x] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; LHS
         ; Variable Declaration - minx
         mov rax, qword [rbp - 144]  ; __main__minx
         pop rdx ; rhs value
         mov qword [rbp - 144], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 0
         push rax
         ; LHS
         ; Variable Declaration - maxx
         mov rax, qword [rbp - 152]  ; __main__maxx
         pop rdx ; rhs value
         mov qword [rbp - 152], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Member Accessor
         ; LHS
         ; Member Accessor
         ; LHS
         ; Subscript
         ; LHS
         ; Member Accessor
         ; LHS
         ; Identifier - Vector<:Sensor:> sensors
            push qword [rbp - 24]
         ; RHS
         push qword [.__field____main____Vector__Sensor____data] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; OFFSET
         ; Int Literal
         mov rax, 0
         push rax
         pop rdx ; __offset
         pop rax ; __pointer
         push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
         ; RHS
         push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; RHS
         push qword [.__field____main____Point____y] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; LHS
         ; Variable Declaration - miny
         mov rax, qword [rbp - 160]  ; __main__miny
         pop rdx ; rhs value
         mov qword [rbp - 160], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 0
         push rax
         ; LHS
         ; Variable Declaration - maxy
         mov rax, qword [rbp - 168]  ; __main__maxy
         pop rdx ; rhs value
         mov qword [rbp - 168], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;------------------------------------------------------------------------------------------------------
         ; For-Loop
         ; Init
         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 0
         push rax
         ; LHS
         ; Variable Declaration - i
         mov rax, qword [rbp - 176]  ; __main__for__96__i
         pop rdx ; rhs value
         mov qword [rbp - 176], rdx
         push rdx
         ; Loop init result can be discarded
         pop rax
         jmp .__forcond__96
.__for__96:
         ; Update
         ; Pre-Increment - int
         ; RHS
         ; Identifier - int i
         push qword [rbp - 176]
         pop rdx
         add qword [rbp - 176], 1
         mov rax, qword [rbp - 176]
         push rax ; push result
         ; Loop update result can be discarded
         pop rax
.__forcond__96:
         ; Condition
         ; Less Than
         ; LHS
         ; Identifier - int i
         push qword [rbp - 176]
         ; RHS
         ; Member Accessor
         ; LHS
         ; Identifier - Vector<:Sensor:> sensors
         push qword [rbp - 24]
         ; RHS
         push qword [.__field____main____Vector__Sensor____size] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setl al
         movzx eax, al
         push rax
         pop rax ; __cond
         cmp rax, 0 ; __cond
         je .__endfor__96
         ; Body
;------------------------------------------------------------------------------------------------
         ; Code Block
         ; Assignment - '='
         ; RHS
         ; Subscript
         ; LHS
         ; Member Accessor
         ; LHS
         ; Identifier - Vector<:Sensor:> sensors
         push qword [rbp - 24]
         ; RHS
         push qword [.__field____main____Vector__Sensor____data] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; OFFSET
         ; Identifier - int i
         push qword [rbp - 176]
         pop rdx ; __offset
         pop rax ; __pointer
         push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
         ; LHS
         ; Variable Declaration - sensor
         mov rax, qword [rbp - 184]  ; __main__for__96__block__97__sensor
         pop rdx ; rhs value
         mov qword [rbp - 184], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - min(int, int) -> int
         ; Make space for 2 arg(s)
         sub rsp, 16
         ; Arguments
         ; Eval arg0
         ; Subtraction - int, int
         ; LHS
         ; Subtraction - int, int
            ; LHS
               ; Member Accessor
                  ; LHS
                     ; Member Accessor
                        ; LHS
                           ; Identifier - Sensor sensor
                              push qword [rbp - 184]
                        ; RHS
                           push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                  ; RHS
                     push qword [.__field____main____Point____x] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            ; RHS
               ; Member Accessor
                  ; LHS
                     ; Identifier - Sensor sensor
                        push qword [rbp - 184]
                  ; RHS
                     push qword [.__field____main____Sensor____radius] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            pop rdx ; rhs
            pop rax ; lhs
            sub rax, rdx
            push rax
         ; RHS
         ; Int Literal
            mov rax, 1
            push rax
         pop rdx ; rhs
         pop rax ; lhs
         sub rax, rdx
         push rax
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Eval arg1
         ; Identifier - int minx
         push qword [rbp - 144]
         ; Move arg1's result to reverse order position on stack
         pop rax
         mov qword [rsp + 8], rax
         ; Call min(int, int)
         call .__main____min__int__int
         ; Remove args
         add rsp, 16
         ; Push return value
         push rax
         pop rdx ; rhs value
         mov qword [rbp - 144], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - max(int, int) -> int
         ; Make space for 2 arg(s)
         sub rsp, 16
         ; Arguments
         ; Eval arg0
         ; Addition - int, int
         ; LHS
         ; Addition - int, int
            ; LHS
               ; Member Accessor
                  ; LHS
                     ; Member Accessor
                        ; LHS
                           ; Identifier - Sensor sensor
                              push qword [rbp - 184]
                        ; RHS
                           push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                  ; RHS
                     push qword [.__field____main____Point____x] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            ; RHS
               ; Member Accessor
                  ; LHS
                     ; Identifier - Sensor sensor
                        push qword [rbp - 184]
                  ; RHS
                     push qword [.__field____main____Sensor____radius] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            pop rdx ; rhs
            pop rax ; lhs
            add rax, rdx
            push rax
         ; RHS
         ; Int Literal
            mov rax, 1
            push rax
         pop rdx ; rhs
         pop rax ; lhs
         add rax, rdx
         push rax
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Eval arg1
         ; Identifier - int maxx
         push qword [rbp - 152]
         ; Move arg1's result to reverse order position on stack
         pop rax
         mov qword [rsp + 8], rax
         ; Call max(int, int)
         call .__main____max__int__int
         ; Remove args
         add rsp, 16
         ; Push return value
         push rax
         pop rdx ; rhs value
         mov qword [rbp - 152], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - min(int, int) -> int
         ; Make space for 2 arg(s)
         sub rsp, 16
         ; Arguments
         ; Eval arg0
         ; Subtraction - int, int
         ; LHS
         ; Subtraction - int, int
            ; LHS
               ; Member Accessor
                  ; LHS
                     ; Member Accessor
                        ; LHS
                           ; Identifier - Sensor sensor
                              push qword [rbp - 184]
                        ; RHS
                           push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                  ; RHS
                     push qword [.__field____main____Point____y] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            ; RHS
               ; Member Accessor
                  ; LHS
                     ; Identifier - Sensor sensor
                        push qword [rbp - 184]
                  ; RHS
                     push qword [.__field____main____Sensor____radius] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            pop rdx ; rhs
            pop rax ; lhs
            sub rax, rdx
            push rax
         ; RHS
         ; Int Literal
            mov rax, 1
            push rax
         pop rdx ; rhs
         pop rax ; lhs
         sub rax, rdx
         push rax
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Eval arg1
         ; Identifier - int miny
         push qword [rbp - 160]
         ; Move arg1's result to reverse order position on stack
         pop rax
         mov qword [rsp + 8], rax
         ; Call min(int, int)
         call .__main____min__int__int
         ; Remove args
         add rsp, 16
         ; Push return value
         push rax
         pop rdx ; rhs value
         mov qword [rbp - 160], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         ; Assignment - '='
         ; RHS
         ; Function Call - max(int, int) -> int
         ; Make space for 2 arg(s)
         sub rsp, 16
         ; Arguments
         ; Eval arg0
         ; Addition - int, int
         ; LHS
         ; Addition - int, int
            ; LHS
               ; Member Accessor
                  ; LHS
                     ; Member Accessor
                        ; LHS
                           ; Identifier - Sensor sensor
                              push qword [rbp - 184]
                        ; RHS
                           push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                  ; RHS
                     push qword [.__field____main____Point____y] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            ; RHS
               ; Member Accessor
                  ; LHS
                     ; Identifier - Sensor sensor
                        push qword [rbp - 184]
                  ; RHS
                     push qword [.__field____main____Sensor____radius] ; stored index associated with field that is being accessed
                  pop rdx ; rhs
                  pop rax ; lhs
                  push qword [rax + 8*rdx] ; lhs.rhs
            pop rdx ; rhs
            pop rax ; lhs
            add rax, rdx
            push rax
         ; RHS
         ; Int Literal
            mov rax, 1
            push rax
         pop rdx ; rhs
         pop rax ; lhs
         add rax, rdx
         push rax
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Eval arg1
         ; Identifier - int maxy
         push qword [rbp - 168]
         ; Move arg1's result to reverse order position on stack
         pop rax
         mov qword [rsp + 8], rax
         ; Call max(int, int)
         call .__main____max__int__int
         ; Remove args
         add rsp, 16
         ; Push return value
         push rax
         pop rdx ; rhs value
         mov qword [rbp - 168], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;------------------------------------------------------------------------------------------------
         ; Repeat
jmp .__for__96
         ; End of For
.__endfor__96:
;------------------------------------------------------------------------------------------------------
         ; Assignment - '='
         ; RHS
         ; Constructor Call - Vector<:Vector<:char:>:>::Vector() -> Vector<:Vector<:char:>:>
         ; Make space for 0 arg(s)
         sub rsp, 0
         ; Arguments
         ; Call Vector<:Vector<:char:>:>::Vector()
         call .__ctor____main____Vector__Vector____Vector
         ; Remove args
         add rsp, 0
         ; Push return value
         push rax
         ; LHS
         ; Variable Declaration - board
         mov rax, qword [rbp - 192]  ; __main__board
         pop rdx ; rhs value
         mov qword [rbp - 192], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
; ======================================================================================================
         ; Function Declaration - printboard(Vector<:Vector<:char:>:>) -> void
         ; Skip over function declaration
         jmp .__end____main____printboard__Vector__tparam0__Vector
.__main____printboard__Vector__tparam0__Vector:
         ; Function Header:
         ; Setup stack frame
         push rbp
         mov rbp, rsp
         sub rsp, 16
         ; Parameters
         ; Param: board [rbp + 16]
         ; Local Variables - Each variable is currently 64-bit (sorry not sorry)
         ; [rbp - 8] - int i (<unset-scope-name>)
         ; [rbp - 16] - int j (<unset-scope-name>)

         ; Body
;------------------------------------------------------------------------------------------------
         ; Code Block
;---------------------------------------------------------------------------------------------
         ; For-Loop
         ; Init
         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 0
         push rax
         ; LHS
         ; Variable Declaration - i
         mov rax, qword [rbp - 8]  ; __main__printboard__block__98__for__99__i
         pop rdx ; rhs value
         mov qword [rbp - 8], rdx
         push rdx
         ; Loop init result can be discarded
         pop rax
         jmp .__forcond__99
.__for__99:
         ; Update
         ; Pre-Increment - int
         ; RHS
         ; Identifier - int i
         push qword [rbp - 8]
         pop rdx
         add qword [rbp - 8], 1
         mov rax, qword [rbp - 8]
         push rax ; push result
         ; Loop update result can be discarded
         pop rax
.__forcond__99:
         ; Condition
         ; Less Than
         ; LHS
         ; Identifier - int i
         push qword [rbp - 8]
         ; RHS
         ; Member Accessor
         ; LHS
         ; Identifier - Vector<:Vector<:char:>:> board
         push qword [rbp - -16]
         ; RHS
         push qword [.__field____main____Vector__Vector____size] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setl al
         movzx eax, al
         push rax
         pop rax ; __cond
         cmp rax, 0 ; __cond
         je .__endfor__99
         ; Body
;---------------------------------------------------------------------------------------
         ; Code Block
;------------------------------------------------------------------------------------
         ; For-Loop
         ; Init
         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 0
         push rax
         ; LHS
         ; Variable Declaration - j
         mov rax, qword [rbp - 16]  ; __main__printboard__block__98__for__99__block__100__for__101__j
         pop rdx ; rhs value
         mov qword [rbp - 16], rdx
         push rdx
         ; Loop init result can be discarded
         pop rax
         jmp .__forcond__101
.__for__101:
         ; Update
         ; Pre-Increment - int
         ; RHS
         ; Identifier - int j
            push qword [rbp - 16]
         pop rdx
         add qword [rbp - 16], 1
         mov rax, qword [rbp - 16]
         push rax ; push result
         ; Loop update result can be discarded
         pop rax
.__forcond__101:
         ; Condition
         ; Less Than
         ; LHS
         ; Identifier - int j
            push qword [rbp - 16]
         ; RHS
         ; Member Accessor
            ; LHS
               ; Subscript
                  ; LHS
                     ; Member Accessor
                        ; LHS
                           ; Identifier - Vector<:Vector<:char:>:> board
                              push qword [rbp - -16]
                        ; RHS
                           push qword [.__field____main____Vector__Vector____data] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                  ; OFFSET
                     ; Identifier - int i
                        push qword [rbp - 8]
                  pop rdx ; __offset
                  pop rax ; __pointer
                  push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
            ; RHS
               push qword [.__field____main____Vector__char____size] ; stored index associated with field that is being accessed
            pop rdx ; rhs
            pop rax ; lhs
            push qword [rax + 8*rdx] ; lhs.rhs
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setl al
         movzx eax, al
         push rax
         pop rax ; __cond
         cmp rax, 0 ; __cond
         je .__endfor__101
         ; Body
;------------------------------------------------------------------------------
         ; Code Block
         ; Function Call - print(char) -> void
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
            ; Eval arg0
               ; Subscript
                  ; LHS
                     ; Member Accessor
                        ; LHS
                           ; Subscript
                              ; LHS
                                 ; Member Accessor
                                    ; LHS
                                       ; Identifier - Vector<:Vector<:char:>:> board
                                          push qword [rbp - -16]
                                    ; RHS
                                       push qword [.__field____main____Vector__Vector____data] ; stored index associated with field that is being accessed
                                    pop rdx ; rhs
                                    pop rax ; lhs
                                    push qword [rax + 8*rdx] ; lhs.rhs
                              ; OFFSET
                                 ; Identifier - int i
                                    push qword [rbp - 8]
                              pop rdx ; __offset
                              pop rax ; __pointer
                              push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
                        ; RHS
                           push qword [.__field____main____Vector__char____data] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                  ; OFFSET
                     ; Identifier - int j
                        push qword [rbp - 16]
                  pop rdx ; __offset
                  pop rax ; __pointer
                  mov al, byte [rax + rdx] ; pointer + sizeof(data_t) * offset
                  movzx rax, al ; zero extend because we need to push 64bit to stack
                  push rax ; push char onto stack
            ; Move arg0's result to reverse order position on stack
            pop rax
            mov qword [rsp + 0], rax
         ; Call print(char)
         call __builtin__print__char
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
;------------------------------------------------------------------------------
         ; Repeat
jmp .__for__101
         ; End of For
.__endfor__101:
;------------------------------------------------------------------------------------
         ; Function Call - println() -> void
         ; Make space for 0 arg(s)
         sub rsp, 0
         ; Arguments
         ; Call println()
         call __builtin__println
         ; Remove args
         add rsp, 0
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------------------
         ; Repeat
jmp .__for__99
         ; End of For
.__endfor__99:
;---------------------------------------------------------------------------------------------
;------------------------------------------------------------------------------------------------
         ; Function Epilogue
         mov rsp, rbp ; remove local vars + unpopped pushes
         pop rbp
         ret
.__end____main____printboard__Vector__tparam0__Vector:
         ; End Function Declaration - printboard(Vector<:Vector<:char:>:>) -> void
; ======================================================================================================

         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 10
         push rax
         ; LHS
         ; Variable Declaration - important_row
         mov rax, qword [rbp - 200]  ; __main__important_row
         pop rdx ; rhs value
         mov qword [rbp - 200], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;------------------------------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Less Than
         ; LHS
         ; Int Literal
         mov rax, 2000000
         push rax
         ; RHS
         ; Identifier - int maxx
         push qword [rbp - 152]
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setl al
         movzx eax, al
         push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__103 ; jump to end
         ; Body
         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 2000000
         push rax
         pop rdx ; rhs value
         mov qword [rbp - 200], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
         jmp .__endif__103 ; jump to end of condition chain
         ; End of if
.__endif__103:
;------------------------------------------------------------------------------------------------------
         ; Method Call - Vector<:Vector<:char:>:>::pushBack(Vector<:char:>) -> void
         ; Make space for 1 arg(s) and object parameter
         sub rsp, 16
         ; LHS
         ; Identifier - Vector<:Vector<:char:>:> board
         push qword [rbp - 192]
         pop rax ; object parameter
         mov qword [rsp + 0], rax ; place as first parameter
         ; RHS
         ; Arguments
         ; Eval arg0
         ; Constructor Call - Vector<:char:>::Vector() -> Vector<:char:>
         ; Make space for 0 arg(s)
         sub rsp, 0
         ; Arguments
         ; Call Vector<:char:>::Vector()
         call .__ctor____main____Vector__char____Vector
         ; Remove args
         add rsp, 0
         ; Push return value
         push rax
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 8], rax
         call .__method____main____Vector__Vector____pushBack__Vector
         ; Remove args
         add rsp, 16
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
;------------------------------------------------------------------------------------------------------
         ; For-Loop
         ; Init
         ; Assignment - '='
         ; RHS
         ; Identifier - int minx
         push qword [rbp - 144]
         ; LHS
         ; Variable Declaration - j
         mov rax, qword [rbp - 208]  ; __main__for__104__j
         pop rdx ; rhs value
         mov qword [rbp - 208], rdx
         push rdx
         ; Loop init result can be discarded
         pop rax
         jmp .__forcond__104
.__for__104:
         ; Update
         ; Pre-Increment - int
         ; RHS
         ; Identifier - int j
         push qword [rbp - 208]
         pop rdx
         add qword [rbp - 208], 1
         mov rax, qword [rbp - 208]
         push rax ; push result
         ; Loop update result can be discarded
         pop rax
.__forcond__104:
         ; Condition
         ; Less Than
         ; LHS
         ; Identifier - int j
         push qword [rbp - 208]
         ; RHS
         ; Identifier - int maxx
         push qword [rbp - 152]
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setl al
         movzx eax, al
         push rax
         pop rax ; __cond
         cmp rax, 0 ; __cond
         je .__endfor__104
         ; Body
;------------------------------------------------------------------------------------------------
         ; Code Block
         ; Method Call - Vector<:char:>::pushBack(char) -> void
         ; Make space for 1 arg(s) and object parameter
         sub rsp, 16
         ; LHS
         ; Subscript
         ; LHS
         ; Member Accessor
         ; LHS
         ; Identifier - Vector<:Vector<:char:>:> board
         push qword [rbp - 192]
         ; RHS
         push qword [.__field____main____Vector__Vector____data] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; OFFSET
         ; Int Literal
         mov rax, 0
         push rax
         pop rdx ; __offset
         pop rax ; __pointer
         push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
         pop rax ; object parameter
         mov qword [rsp + 0], rax ; place as first parameter
         ; RHS
         ; Arguments
         ; Eval arg0
         ; Char Literal
         push '.'
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 8], rax
         call .__method____main____Vector__char____pushBack__char
         ; Remove args
         add rsp, 16
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
;------------------------------------------------------------------------------------------------
         ; Repeat
jmp .__for__104
         ; End of For
.__endfor__104:
;------------------------------------------------------------------------------------------------------
;------------------------------------------------------------------------------------------------------
         ; For-Loop
         ; Init
         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 0
         push rax
         ; LHS
         ; Variable Declaration - i
         mov rax, qword [rbp - 216]  ; __main__for__106__i
         pop rdx ; rhs value
         mov qword [rbp - 216], rdx
         push rdx
         ; Loop init result can be discarded
         pop rax
         jmp .__forcond__106
.__for__106:
         ; Update
         ; Pre-Increment - int
         ; RHS
         ; Identifier - int i
         push qword [rbp - 216]
         pop rdx
         add qword [rbp - 216], 1
         mov rax, qword [rbp - 216]
         push rax ; push result
         ; Loop update result can be discarded
         pop rax
.__forcond__106:
         ; Condition
         ; Less Than
         ; LHS
         ; Identifier - int i
         push qword [rbp - 216]
         ; RHS
         ; Member Accessor
         ; LHS
         ; Identifier - Vector<:Sensor:> sensors
         push qword [rbp - 24]
         ; RHS
         push qword [.__field____main____Vector__Sensor____size] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setl al
         movzx eax, al
         push rax
         pop rax ; __cond
         cmp rax, 0 ; __cond
         je .__endfor__106
         ; Body
;------------------------------------------------------------------------------------------------
         ; Code Block
         ; Assignment - '='
         ; RHS
         ; Subscript
         ; LHS
         ; Member Accessor
         ; LHS
         ; Identifier - Vector<:Sensor:> sensors
         push qword [rbp - 24]
         ; RHS
         push qword [.__field____main____Vector__Sensor____data] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; OFFSET
         ; Identifier - int i
         push qword [rbp - 216]
         pop rdx ; __offset
         pop rax ; __pointer
         push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
         ; LHS
         ; Variable Declaration - sensor
         mov rax, qword [rbp - 224]  ; __main__for__106__block__107__sensor
         pop rdx ; rhs value
         mov qword [rbp - 224], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;---------------------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; AND
         ; Eval LHS
         ; Less Than or Equal to
         ; LHS
         ; Subtraction - int, int
         ; LHS
            ; Member Accessor
               ; LHS
                  ; Member Accessor
                     ; LHS
                        ; Identifier - Sensor sensor
                           push qword [rbp - 224]
                     ; RHS
                        push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
                     pop rdx ; rhs
                     pop rax ; lhs
                     push qword [rax + 8*rdx] ; lhs.rhs
               ; RHS
                  push qword [.__field____main____Point____y] ; stored index associated with field that is being accessed
               pop rdx ; rhs
               pop rax ; lhs
               push qword [rax + 8*rdx] ; lhs.rhs
         ; RHS
            ; Member Accessor
               ; LHS
                  ; Identifier - Sensor sensor
                     push qword [rbp - 224]
               ; RHS
                  push qword [.__field____main____Sensor____radius] ; stored index associated with field that is being accessed
               pop rdx ; rhs
               pop rax ; lhs
               push qword [rax + 8*rdx] ; lhs.rhs
         pop rdx ; rhs
         pop rax ; lhs
         sub rax, rdx
         push rax
         ; RHS
         ; Identifier - int important_row
         push qword [rbp - 200]
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setle al
         movzx eax, al
         push rax
         ; Check if we need to short-circuit
         pop rax ; __lhs
         test rax, rax
         je .AND_SHORT_CIRCUIT109
         ; Eval RHS
         ; Less Than or Equal to
         ; LHS
         ; Identifier - int important_row
         push qword [rbp - 200]
         ; RHS
         ; Addition - int, int
         ; LHS
            ; Member Accessor
               ; LHS
                  ; Member Accessor
                     ; LHS
                        ; Identifier - Sensor sensor
                           push qword [rbp - 224]
                     ; RHS
                        push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
                     pop rdx ; rhs
                     pop rax ; lhs
                     push qword [rax + 8*rdx] ; lhs.rhs
               ; RHS
                  push qword [.__field____main____Point____y] ; stored index associated with field that is being accessed
               pop rdx ; rhs
               pop rax ; lhs
               push qword [rax + 8*rdx] ; lhs.rhs
         ; RHS
            ; Member Accessor
               ; LHS
                  ; Identifier - Sensor sensor
                     push qword [rbp - 224]
               ; RHS
                  push qword [.__field____main____Sensor____radius] ; stored index associated with field that is being accessed
               pop rdx ; rhs
               pop rax ; lhs
               push qword [rax + 8*rdx] ; lhs.rhs
         pop rdx ; rhs
         pop rax ; lhs
         add rax, rdx
         push rax
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setle al
         movzx eax, al
         push rax
         ; Check RHS
         pop rax ; __rhs
         test rax, rax
         je .AND_SHORT_CIRCUIT109
         ; Success state
         mov rax, 1 ; result = True
         jmp .AND_END109
.AND_SHORT_CIRCUIT109:
         mov rax, 0 ; result = False
.AND_END109:
         movzx eax, al
         push rax ; result
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__108 ; jump to end
         ; Body
;---------------------------------------------------------------------------------------
         ; Code Block
;------------------------------------------------------------------------------------
         ; For-Loop
         ; Init
         ; Assignment - '='
         ; RHS
         ; Addition - int, int
         ; LHS
            ; Subtraction - int, int
               ; LHS
                  ; Member Accessor
                     ; LHS
                        ; Member Accessor
                           ; LHS
                              ; Identifier - Sensor sensor
                                 push qword [rbp - 224]
                           ; RHS
                              push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
                           pop rdx ; rhs
                           pop rax ; lhs
                           push qword [rax + 8*rdx] ; lhs.rhs
                     ; RHS
                        push qword [.__field____main____Point____x] ; stored index associated with field that is being accessed
                     pop rdx ; rhs
                     pop rax ; lhs
                     push qword [rax + 8*rdx] ; lhs.rhs
               ; RHS
                  ; Member Accessor
                     ; LHS
                        ; Identifier - Sensor sensor
                           push qword [rbp - 224]
                     ; RHS
                        push qword [.__field____main____Sensor____radius] ; stored index associated with field that is being accessed
                     pop rdx ; rhs
                     pop rax ; lhs
                     push qword [rax + 8*rdx] ; lhs.rhs
               pop rdx ; rhs
               pop rax ; lhs
               sub rax, rdx
               push rax
         ; RHS
            ; Function Call - abs(int) -> int
               ; Make space for 1 arg(s)
               sub rsp, 8
               ; Arguments
                  ; Eval arg0
                     ; Subtraction - int, int
                        ; LHS
                           ; Member Accessor
                              ; LHS
                                 ; Member Accessor
                                    ; LHS
                                       ; Identifier - Sensor sensor
                                          push qword [rbp - 224]
                                    ; RHS
                                       push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
                                    pop rdx ; rhs
                                    pop rax ; lhs
                                    push qword [rax + 8*rdx] ; lhs.rhs
                              ; RHS
                                 push qword [.__field____main____Point____y] ; stored index associated with field that is being accessed
                              pop rdx ; rhs
                              pop rax ; lhs
                              push qword [rax + 8*rdx] ; lhs.rhs
                        ; RHS
                           ; Identifier - int important_row
                              push qword [rbp - 200]
                        pop rdx ; rhs
                        pop rax ; lhs
                        sub rax, rdx
                        push rax
                  ; Move arg0's result to reverse order position on stack
                  pop rax
                  mov qword [rsp + 0], rax
               ; Call abs(int)
               call .__main____abs__int
               ; Remove args
               add rsp, 8
               ; Push return value
               push rax
         pop rdx ; rhs
         pop rax ; lhs
         add rax, rdx
         push rax
         ; LHS
         ; Variable Declaration - j
         mov rax, qword [rbp - 232]  ; __main__for__106__block__107__if__108__block__110__for__111__j
         pop rdx ; rhs value
         mov qword [rbp - 232], rdx
         push rdx
         ; Loop init result can be discarded
         pop rax
         jmp .__forcond__111
.__for__111:
         ; Update
         ; Pre-Increment - int
         ; RHS
         ; Identifier - int j
            push qword [rbp - 232]
         pop rdx
         add qword [rbp - 232], 1
         mov rax, qword [rbp - 232]
         push rax ; push result
         ; Loop update result can be discarded
         pop rax
.__forcond__111:
         ; Condition
         ; Less Than or Equal to
         ; LHS
         ; Identifier - int j
            push qword [rbp - 232]
         ; RHS
         ; Subtraction - int, int
            ; LHS
               ; Addition - int, int
                  ; LHS
                     ; Member Accessor
                        ; LHS
                           ; Member Accessor
                              ; LHS
                                 ; Identifier - Sensor sensor
                                    push qword [rbp - 224]
                              ; RHS
                                 push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
                              pop rdx ; rhs
                              pop rax ; lhs
                              push qword [rax + 8*rdx] ; lhs.rhs
                        ; RHS
                           push qword [.__field____main____Point____x] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                  ; RHS
                     ; Member Accessor
                        ; LHS
                           ; Identifier - Sensor sensor
                              push qword [rbp - 224]
                        ; RHS
                           push qword [.__field____main____Sensor____radius] ; stored index associated with field that is being accessed
                        pop rdx ; rhs
                        pop rax ; lhs
                        push qword [rax + 8*rdx] ; lhs.rhs
                  pop rdx ; rhs
                  pop rax ; lhs
                  add rax, rdx
                  push rax
            ; RHS
               ; Function Call - abs(int) -> int
                  ; Make space for 1 arg(s)
                  sub rsp, 8
                  ; Arguments
                     ; Eval arg0
                        ; Subtraction - int, int
                           ; LHS
                              ; Member Accessor
                                 ; LHS
                                    ; Member Accessor
                                       ; LHS
                                          ; Identifier - Sensor sensor
                                             push qword [rbp - 224]
                                       ; RHS
                                          push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
                                       pop rdx ; rhs
                                       pop rax ; lhs
                                       push qword [rax + 8*rdx] ; lhs.rhs
                                 ; RHS
                                    push qword [.__field____main____Point____y] ; stored index associated with field that is being accessed
                                 pop rdx ; rhs
                                 pop rax ; lhs
                                 push qword [rax + 8*rdx] ; lhs.rhs
                           ; RHS
                              ; Identifier - int important_row
                                 push qword [rbp - 200]
                           pop rdx ; rhs
                           pop rax ; lhs
                           sub rax, rdx
                           push rax
                     ; Move arg0's result to reverse order position on stack
                     pop rax
                     mov qword [rsp + 0], rax
                  ; Call abs(int)
                  call .__main____abs__int
                  ; Remove args
                  add rsp, 8
                  ; Push return value
                  push rax
            pop rdx ; rhs
            pop rax ; lhs
            sub rax, rdx
            push rax
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setle al
         movzx eax, al
         push rax
         pop rax ; __cond
         cmp rax, 0 ; __cond
         je .__endfor__111
         ; Body
;------------------------------------------------------------------------------
         ; Code Block
;---------------------------------------------------------------------------
         ; If-Statement
         ; Condition
            ; Equal
               ; LHS
                  ; Subscript
                     ; LHS
                        ; Member Accessor
                           ; LHS
                              ; Subscript
                                 ; LHS
                                    ; Member Accessor
                                       ; LHS
                                          ; Identifier - Vector<:Vector<:char:>:> board
                                             push qword [rbp - 192]
                                       ; RHS
                                          push qword [.__field____main____Vector__Vector____data] ; stored index associated with field that is being accessed
                                       pop rdx ; rhs
                                       pop rax ; lhs
                                       push qword [rax + 8*rdx] ; lhs.rhs
                                 ; OFFSET
                                    ; Int Literal
                                       mov rax, 0
                                       push rax
                                 pop rdx ; __offset
                                 pop rax ; __pointer
                                 push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
                           ; RHS
                              push qword [.__field____main____Vector__char____data] ; stored index associated with field that is being accessed
                           pop rdx ; rhs
                           pop rax ; lhs
                           push qword [rax + 8*rdx] ; lhs.rhs
                     ; OFFSET
                        ; Subtraction - int, int
                           ; LHS
                              ; Identifier - int j
                                 push qword [rbp - 232]
                           ; RHS
                              ; Identifier - int minx
                                 push qword [rbp - 144]
                           pop rdx ; rhs
                           pop rax ; lhs
                           sub rax, rdx
                           push rax
                     pop rdx ; __offset
                     pop rax ; __pointer
                     mov al, byte [rax + rdx] ; pointer + sizeof(data_t) * offset
                     movzx rax, al ; zero extend because we need to push 64bit to stack
                     push rax ; push char onto stack
               ; RHS
                  ; Char Literal
                     push '.'
               pop rdx ; rhs
               pop rax ; lhs
               cmp rax, rdx
               sete al
               movzx eax, al
               push rax
            pop rdx ; __cond
            cmp rdx, 0 ; ensure condition is true
            je .__endif__113 ; jump to end
         ; Body
            ; Assignment - '='
               ; RHS
                  ; Char Literal
                     push '#'
               ; LHS
                  ; Subscript assignment
                     ; LHS
                        ; Member Accessor
                           ; LHS
                              ; Subscript
                                 ; LHS
                                    ; Member Accessor
                                       ; LHS
                                          ; Identifier - Vector<:Vector<:char:>:> board
                                             push qword [rbp - 192]
                                       ; RHS
                                          push qword [.__field____main____Vector__Vector____data] ; stored index associated with field that is being accessed
                                       pop rdx ; rhs
                                       pop rax ; lhs
                                       push qword [rax + 8*rdx] ; lhs.rhs
                                 ; OFFSET
                                    ; Int Literal
                                       mov rax, 0
                                       push rax
                                 pop rdx ; __offset
                                 pop rax ; __pointer
                                 push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
                           ; RHS
                              push qword [.__field____main____Vector__char____data] ; stored index associated with field that is being accessed
                           pop rdx ; rhs
                           pop rax ; lhs
                           push qword [rax + 8*rdx] ; lhs.rhs
                     ; OFFSET
                        ; Subtraction - int, int
                           ; LHS
                              ; Identifier - int j
                                 push qword [rbp - 232]
                           ; RHS
                              ; Identifier - int minx
                                 push qword [rbp - 144]
                           pop rdx ; rhs
                           pop rax ; lhs
                           sub rax, rdx
                           push rax
                     pop rdi ; __offset
                     pop rbx ; __pointer
               pop rdx ; rhs value
               mov byte [rbx + rdi], dl
               push rdx
            ; Statement results can be ignored
            pop rdx
         jmp .__endif__113 ; jump to end of condition chain
         ; End of if
.__endif__113:
;---------------------------------------------------------------------------
;------------------------------------------------------------------------------
         ; Repeat
jmp .__for__111
         ; End of For
.__endfor__111:
;------------------------------------------------------------------------------------
;---------------------------------------------------------------------------------------
         jmp .__endif__108 ; jump to end of condition chain
         ; End of if
.__endif__108:
;---------------------------------------------------------------------------------------------
;---------------------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Equal
         ; LHS
         ; Member Accessor
         ; LHS
         ; Member Accessor
         ; LHS
            ; Identifier - Sensor sensor
               push qword [rbp - 224]
         ; RHS
            push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; RHS
         push qword [.__field____main____Point____y] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; RHS
         ; Identifier - int important_row
         push qword [rbp - 200]
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         sete al
         movzx eax, al
         push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__114 ; jump to end
         ; Body
         ; Assignment - '='
         ; RHS
         ; Char Literal
         push 'S'
         ; LHS
         ; Subscript assignment
         ; LHS
         ; Member Accessor
         ; LHS
            ; Subscript
               ; LHS
                  ; Member Accessor
                     ; LHS
                        ; Identifier - Vector<:Vector<:char:>:> board
                           push qword [rbp - 192]
                     ; RHS
                        push qword [.__field____main____Vector__Vector____data] ; stored index associated with field that is being accessed
                     pop rdx ; rhs
                     pop rax ; lhs
                     push qword [rax + 8*rdx] ; lhs.rhs
               ; OFFSET
                  ; Int Literal
                     mov rax, 0
                     push rax
               pop rdx ; __offset
               pop rax ; __pointer
               push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
         ; RHS
            push qword [.__field____main____Vector__char____data] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; OFFSET
         ; Subtraction - int, int
         ; LHS
            ; Member Accessor
               ; LHS
                  ; Member Accessor
                     ; LHS
                        ; Identifier - Sensor sensor
                           push qword [rbp - 224]
                     ; RHS
                        push qword [.__field____main____Sensor____position] ; stored index associated with field that is being accessed
                     pop rdx ; rhs
                     pop rax ; lhs
                     push qword [rax + 8*rdx] ; lhs.rhs
               ; RHS
                  push qword [.__field____main____Point____x] ; stored index associated with field that is being accessed
               pop rdx ; rhs
               pop rax ; lhs
               push qword [rax + 8*rdx] ; lhs.rhs
         ; RHS
            ; Identifier - int minx
               push qword [rbp - 144]
         pop rdx ; rhs
         pop rax ; lhs
         sub rax, rdx
         push rax
         pop rdi ; __offset
         pop rbx ; __pointer
         pop rdx ; rhs value
         mov byte [rbx + rdi], dl
         push rdx
         ; Statement results can be ignored
         pop rdx
         jmp .__endif__114 ; jump to end of condition chain
         ; End of if
.__endif__114:
;---------------------------------------------------------------------------------------------
;---------------------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Equal
         ; LHS
         ; Member Accessor
         ; LHS
         ; Member Accessor
         ; LHS
            ; Identifier - Sensor sensor
               push qword [rbp - 224]
         ; RHS
            push qword [.__field____main____Sensor____closest_beacon] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; RHS
         push qword [.__field____main____Point____y] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; RHS
         ; Identifier - int important_row
         push qword [rbp - 200]
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         sete al
         movzx eax, al
         push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__115 ; jump to end
         ; Body
         ; Assignment - '='
         ; RHS
         ; Char Literal
         push 'B'
         ; LHS
         ; Subscript assignment
         ; LHS
         ; Member Accessor
         ; LHS
            ; Subscript
               ; LHS
                  ; Member Accessor
                     ; LHS
                        ; Identifier - Vector<:Vector<:char:>:> board
                           push qword [rbp - 192]
                     ; RHS
                        push qword [.__field____main____Vector__Vector____data] ; stored index associated with field that is being accessed
                     pop rdx ; rhs
                     pop rax ; lhs
                     push qword [rax + 8*rdx] ; lhs.rhs
               ; OFFSET
                  ; Int Literal
                     mov rax, 0
                     push rax
               pop rdx ; __offset
               pop rax ; __pointer
               push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
         ; RHS
            push qword [.__field____main____Vector__char____data] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; OFFSET
         ; Subtraction - int, int
         ; LHS
            ; Member Accessor
               ; LHS
                  ; Member Accessor
                     ; LHS
                        ; Identifier - Sensor sensor
                           push qword [rbp - 224]
                     ; RHS
                        push qword [.__field____main____Sensor____closest_beacon] ; stored index associated with field that is being accessed
                     pop rdx ; rhs
                     pop rax ; lhs
                     push qword [rax + 8*rdx] ; lhs.rhs
               ; RHS
                  push qword [.__field____main____Point____x] ; stored index associated with field that is being accessed
               pop rdx ; rhs
               pop rax ; lhs
               push qword [rax + 8*rdx] ; lhs.rhs
         ; RHS
            ; Identifier - int minx
               push qword [rbp - 144]
         pop rdx ; rhs
         pop rax ; lhs
         sub rax, rdx
         push rax
         pop rdi ; __offset
         pop rbx ; __pointer
         pop rdx ; rhs value
         mov byte [rbx + rdi], dl
         push rdx
         ; Statement results can be ignored
         pop rdx
         jmp .__endif__115 ; jump to end of condition chain
         ; End of if
.__endif__115:
;---------------------------------------------------------------------------------------------
;------------------------------------------------------------------------------------------------
         ; Repeat
jmp .__for__106
         ; End of For
.__endfor__106:
;------------------------------------------------------------------------------------------------------
         ; Assignment - '='
         ; RHS
         ; Int Literal
         mov rax, 0
         push rax
         ; LHS
         ; Variable Declaration - num_beaconless
         mov rax, qword [rbp - 240]  ; __main__num_beaconless
         pop rdx ; rhs value
         mov qword [rbp - 240], rdx
         push rdx
         ; Statement results can be ignored
         pop rdx
;------------------------------------------------------------------------------------------------------
         ; For-Loop
         ; Init
         ; Assignment - '='
         ; RHS
         ; Identifier - int minx
         push qword [rbp - 144]
         ; LHS
         ; Variable Declaration - j
         mov rax, qword [rbp - 248]  ; __main__for__116__j
         pop rdx ; rhs value
         mov qword [rbp - 248], rdx
         push rdx
         ; Loop init result can be discarded
         pop rax
         jmp .__forcond__116
.__for__116:
         ; Update
         ; Pre-Increment - int
         ; RHS
         ; Identifier - int j
         push qword [rbp - 248]
         pop rdx
         add qword [rbp - 248], 1
         mov rax, qword [rbp - 248]
         push rax ; push result
         ; Loop update result can be discarded
         pop rax
.__forcond__116:
         ; Condition
         ; Less Than
         ; LHS
         ; Identifier - int j
         push qword [rbp - 248]
         ; RHS
         ; Identifier - int maxx
         push qword [rbp - 152]
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         setl al
         movzx eax, al
         push rax
         pop rax ; __cond
         cmp rax, 0 ; __cond
         je .__endfor__116
         ; Body
;------------------------------------------------------------------------------------------------
         ; Code Block
;---------------------------------------------------------------------------------------------
         ; If-Statement
         ; Condition
         ; Equal
         ; LHS
         ; Subscript
         ; LHS
         ; Member Accessor
         ; LHS
            ; Subscript
               ; LHS
                  ; Member Accessor
                     ; LHS
                        ; Identifier - Vector<:Vector<:char:>:> board
                           push qword [rbp - 192]
                     ; RHS
                        push qword [.__field____main____Vector__Vector____data] ; stored index associated with field that is being accessed
                     pop rdx ; rhs
                     pop rax ; lhs
                     push qword [rax + 8*rdx] ; lhs.rhs
               ; OFFSET
                  ; Int Literal
                     mov rax, 0
                     push rax
               pop rdx ; __offset
               pop rax ; __pointer
               push qword [rax + 8*rdx] ; pointer + sizeof(data_t) * offset
         ; RHS
            push qword [.__field____main____Vector__char____data] ; stored index associated with field that is being accessed
         pop rdx ; rhs
         pop rax ; lhs
         push qword [rax + 8*rdx] ; lhs.rhs
         ; OFFSET
         ; Subtraction - int, int
         ; LHS
            ; Identifier - int j
               push qword [rbp - 248]
         ; RHS
            ; Identifier - int minx
               push qword [rbp - 144]
         pop rdx ; rhs
         pop rax ; lhs
         sub rax, rdx
         push rax
         pop rdx ; __offset
         pop rax ; __pointer
         mov al, byte [rax + rdx] ; pointer + sizeof(data_t) * offset
         movzx rax, al ; zero extend because we need to push 64bit to stack
         push rax ; push char onto stack
         ; RHS
         ; Char Literal
         push '#'
         pop rdx ; rhs
         pop rax ; lhs
         cmp rax, rdx
         sete al
         movzx eax, al
         push rax
         pop rdx ; __cond
         cmp rdx, 0 ; ensure condition is true
         je .__endif__118 ; jump to end
         ; Body
         ; Pre-Increment - int
         ; RHS
         ; Identifier - int num_beaconless
         push qword [rbp - 240]
         pop rdx
         add qword [rbp - 240], 1
         mov rax, qword [rbp - 240]
         push rax ; push result
         ; Statement results can be ignored
         pop rdx
         jmp .__endif__118 ; jump to end of condition chain
         ; End of if
.__endif__118:
;---------------------------------------------------------------------------------------------
;------------------------------------------------------------------------------------------------
         ; Repeat
jmp .__for__116
         ; End of For
.__endfor__116:
;------------------------------------------------------------------------------------------------------
         ; Function Call - println(int) -> void
         ; Make space for 1 arg(s)
         sub rsp, 8
         ; Arguments
         ; Eval arg0
         ; Identifier - int num_beaconless
         push qword [rbp - 240]
         ; Move arg0's result to reverse order position on stack
         pop rax
         mov qword [rsp + 0], rax
         ; Call println(int)
         call __builtin__println__int
         ; Remove args
         add rsp, 8
         ; Push return value
         push rax
         ; Statement results can be ignored
         pop rdx
; ======================================================================================================
; ### END OF CODE ######################################################################################
; ======================================================================================================

         push 0
         call __builtin__exit__int
; ======================================================================================================
; ### DATA SECTION #####################################################################################
; ======================================================================================================

         section .data
.float0: dq 0.0
.floatNegOne: dq -1.0
.floatZero: dq 0.0
.floatOne: dq 1.0