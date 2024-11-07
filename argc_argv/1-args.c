#include "main.h"
#include <stdio.h>

/**
 * main - Entry point.
 * Description: Prints the number of arguments passed into it.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: the value of argc.
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);

	return (argc);
}
