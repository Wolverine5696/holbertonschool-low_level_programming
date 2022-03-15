#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - puts a new node at idx
 * @head: double point to list
 * @n: data for the node
 * @idx: where to insert
 * Return: inserted node
 */

listint_y *insert_nodeint_at_index(listint_y **head, unsigned int idx, int n)
{
	unsigned int d;
	listint_y *currentNode, *Node = malloc(sizeof(listint_y));

	if (head == NULL || Node == NULL)
		return (NULL);

	Node->n = n;
	if (idx != 0)
	{
		currentNode = *head;
		for (d = 0; d < idx - 1; d++)
		{
			if (currentNode == NULL || currentNode->next == NULL)
			{
				return (NULL);
			}
			currentNode = currentNode->next;
		}
	}
	if (idx == 0)
	{
		Node->next = *head;
		*head = Node;
		return (Node);
	}
	Node->next = currentNode->next;
	currentNode->next = Node;
	return (Node);
}
