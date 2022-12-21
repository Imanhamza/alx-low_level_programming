# 0x00. C - Hello, World

## Resources

- [Everything you need to know to start with C](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2022/4/e0ccf91eec6b977a9e00ed384dc285df9c2772e3.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20221221%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20221221T104957Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=f72c464bdc92c39dd4870222a47cfb40b0d65eceba757fc69b4ce243edf08d07)
- [Dennis Ritchie](https://en.wikipedia.org/wiki/Dennis_Ritchie)
- [“C” Programming Language: Brian Kernighan](https://www.youtube.com/watch?v=de2Hsvxaf8M)
- [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
- [Learning to program in C part 1](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
- [Learning to program in C part 2](https://www.youtube.com/watch?v=FwpP_MsZWnU)
- [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
- [Betty Coding Style](https://github.com/holbertonschool/Betty/wiki)
- [Hash-bang under the hood](https://twitter.com/unix_byte/status/1024147947393495040?s=21)
- [Linus Torvalds on C++](http://harmful.cat-v.org/software/c++/linus)

## Tasks
0. [Preprocessor](./0-preprocessor) : A script that runs a C file through the preprocessor and save the result into another file:
  * The C file name will be saved in the variable `$CFILE`
  * The output should be saved in the file `c`
1. [Compiler](./1-compiler) : A script that compiles a C file but does not link:
  * The C file name will be saved in the variable `$CFILE`
  * The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
    - Example: if the C file is `main.c`, the output file should be `main.o`
2. [Assembler](./2-assembler) : A script that generates the assembly code of a C code and save it in an output file:
  * The C file name will be saved in the variable `$CFILE`
  * The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
    - Example: if the C file is `main.c`, the output file should be `main.s`.
3. [Name](./3-name) : A script that compiles a C file and creates an executable named `cisfun`.
  * The C file name will be saved in the variable `$CFILE`
4. [Hello, puts](./4-puts.c) : A C program that prints exactly `"Programming is like building a multilingual puzzle,` followed by a new line.
  * Use the function `puts`
  * You are not allowed to use `printf`
  * Your program should end with the value `0`
5. [Hello, printf](./5-printf.c) : C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.
  * Use the function `printf`
  * You are not allowed to use the function `puts`
  * Your program should return `0`
  * Your program should compile without warning when using the `-Wall` `gcc` option
6. [Size is not grandeur, and territory does not make a nation](./6-size.c) : C program that prints the size of various types on the computer it is compiled and run on.
  * You should produce the exact same output as in the example
  * Warnings are allowed
  * Your program should return `0`
  * You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32` `gcc` option
7. [Intel](./100-intel) : A script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
  * The C file name will be saved in the variable `$CFILE`.
  * The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
    - Example: if the C file is `main.c`, the output file should be `main.s`.
8. [UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity](./101-quote.c) : C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19`, followed by a new line, to the standard error.
  * You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
  * Your program should return 1
  * Your program should compile without any warnings when using the `-Wall` `gcc` option
