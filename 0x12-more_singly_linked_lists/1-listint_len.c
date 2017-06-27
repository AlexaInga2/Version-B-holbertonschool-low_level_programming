#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns all elements of listint_t list
 * @h:  pointer to the first spot/start of the list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t numb;

	numb = 0;
	while (h != NULL)
	{
		h = h->next;
		numb++;
	}
	return (numb);
}
