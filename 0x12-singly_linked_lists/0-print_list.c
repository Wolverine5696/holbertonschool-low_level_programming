#include "lists.h"
#include <stdio.h>

/**
 * print_list - function that prints the elements of the list_t.
 *
 * @h: value of the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		count += 1;
		h = h->next;
	}
	return (count);
}
