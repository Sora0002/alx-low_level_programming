#include "main.h"
/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char A[] = "_putchar";
	char c = A[0];
	int i = 1;

	while (c != '\0')
	{
		_putchar(c);
		c = A[i];
		i++;
	}
	_putchar('\n');
	return (0);
}
