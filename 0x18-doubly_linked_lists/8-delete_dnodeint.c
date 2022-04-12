#include <stdio.h>
#include <stdarg.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at index of a list
 * @head: list coming
 * @index: is the index of the node that should be deleted
 *
 * Return: 1 is success, -1 if it is not successful
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int x = 0;
	dlistint_t *actual = *head, *node, *node2;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		if (actual->next == NULL)
		{
			free(actual);
			*head = NULL;
			return (1);
		}
		else
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(actual);
			return (1);
		}
	}
	while (actual)
	{
		if (x == index - 1)
		{
			node = actual->next;
			actual->next = node->next;
			if (actual->next != NULL)
			{
				node2 = node->next;
				node2->prev = actual;
			}
			free(node);
			return (1);
		}
		actual = actual->next;
		x++;
	}
	return (-1);
}
