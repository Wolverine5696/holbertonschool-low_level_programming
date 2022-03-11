#include "lists.h"
#include <stdio.h>

/**
 * list_len - returns the elements in the linked list
 *
 * @h: this is the single list
 *
 * Return: number of elements in the linked list
 */
size_t list_len(const list_t *h)
{
	int razor = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		razor += 1;
		h = h->next;
	}
	return (razor);
}
