#include "lists.h"

/**
 * sum_dlistint - This returns the sum of all
 * the data of a dlistint_t list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: The sum of all the data, or 0 if the list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
