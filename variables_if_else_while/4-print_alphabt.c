#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, except q and e.
 *
 * Return: Always 0.
 */
int main(void)
{
	char ch = 'a';

	while (ch != 'e' && ch != 'q')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
