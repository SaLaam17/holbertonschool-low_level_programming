#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_char - function that print a char
 * @args: list of arguments
*/
void print_char(va_list args)
{
	printf("%c", va_arg(args, char));
}

/**
 * print_int - function that print an int
 * @args: list of arguments
*/
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - function that print a float
 * @args: list of arguments
*/
void print_float(va_list args)
{
	printf("%f", va_arg(args, float));
}

/**
 * print_string - function that print a string
 * @args: list of arguments
*/

void print_string(va_list args)
{
	printf("%s", va_arg(args, char *));
	
	if (va_arg(args, char *) == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", va_arg(args, char *));
}

 /**
 * print_all - function that prints anything.
 * @format: A string of characters representing the argument types.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j =0;
	name_name array []= {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}
	};

	va_start(args, format);






	va_end(args);


