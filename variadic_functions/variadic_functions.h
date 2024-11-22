#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct type_format - A new struct type defining a printer.
 * @specifier: a char representing a data type.
 * @f: function pointer to a function that prints
 * a data type corresponding to letter.
 */

typedef struct type_format
{
	char *specifier; 
	void(*f)(va_list args);
} form_t;


int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list args);
void print_int(va_list args);
void print_float(va_list args);
void print_string(va_list args);

#endif
