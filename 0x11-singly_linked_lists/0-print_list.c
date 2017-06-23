#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first spot/start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int i;

	temp = h;
	for (i = 0; temp; i++)
	{
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (i);
}
