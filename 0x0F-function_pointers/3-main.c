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
	int n1, n2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	op = argv[2];
	if (op == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '%' || *op == '/') && n2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d \n", get_op_func(op)(n1, n2));
	return (0);
}
