#include <stdio.h>
/**
 * main - Entry point
 *
 * main to print all the sizes of all types
 * Return: Always 0 (Success)
 */
int main(void)
{
	int charSize = sizeof(char);
	int intSize = sizeof(int);
	int longSize = sizeof(long int);
	int llSize = sizeof(long long int);
	int floatSize = sizeof(float);

	printf("Size of a char: %d byte(s)\n
			Size of an int: %d byte(s)\n
			Size of a long int: %d byte(s)\n
			Size of a long long int: %d byte(s)\n
			Size of a float: %d byte(s)\n
			", charSize, intSize, longSize, llSize, floatSize);
	return (0);
}
