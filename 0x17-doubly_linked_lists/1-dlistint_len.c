#include "lists.h"

/**
 * dlistint_len - This is a function that returns
 * element count in a linked list dlistint_t
 * @h: THe pointer to the head of the list
 * Return: The number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
