#include "main.h"

/**
 * print_square - Entry point
 * @n: input
 * Description: function that prints a square, followed by a new line.
 */
void print_square(int n)
{
	int longueur;
	int largeur;

	if (n > 0)
	{
		for (longueur = 0; longueur < n; longueur++)
		{
			for (largeur = 0; largeur < n; largeur++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
	_putchar('\n');
	}
}
