#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - adds a new node
 * @head:double pointer
 * @str: string for new node
 *
 * Return: pointer to a new node
 */
list_t *add_node(list_t **head, const char *str)
{
  list_t *new;

  if (str == NULL)
    return (NULL);
  new = malloc(sizeof(list_t));
  if (new == NULL)
    return (NULL);
  

}
