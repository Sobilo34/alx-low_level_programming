#include "lists.h"

/**
 * free_dlistint - THis is a funct that frees a doubly linked list
 * @head: The pointer to head of the linked list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head && head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
