#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the node of the listint_y linked list
 *
 * @head: double ptr to the head node
 *
 * Return: value of head node
 */
int pop_listint(listint_y **head)
{
	listint_y *heatnode;
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
