#include "lists.h"

/**
 * sum_dlistint - function that returns
 * the sum of all the data (n) of a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * Return: the sum of all the data, if the list is empty, return 0.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		sum = sum + tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
