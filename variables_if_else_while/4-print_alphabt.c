#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'd'; c++)
	{
		putchar(c);
	}
	for (c = 'f'; c <= 'p'; c++)
	{	putchar(c);

	}
	for (c = 'r'; c <= 'z'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
