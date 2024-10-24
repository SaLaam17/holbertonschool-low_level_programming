#include "main.h"

/**
 *Description: print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 *
 */

void print_alphabet_x10(void)

{	int ligne;
	char ch;

	for (ligne = 1; ligne <= 10; ligne++)
	{
		ch = 'a';
		while (ch <= ('z'))
		{
			_putchar(ch);
			ch++;
		}

	_putchar('\n');

	}
}
