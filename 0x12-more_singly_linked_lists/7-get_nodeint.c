#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns nth node of a linked list
 * @head: pointer to the first node (the address) of linked list
 * @index: index of the node to return
 *
 * Return: nth node or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);
	for (count = 0; count < index && head != NULL; count++)
		head = head->next;
	return (head);
}
