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
      printf("[%i] %s\n", temp->len, temp->str);
      temp = temp->next;
    }
  return (i);
}

 /** WITHIN THE LIST.H HEADER FILE, BELOW ARE WHERE *STR, NEXT, AND LEN ARE CALLED FOR ABOVE VARIABLES
     * struct list_s - singly linked list
     * @str: string - (malloc'ed string)
     * @len: length of the string
     * @next: points to the next node
     *
     * Description: singly linked list node structure
     * for Holberton project

typedef struct list_s
{
  char *str;
  unsigned int len;
  struct list_s *next;
} list_t;
 */
