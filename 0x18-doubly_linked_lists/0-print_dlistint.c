#include "lists.h"
#include <stdio.h>
/**
 * main - to print the doubly linked list
 *
 * @h: dll pointer
 *
 * Return: 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	int listcount = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		listcount++;
	}
	return (listcount);
}
