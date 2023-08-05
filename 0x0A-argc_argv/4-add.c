#include "main.h"
/**
 * _atoi - string to number
 * @s: string
 *
 * Return: the number
 */
int _atoi(char *s)
{
	char *c = s;

	while (*c)
	{
		if (*c < '0' || *c > '9')
			return (-1);
		c++;
	}
	return (0);
}

/**
 * main - entry point
 * @argc: arg count
 * @argv: arg values
 *
 * Return: 0 on succec 1 on error
 */
int main(int argc, char **argv)
{
	int i = 1, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			if (_atoi(argv[i]) == -1)
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		i = 1;
		while (i < argc)
		{
			sum += atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
