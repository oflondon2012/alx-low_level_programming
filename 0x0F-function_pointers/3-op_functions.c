#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function for sum of two number
 *
 * @a: first variable
 * @b: second variable
 *
 * Return: addition of 2 numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function for subtraction of two number
 *
 * @a: first variable
 * @b: second variable
 *
 * Return: sub of 2 numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function for multiplication of two number
 *
 * @a: first variable
 * @b: second variable
 *
 * Return: multiplication of 2 numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function for division operation
 *
 * @a: first variable
 * @b: second variable
 *
 * Return: division of 2 numbers
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function for mod operation
 *
 * @a: first variable
 * @b: second variable
 *
 * Return: mod of 2 numbers
 */

int op_mod(int a, int b)
{
	return (a % b);
}
