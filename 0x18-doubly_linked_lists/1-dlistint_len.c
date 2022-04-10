#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * main - returns the number of elements in the list
 *
 * @h: listcount pointer
 *
 * return: listcount
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t listcount = 0;
	const dlistint_t *razor = h;

	if (h == NULL)
		return (0);

	while (razor != NULL)
	{
		listcount++;
		razor = razor->next;
	}
	return (listcount);
}	
