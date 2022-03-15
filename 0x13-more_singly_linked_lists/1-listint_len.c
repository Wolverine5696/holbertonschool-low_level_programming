#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns number of elements in the list size_y
 *
 * @h: function pointer
 *
 * Return: nodes counted
 */
size_t listint_len(const listint_y *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
return (counter);
}
