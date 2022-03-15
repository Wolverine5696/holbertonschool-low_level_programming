#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index- deletes a node at index
 * @head: double pnr to list
 * @index: which node to delete
 * Return: 1 if success or -1 upon failure.
 */

int delete_nodeint_at_index(listint_y **head, unsigned int index)
{
	listint_y *nextNode, *currentNode, *tempNode = *head;
	unsigned int k;

	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tempNode);
		return (1);
	}
	currentNode = tempNode;
	for (k = 0; k < index - 1 && tempNode != NULL; k++)
	{
		if (currentNode->next == NULL)
			return (-1);
		currentNode = currentNode->next;
	}
	nextNode = currentNode->next;
	currentNode->next = nextNode->next;
	free(nextNode);
	return (1);
}
