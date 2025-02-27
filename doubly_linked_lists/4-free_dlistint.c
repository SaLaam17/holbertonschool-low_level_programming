#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - function that frees a list.
 * @head: a pointer to the head of a list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
