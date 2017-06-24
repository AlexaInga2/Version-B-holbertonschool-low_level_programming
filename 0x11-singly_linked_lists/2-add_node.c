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
 * add_node - adds a new node
 * @head: double pointer
 * @str: string for new node
 *
 * Return: pointer to a new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;
	return (new);
}
