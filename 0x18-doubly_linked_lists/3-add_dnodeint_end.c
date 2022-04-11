#include "lists.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * add_dnodeint_end - adds a node at the end of the list
 * @n: input number to take the struct
 * @head: double linked list
 * Return: new node
 *
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *) malloc(sizeof(dlistint_t));
	dlistint_t *last = *head;

	if (new_node == NULL)
	{
		free(new_node);
		return (new_node);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	while (last->next = new_node;
		last = last->next;
	last->next = new_node;
	new_node->prev = last;
	return (*head);
}
