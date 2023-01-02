#include <stdio.h>
#ifndef MAIN_H
#define MAIN_H
/**
 * File: main.h file
 * Desc: contains The prototypes of all Functions
 */

char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);

#endif
