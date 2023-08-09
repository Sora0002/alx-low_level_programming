#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#include <stdlib.h>

/*_Putchar function*/

int _putchar(char c);

/* create_array function */

char *create_array(unsigned int size, char c);

/*_strdup() function */

char *_strdup(char *str);

/* str_concat function */

char *str_concat(char *s1, char *s2);

/*alloc_grid function */

int **alloc_grid(int width, int height);

/* free_grid function */

void free_grid(int **grid, int height);

#endif
