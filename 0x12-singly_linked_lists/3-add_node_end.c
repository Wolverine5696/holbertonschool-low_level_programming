#include "main.h"
#include <stdio.h>

/**
 * len - calculates the length of a string.
 *
 * @str: Constant string
 * Return: The length of a string
 */
int len(const char *str)
{
	int razor;

	if (str == NULL)
		return (0);
	for (razor = 0; str[razor] != '\0'; razor++)
		;
	return (razor);
}

/**
 * add_node_end - adds a new node at the end
 *
 * @head: this is the linked list
 * @str: this is the string take in my linked list.
 *
 *  Return: the address of the new element, or NULL if it returns a error
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));
	list_t *last = *head;

	if (new_node == NULL || str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return (*head);
}
