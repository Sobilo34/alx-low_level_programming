#include "lists.h"

/**
 * get_nodeint_at_index - Returns the element at a particular index
 * in a linked list
 * @head: The first element in the linked list
 * @index: of the node to return
 *
 * Return: pointer to the node we are looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}

	return (temp ? temp : NULL);
}
