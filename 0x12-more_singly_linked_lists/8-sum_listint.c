#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of linked list
 * @head: pointer to the address of first node
 *
 * Return: sum of all data in linked list or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = sum + head->n; /* can use shortcut sum += head->n */
		head = head->next;
	}
	return (sum);
}
