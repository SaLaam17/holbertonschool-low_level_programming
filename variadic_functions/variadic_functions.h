#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

typedef struct name
{
	char *letter; 
	void(*f)(va_list);
} name_name;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list nom_liste);
void print_int(va_list nom_liste);
void print_float(va_list nom_liste);
void print_string(va_list nom_liste);

#endif
