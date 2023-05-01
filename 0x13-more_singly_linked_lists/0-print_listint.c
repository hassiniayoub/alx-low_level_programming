#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: head of the list
 * Return: number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n); /* Autofills=0 if no value is given */

		count += 1;
		h = h->next;
	}

	return (count);
}
