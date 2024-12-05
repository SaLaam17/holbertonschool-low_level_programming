#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function that returns
 *
 * the number of elements in a linked dlistint_t list.
 * @h: pointer to the head of the list.
 * Return: the number of elements in a linked dlistint_t list.
 */


size_t dlistint_len(const dlistint_t *h)
{
	size_t count_nodes = 0;

		while (h != NULL)
		{
			count_nodes++;
			h = h->next;
		}

	return (count_nodes);
}
