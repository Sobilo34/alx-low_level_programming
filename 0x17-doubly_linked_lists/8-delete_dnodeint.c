#include "lists.h"

/**
 * delete_dnodeint_at_index - It deletes the node at a given index in a list.
 * @head: The pointer to a pointer to the head of the doubly linked list.
 * @index: The index of the node that should be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	temp = *head;

	if (index == 0)
	{
		*head = temp->next;
		if (!*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (!temp)
	{
		if (count == index)
		{
			prev->next = temp->next;

			if (temp->next != NULL)
				temp->next->prev = prev;

			free(temp);
			return (1);
		}

		prev = temp, temp = temp->next, count++;
	}

	return (-1);
}
