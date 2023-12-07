#include "lists.h"
/**
  * print_dlistint - THis is a function that prints a doubly linked list
  * @h: THe head of the list to be printed
  * Return: Number of items in the list 
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a;

	for (a = 0; h; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
