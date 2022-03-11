#include "main.h"
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

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);
		count += 1;
		h = h->next;
	}
	return (count);
}
