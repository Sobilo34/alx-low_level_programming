#include "lists.h"

/**
 * free_listint - To free a linked list
 * @head: listint_t list to free
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
