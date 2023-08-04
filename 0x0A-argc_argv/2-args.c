#include "main.h"
/**
 * Brec - a boucle to print all argument
 * @argc: arg count
 * @argv: arg value
 *
 * Return: void
 */
void Brec(int argc, char **argv)
{
	if (argc > 0)
	{
		Brec(argc - 1, argv);
		printf("%s\n", argv[argc - 1]);
	}
}
/**
 * main - entry point
 * @argc: arg count
 * @argv: arg value
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	Brec(argc, argv);
	return (0);
}
