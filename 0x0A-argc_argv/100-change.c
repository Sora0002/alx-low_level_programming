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
	int cents, coins = 0, d = 0, c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[argc - 1]);
	if (cents <= 0)
		printf("0\n");
	else
	{
		while (d < 5)
		{
			if (cents >= c[d])
			{
				coins += cents / c[d];
				cents = cents % c[d];
				if (cents % c[d] == 0)
					break;
			}
			d++;
		}
		printf("%d\n", coins);
	}
	return (0);
}
