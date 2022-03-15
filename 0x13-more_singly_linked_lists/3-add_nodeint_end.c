#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - add a new head node at the tail of the listint_t list
 * @head: double pointer to the current head
 * @n: int to put in new node
 *
 * Return: address of new element, or NULL if error
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t = *Node, *endNode;

	Node = malloc(sizeof(listint_t));
		if (Node == NULL)
			return (NULL);

	Node->n = n;
	Node->next = NULL;
	if (*head == NULL)
		*head = Node;
	else
	{
		endNode	= *head;
		while (endNode->next != NULL)
			endNode = endNode->next;
		endNode->next = Node;
	}
	return (*head);
}
