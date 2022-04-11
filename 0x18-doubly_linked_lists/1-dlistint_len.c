#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * dlistint_len - returns the number of elements in the list
 *
 * @h: this is the input struct pointer
 *
 * Return: the number of elements of the struct
 */

size_t dlistint_len(const dlistint_t *h)
{
	int listcount = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		h = h->next;
		listcount++;
	}
	return (listcount);
}
