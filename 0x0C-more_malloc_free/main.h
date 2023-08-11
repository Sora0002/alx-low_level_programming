#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

/*putchar function*/

int _putchar(char c);

/* malloc_checked function */

void *malloc_checked(unsigned int b);

/* string_nconcat function */

char *string_nconcat(char *s1, char *s2, unsigned int n);

/* _calloc function */

void *_calloc(unsigned int nmemb, unsigned int size);

#endif
