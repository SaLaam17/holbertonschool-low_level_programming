#include <stdio.h>

/**
 * swap_int - Entry point
 * @ptr_a: Pointer to an int
 * @ptr_b: Pointer to an int
 * Description: function that swaps the values of two integers.
 */

void swap_int(int *ptr_a, int *ptr_b)
{
	int stockage_tempo;

	stockage_tempo = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = stockage_tempo;
}
