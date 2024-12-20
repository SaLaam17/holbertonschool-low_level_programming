#include "3-calc.h"
#include <stdio.h>

/**
 * get_op_func - function that selects the correct
 * function to perform the operation asked by the user
 * @s: the operator passed as argument to the program
 * Return: a pointer to the function that corresponds
 * to the operator given as a parameter.
 * if s does not match any of the 5 expected operators
 * (+, -, *, /, %), return NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *ops[i].op)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

/**
 * main - Entry point
 * int main()
 * {
 * int test = get_op_func("")(3, 0);
 * printf("%d\n",test);
 * return(0);
 * }
 */

