#include "lists.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * get_dnodeint_at_index - function that adds a node to the list
 *
 * @head: input structure
 * @index: index of the structure
 * Return: added the node to the list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int listcount = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		listcount++;
		head = head->next;
	}
	return (NULL);
}
