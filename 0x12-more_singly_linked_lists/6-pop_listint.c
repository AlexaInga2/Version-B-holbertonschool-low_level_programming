#include "lists.h"
#include <stdio.h>
/**
 * pop_listint - deletes the head node of linked list
 * @head: first node of linked list & double pointer
 *
 * Return: the head node's data, unless LL is empty, then return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int n; /* n is the data*/

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	n = start->n;
	free(start);
	return (n);
}
