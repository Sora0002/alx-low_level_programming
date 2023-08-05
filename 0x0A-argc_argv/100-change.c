#include "main.h"
/**
 * main - entry point
 * @argc: arg count
 * @argv: arg value
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int cents, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[argc - 1]);
	while (cents != 0)
	{
		if (cents % 25 == 0)
		{
			cents -= 25;
		}
		else if (cents % 10 == 0)
		{
			cents -= 10;
		}
		else if (cents % 5 == 0)
		{
			cents -= 5;
		}
		else if (cents % 2 == 0)
		{
			cents -= 2;
		}
		else
		{
			cents -= 1;
		}
		coins++;
	}
	printf("%d\n", coins);
	return (0);
}
