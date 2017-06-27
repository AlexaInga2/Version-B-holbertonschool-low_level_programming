#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees a list_t list
 * @head: pointer to the first list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
