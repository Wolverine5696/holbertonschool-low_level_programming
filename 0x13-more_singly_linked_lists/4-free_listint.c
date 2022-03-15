#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees the listint_t list
 *
 * @head: pointer to the head node.
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *heat;

	while (head != NULL)
	{
		heat = head->next;
		free(head);
		head = heat;
	}
}
