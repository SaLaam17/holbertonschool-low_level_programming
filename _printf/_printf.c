#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char - function that print a char
 * @args: A va_list pointing to the character to be printed.
 * Return: the number of characters printed
*/

int print_char(va_list args)
{
	char letter = va_arg(args, int);
	write (1, &letter, 1);
	return(1);
}

/**
 * print_string - function that print a string
 * @args: A va_list pointing to the string to be printed.
*/


int print_string(va_list args) 
{
	char *str = va_arg(args, char *); 
	if (str == NULL)
	{
		str = "(NULL)";
	}
	int i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return(i);
}
int print_percent(va_list args)
{
	(void)args;
	write (1, "%", 1);
	return(1);
}
 /**
 * _printf - function that prints ...
 * Description: 
 * @format: A string of characters representing the argument types.
 */

void _printf(const char * format, ...)
{
	va_list args;
	int i = 0;
	format_t array[] = {
	{"c", print_char},
	{"s", print_string},
	{'%',print_percent},
	{NULL, NULL}
	};

	va_start(args, format);

    while (format[i] != '\0') 
	{
        if (format[i] == '%') 
		{
            i++;
            int j = 0;
            while (array[j].letter != NULL) 
			{
                if (format[i] == array[j].letter[0]) 
				{
                    array[j].function_pointer(args);
                    break;
                }
                j++;
            }
        } 
		else 
		{
            write(1, &format[i], 1);
        }
        i++;
    }
	
	va_end(args);
}

