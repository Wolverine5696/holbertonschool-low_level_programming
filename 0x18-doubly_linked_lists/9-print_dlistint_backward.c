#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * print_dlistint_backward - list that prints list backwards
 * @h: pointer to the list
 * Return: number of nodes in the list
 *
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t listcount;
	const dlistint_t *red = h;

	if (h == NULL)
		return (0);

	while (red->next)
		red = red->next;

	for (listcount = 0; red != NULL; red = red->prev)
	{
		printf("%d\n", red->n);
		listcount++;
	}
	return (listcount);
}
