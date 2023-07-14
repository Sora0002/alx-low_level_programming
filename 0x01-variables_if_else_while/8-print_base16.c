#include <stdio.h>
/**
 * main - Entry point
 * Description: Hexadecimal .
 * Return: 0 for success
 */
int main(void)
{
	int a = 0;

	while (a < 16)
	{
		if (a > 9)
			putchar(a + 87);
		else
			putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
