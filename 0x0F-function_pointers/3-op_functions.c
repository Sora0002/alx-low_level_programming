#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * op_add - addition
 * @a: number 1
 * @b: number 2
 * Return: result
*/
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - diffrent between 2 int
 * @a: 1st one
 * @b: 2nd one
 * Return: result
*/
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: int 1
 * @b: int 2
 * Return: result
*/
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: number1
 * @b: number2
 * Return: result
*/
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - mod
 * @a: num1
 * @b: num2
 * Return: result
*/
int op_mod(int a, int b)
{
	return (a % b);
}
