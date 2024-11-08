#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * Description: program that multiplies two numbers.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 (success), 1 (ERROR)
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	{
		mul = (atoi(argv[1]) * atoi(argv[2]));
		printf("%d\n", mul);
	}
	return (0);
}
