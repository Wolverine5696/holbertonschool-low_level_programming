#ifndef LISTS_H
#define LISTS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct listint_x - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_x
{
	int n;
	struct listint_x *next;
} listint_y;

int _strlen(char *s);
int _putchar(char c);
size_t print_listint(const listint_y *h);
size_t listint_len(const listint_y *h);
listint_y *add_nodeint(listint_y **head, const int n);
listint_y *add_nodeint_end(listint_y **head, const int n);
void free_listint(listint_y *head);
void free_listint2(listint_y **head);
int pop_listint(listint_y **head);
listint_y *get_nodeint_at_index(listint_y *head, unsigned int index);
int sum_listint(listint_y *head);
listint_y *insert_nodeint_at_index(listint_y **head, unsigned int idx, int n);
int delete_nodeint_at_index(listint_y **head, unsigned int index);

#endif /* LISTS_H */
