#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * positive_or_negative - function to check sign
 * @n: the var to check
 * Description: check the sign of a var
 * Return: void
 */
void positive_or_negative(int n)
{
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
}
