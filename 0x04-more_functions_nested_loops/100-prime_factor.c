#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	int a = 3;
	long int num = 612852475143;

	while (a <= num / 2)
	{
		if (num % 2 == 0)
			num = num / 2;
		else
			if (num % a == 0)
				num = num / a;
		a++;
	}
	printf("%ld \n", num);
	return (0);
}
