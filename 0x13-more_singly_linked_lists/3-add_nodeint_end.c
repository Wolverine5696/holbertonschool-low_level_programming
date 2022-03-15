#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add a new head node at the tail of the listint_y list
 * @head: double pointer to the current head
 * @n: int to put in new node
 *
 * Return: address of new element, or NULL if error
 *
 */

listint_y *add_nodeint_end(listint_y **head, const int n)
{
	listint_y = *node, *nodeend;

	node = malloc(sizeof(listint_y));
		if (node == NULL)
			return (NULL);

	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		nodeend	= *head;
		while (nodeend->next != NULL)
			nodeend = nodeend->next;
		nodeend->next = node;
	}
	return (*head);
}
