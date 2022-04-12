#include "lists.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_dlistint - this function returns the sum of all the data
 * @head: this is the dll
 * Return: the total of the list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
}
