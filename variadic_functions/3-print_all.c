#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>


/**
 * print_string - function that print a string
 * @nom_liste: 
*/

void print_string(va_list nom_liste)
{
	printf("%s", va_arg(nom_liste, char *));
}

/**
 * print_int - function that print an int
 * @nom_liste: 
*/
void print_int(va_list nom_liste)
{
	printf("%d", va_arg(nom_liste, int));
}

/**
 * print_float - function that print a float
 * @nom_liste: 
*/
void print_float(va_list nom_liste)
{
	printf("%f", va_arg(nom_liste, float));
}

/**
 * print_char - function that print a char
 * @nom_liste: 
*/
void print_char(va_list nom_liste)
{
	printf("%s", va_arg(nom_liste, char));
}

 /**
 * print_all - function that prints anything.
 *
 */

void print_all(const char * const format, ...)
{
	va_list nom_liste;
	int i = 0;
	int j =0;

	va_start(nom_liste, format);
}

