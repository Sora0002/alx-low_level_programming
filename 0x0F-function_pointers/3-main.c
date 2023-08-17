#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>
/**
 * main - entry point
 * @argc: args count
 * @argv: args values
 *
 * Return: 0 on success
*/
int main(int __attribute__((__unused__)) argc, char **argv)
{
	int (*op)(int, int), n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = get_op_func(argv[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '%' || argv[2][0] == '/') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", op(n1, n2));
	return (0);
}
