# 0x03. C - Debugging
___
>Debugging is the process of finding and fixing errors in software that prevents it from running correctly. As you become a more advanced programmer and an industry engineer, you will learn how to use debugging tools such as `gdb` or built-in tools that IDEs have. However, it’s important to understand the concepts and processes of debugging manually.
___
### Resources
- [`Debugging`](https://en.wikipedia.org/wiki/Debugging)
- [`Rubber Duck Debugging`](https://www.thoughtfulcode.com/rubber-duck-debugging-psychology/)
___
### File Structure

| **File** |**Description**|
|-----|----|
|[Header File](./main.h)| File contain all the prototypes of all function used.|
|[Main file 1](./0-main.c)| Test that the function positive_or_negative() gives the correct output when given a case of 0.|
|[Main File 2](./1-main.c)| An updated version of the same file had some issues|
|[Largest of Three](./2-largest_number.c)| A program prints the largest of three integers.|
|[Leap year](./3-print_remaining_days.c)| A file contains a fixation the `print_remaining_days()` function so that the output works correctly for all dates and all leap years.|
___
### General Requirements
- All files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.
- All files should end with a new line
- The code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl`
