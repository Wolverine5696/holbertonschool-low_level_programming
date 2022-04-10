#include "lists.h"
#include <stdio.h>
/**
 * main - to print the doubly linked list
 *
 * @h: dll pointer
 *
 * Return: 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t listcount = 0;
	const dlistint_t *razor = h;
	
	if (h == NULL)
		return (0);
	
	while (razor != NULL)
	{
		printf("%d\n", razor->n);
		listcount++;
		razor = razor->next;
	}
	return (listcount);
}	
