#include <stdio.h>
#include "lists.h"

/**
 * print_listint -  prints the elements of a the list.
 *
 * @h:listint_t linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t Count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		Count++;
		h = h->next;
	}
	return (Count);
}
