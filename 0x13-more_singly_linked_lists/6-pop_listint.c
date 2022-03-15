#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the node of the listint_t linked list
 *
 * @head: double ptr to the head node
 *
 * Return: value of head node
 */
int pop_listint(listint_t **head)
{
	listint_t *heatnode;
	int value;

	if (*head == NULL)
		return (0);

	else
	{
		heatnode = *head;
		*head = (*head)->next;
		value = heatnode->n;
		free(heatnode);
	}
return (value);
}
