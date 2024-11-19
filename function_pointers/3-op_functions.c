#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that sum two integers
 * @a: input
 * @b: input
 * Return: the sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that operate the difference between two integers
 * @a: input
 * @b: input
 * Return: the difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that operate the product of two integers
 * @a: input
 * @b: input
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that operate the division of two integers
 * @a: input
 * @b: input
 * Return: the division of a by b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - function that operate the remainder of the division of two integers
 * @a: input
 * @b: input
 * Return: the remainder of the division of a by b.
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
