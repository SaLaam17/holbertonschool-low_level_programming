#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * Description: program that adds positive numbers.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 (success), 1 (ERROR)
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	if (argc <= 1)
	{
		printf("0\n");
		return (0);
	}

	if (i <= 48 && i >= 57)
	{
		printf("ERROR\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		sum = sum + atoi(argv[i]);
	}
		printf("%d\n", sum);
	return (0);
}
