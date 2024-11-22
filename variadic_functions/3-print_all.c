#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - function that print a char
 * @args: A va_list pointing to the character to be printed.
*/

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - function that print an int
 * @args: A va_list pointing to the integer to be printed.
*/
void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - function that print a float
 * @args: A va_list pointing to the float to be printed.
*/
void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - function that print a string
 * @args: A va_list pointing to the string to be printed.
*/

void print_string(va_list args)
{
	char *str = va_arg(args, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

 /**
 * print_all - function that prints anything.
 * @format: A string of characters representing the argument types.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	int j = 0;
	char *separator = "";
	form_t array[] = {
	{"c", print_char},
	{"i", print_int},
	{"f", print_float},
	{"s", print_string},
	{NULL, NULL}
	};

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;

		while (j < 4 && format[i] != array[j].specifier[0])
			j++;

		if (j < 4)
		{
			printf("%s", separator);
				array[j].f(args);
				separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

