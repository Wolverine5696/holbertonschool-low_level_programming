#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees the listint_y list
 *
 * @head: pointer to the head node.
 * Return: void
 */
void free_listint(listint_y *head)
{
	listint_y *heat;

	while (head != NULL)
	{
		heat = head->next;
		free(head);
		head = heat;
	}
}
