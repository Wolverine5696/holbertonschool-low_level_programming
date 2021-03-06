#include "lists.h"
#include <stdio.h>

/**
 * free_listint2- frees a listint_t list.
 * @head: first node in listint_t list
 * Return: void
 */


void free_listint2(listint_t **head)
{
	listint_t *heat;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		heat = (*head)->next;
		free(*head);
		(*head) = heat;
	}
}
