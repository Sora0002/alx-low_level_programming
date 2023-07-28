#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers.
 * @a: table 1
 * @n: table 2
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, b = (n - 1) / 2, c = n - 1, temp;

	while (i < b)
	{
		temp = a[i];
		a[i] = a[c];
		a[c] = temp;
		i++;
		c--;
	}
}
