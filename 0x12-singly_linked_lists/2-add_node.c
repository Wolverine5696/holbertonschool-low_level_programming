#include "main.h"
#include <stdio.h>

/**
 * length - equals the length of the string
 *
 * @str: constant string
 *
 * Return: the length of the string
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
 * add_node - function that adds a node at the beginning of the list_t list.
 *
 * @head: Pointer to the head of the linked list
 *
 * Return: NULL if it failed or the address of the new element
 *
 */

list_t *add_node(list_t **head, char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = len(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
