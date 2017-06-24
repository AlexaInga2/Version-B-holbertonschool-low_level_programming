#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the first list
 *
 * Return: void
 */
void free_list(list_t *head)
{
list_t *first, *next;

first = head;
while (first != NULL)
{
next = first->next;
free(first->str);
free(first);
first = next;
}
}
