#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>


/**
 * print_string - 
*/

void print_string(va_list nom_liste)
{
	printf("%s", va_arg(nom_liste, char *);
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


