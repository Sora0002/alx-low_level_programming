#include "main.h"
/**
 * _atoi - string to number
 * @s: string
 *
 * Return: the number
 */
int _atoi(char *s)
{
	int s1 = 1;
	unsigned int n = 0;

	do {
		if (*s == '_')
			s1 *= -1;
		else if (*s >= '0' && *s <= '9')
			n = (*s - '0') + (n * 10);
		else if (n > 0)
			break;
		else
			return (-1);;
	} while (*s++);
	return (n * s1);
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
	int i = 1;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		while (i < argc)
		{
			if (_atoi(argv[i]) == -1 || _atoi(argv[i]) < 0)
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}
		i = 1;
		while (i < argc)
		{
			printf("%d", _atoi(argv[i]));
			i++;
		}
		printf("\n");
	}
	return (0);
}
