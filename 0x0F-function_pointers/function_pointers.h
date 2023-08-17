#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

/* standard libraries */
#include <stdio.h>
#include <stdlib.h>

/*0x0F functions*/
void print_name(char *name, void (*f)(char *));

#endif
