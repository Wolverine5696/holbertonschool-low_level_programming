#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elements in the list size_t
 *
 * @h: function pointer
 *
 * Return: nodes counted
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
return (counter);
}
