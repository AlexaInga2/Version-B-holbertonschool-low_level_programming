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
<<<<<<< HEAD
	list_t *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	*head = temp;

=======
  list_t *new;
  
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
  new->next = *head;
  *head->new;
  return (new);
>>>>>>> 0535c21b72af9a1935daf19ccb28c527ae1194d8
}
