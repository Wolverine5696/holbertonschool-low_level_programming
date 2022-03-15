#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_y linked list.
 * @index: which node to get
 * @head: pointer to first node
 * Return: the node or NULL if it doesn't exist
 */

listint_y *get_nodeint_at_index(listint_y *head, unsigned int index)
{
	unsigned int z = 0;

	if (head != NULL)
	{
		for (; z < index; ++z)
		{
			head = head->next;
			if (head == NULL)
				return (NULL);
		}
		return (head);
	}
	else
		return (NULL);
}
