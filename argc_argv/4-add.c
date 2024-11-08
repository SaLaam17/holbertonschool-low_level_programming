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
	int i;
	int sum = 0;

	if (argc < 1)
	{
		printf("0\n");
	}

		for (i = 0; i <= argc; i++)
		{
			sum = sum + atoi(argv[i]);
			printf("%d\n", sum);
		}
	return (0);
}
