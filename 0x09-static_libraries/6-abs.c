#include "main.h"
/**
 * _abs -  a function that computes the absolute value of an integer.
 * @a: the value
 * Return: the absolute value
 */
int _abs(int a)
{
	if (a < 0)
		return (a * (-1));
	else
		return (a);
}
