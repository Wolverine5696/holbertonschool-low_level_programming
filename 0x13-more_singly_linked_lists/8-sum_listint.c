#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a
 * listint_t linked list.
 * @head: pointer to beginning node
 * Return: The total or 0 if list has nothing in it
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		total = head->n + total;
		head = head->next;
	}
	return (total);
}
