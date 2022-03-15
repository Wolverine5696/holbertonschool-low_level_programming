#include "lists.h"
#include <stdio.h>

/**
 * free_listint2- frees a listint_y list.
 * @head: first node in listint_y list
 * Return: void
 */


void free_listint2(listint_y **head)
{
	listint_y *heat;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		heat = (*head)->next;
		free(*head);
		(*head) = heat;
	}
}
