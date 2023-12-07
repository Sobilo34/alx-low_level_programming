#include "lists.h"

/**
 * add_dnodeint - This is to adds a new node at
 * the beginning of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @n: THe integer value to be stored in the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;

	return (new);
}
