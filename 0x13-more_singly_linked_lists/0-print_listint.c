#include <stdio.h>
#include "lists.h"

/**
* print_listint - prints all the elements of a list
* @h: head of a singly linked list
* Return:  The number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t num_count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num_count++;
		h = h->next;
	}

	return (num_count);
}
