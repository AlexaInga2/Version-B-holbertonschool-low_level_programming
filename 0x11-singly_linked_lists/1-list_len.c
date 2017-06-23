#include <stdlib.h>
#include "lists.h"
/**
 * list_len - find the number of elements n a linked list
 * @h: pointer to the start of list
 *
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
		temp = temp->next;
	return (i);
}
