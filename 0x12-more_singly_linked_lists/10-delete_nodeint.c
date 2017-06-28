#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - deletes node at index
 * @head: double pointer
 * @index: index of node to delete
 *
 * Return: pointer to the index
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; temp != NULL && i < index - 1; i++)
		temp = temp->next;
	if (temp == NULL || temp->next == NULL)
		return (-1);
	next = temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
