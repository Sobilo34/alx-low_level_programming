#include "lists.h"

/**
 * insert_node - This function insert node at given index
 * @temp: This is pointer to nth position node in doubly linked list
 * @n: The node data
 * Return: THe address of inserted node
 */

dlistint_t *insert_node(dlistint_t *temp, int n)
{
	dlistint_t *new;

	new = malloc(sizeof(struct dlistint_s));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	new->next = temp;
	new->prev = temp->prev;
	temp->prev->next = new;
	temp->prev = new;

	return (new);
}

/**
 * insert_dnodeint_at_index - A function that creates
 * and insert node at nth index
 * @h: pointer to head of list
 * @idx: The index
 * @n: The node data
 * Return: The address of inserted node, or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp;

	if (idx == 0)
		return (add_dnodeint(h, n));
	if (h == NULL)
	{
		return (NULL);
	}

	temp = *h;
	while ((idx != 0) && (temp->next))
	{
		idx -= 1;
		temp = temp->next;
		if (idx == 0)
		{
			return (insert_node(temp, n));
		}
	}

	if (idx == 1)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
