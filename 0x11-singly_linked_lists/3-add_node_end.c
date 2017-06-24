#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * _strlen - adds a new node
 * @str: string to find len
 *
 * Return: the len or 0 if null
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	for (i = 0; str && str[i]; i++)
		;
	return (i);
}
/**
 * add_node_end - adds a new node
 * @head: double pointer
 * @str: string for new node
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;

		if (str == NULL)
			return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new;
	return (new);
}
