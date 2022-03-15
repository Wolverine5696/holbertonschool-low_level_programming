#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the end of a listint_t list.
 * @head: double ptr to begining of listint_t
 * @n: integer to add new node
 *
 * Return: address of the new added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
