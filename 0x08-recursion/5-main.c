#include <stdio.h>

int _sqrt_recursion(int);

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int r;


	r = _sqrt_recursion(1);
	printf("%d\n", r);
	        r = _sqrt_recursion(0);
        printf("%d\n", r);
	        r = _sqrt_recursion(16777216);
        printf("%d\n", r);
	        r = _sqrt_recursion(16);
        printf("%d\n", r);
	        r = _sqrt_recursion(4);
        printf("%d\n", r);
	        r = _sqrt_recursion(6);
        printf("%d\n", r);
	return (0);
}
