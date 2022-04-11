#include "lists.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * free_dlistint - free the memory from the doubly linked list
 * @head: this is the list
 *
 *
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}
}
