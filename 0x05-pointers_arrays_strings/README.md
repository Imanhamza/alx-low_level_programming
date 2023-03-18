# 0x05. C - Pointers, arrays and strings
---
> A pointer is a variable which contains a memory address.  
> Array in C can be defined as a method of clubbing multiple entities of similar type into a larger group.  
> String are special kind of arrays.
---
### Resources
* [`C - Arrays`](https://www.tutorialspoint.com/cprogramming/c_arrays.htm).
* [`C - Pointers`](https://www.tutorialspoint.com/cprogramming/c_pointers.htm).
* [`C - Strings`](https://www.tutorialspoint.com/cprogramming/c_strings.htm).
* [`Memory Layout`](https://aticleworld.com/memory-layout-of-c-program/).
---
### Files Structure
|**File**|**Discription**|
|---|---|
|[98 Battery st.](./0-reset_to_98.c)| A function that takes a pointer to an `int` as parameter and updates the value it points to to `98`.|
|[Swap](./1-swap.c)| A function that swaps the values of two integers.|
|[STR Length](./2-strlen.c)| A function that returns the length of a string.|
|[A string out](./3-puts.c)| A function that prints a string, followed by a new line, to `stdout`.|
|[Reverse gear](./4-print_rev.c)| A function that prints a string, in reverse.|
|[Reverser](./5-rev_string.c)| A function that reverses a string.|
|[Skip a letter](./6-puts2.c)| A function that prints every other character of a string, starting with the first character.|
|[Half a string](./7-puts_half.c)| A function that prints half of a string.|
|[Arrays are not pointers](./8-print_array.c)| A function that prints `n` elements of an array of integers.|
|[Strcpy](./9-strcpy.c)| A function that copies the string pointed to by `src`, including the terminating null byte (`\0`), to the buffer pointed to by `dest`.
|[Converter](./100-atoi.c)| A function that convert a string to an integer.|
|[Crackme](./101-keygen.c)| A program that generates random valid passwords for the program [101-crackme](https://github.com/holbertonschool/0x04.c).
---
### General Requirements
* All files should end with a new line.
* Code should use the `Betty` style.
* Not allowed to use global variables.
* No more than 5 functions per file.
* Not allowed to use the standard library.
* Allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c).
* All the prototypes of all functions should be present in [The header File](./main.h).
