#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/*_Putchar function*/

int _putchar(char c);

/*_memset function*/

char *_memset(char *s, char b, unsigned int n);

/* memcpy function*/

char *_memcpy(char *dest, char *src, unsigned int n);

/* _strchr function */

char *_strchr(char *s, char c);

/* _strspn function */

unsigned int _strspn(char *s, char *accept);

/* strpbrk function */

char *_strpbrk(char *s, char *accept);

/* _strstr function */

char *_strstr(char *haystack, char *needle);

/* print_chessboard function*/

void print_chessboard(char (*a)[8]);

/* print_diagsums function */

void print_diagsums(int *a, int size);

/*set_string function*/

void set_string(char **s, char *to);

#endif
