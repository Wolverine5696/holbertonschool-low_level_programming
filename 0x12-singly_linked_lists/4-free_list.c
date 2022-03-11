#include "lists.h"
#include <stdio.h>

/**
 * free_list - frees the list_t list
 *
 * @head: linked list
 *
 */
void free_list(list_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		list_t *tmp;

		tmp = head;
		free(tmp->str);
		free(tmp);
		head = head->next;
	}
}
