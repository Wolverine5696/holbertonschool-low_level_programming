#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - adds a node at the beginning of the add_dnodeint
 * list.
 *
 * @head: this is the input struct
 * @n: this is the input number for the pointer
 * Return: head node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	new_node->next = (*head);
	new_node->prev = NULL;

	if ((*head) != NULL)
		(*head)->prev = new_node;
	(*head) = new_node;
	return (*head);
}
