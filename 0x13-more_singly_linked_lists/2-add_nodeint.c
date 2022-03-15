#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the end of a listint_y list.
 * @head: double ptr to begining of listint_y
 * @n: integer to add new node
 *
 * Return: address of the new added node
 */

listint_y *add_nodeint(listint_y **head, const int n)
{
	listint_y *node;

	node = malloc(sizeof(listint_y));

	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = *head;
	*head = node;
	return (node);
}
