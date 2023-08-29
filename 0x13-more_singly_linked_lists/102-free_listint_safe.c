#include <stdio.h>
#include "lists.h"

/**
 * looped_listint_count - counts the number of unique nodes
 * in a looped linked list of listint_t
 * @head: A pointer to the head of the lsit to be checked
 * Return: If the loop is not looped = 0
 * Otherwise - the number of unique nodes in the list
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *tortoise, *hare;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tortoise = head->next;
	hare = (head->next)->next;

	while (hare)
	{
		if (tortoise == hare)
		{
			tortoise = head;
			while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next;
			hare = hare->next;
		}

		tortoise = tortoise->next;
		while (tortoise != hare)
		{
			nodes++;
			tortoise = tortoise->next;
		}

		return (nodes);
	}

	tortoise = tortoise->next;
	hare = (hare->next)->next;
	}

	return (0);
}

/**
 * free_listint_safe - prints a listint_t list freely and safely
 * @h: A pointer that points to the head of the linked list
 *
 * Return: the number of nodes in the list
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *temp;
	size_t nodes, index;

	nodes = looped_listint_count(*h);

	if (nodes == 0)
	{
		for (; h != NULL && *h != NULL; nodes++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
		}
		*h = NULL;
	}

	h = NULL;

	return (nodes);
}
