#include "lists.h"

/**
 * get_dnodeint_at_index - This is a function that returns the
 * nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node, starting from 0
 * Return: The pointer to the nth node, or NULL if the node does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int the_count = 0;

	while (!head)
	{
		if (the_count == index)
		{
			return (head);
		}
		the_count++;
		head = head->next;
	}

	return (NULL);
}

