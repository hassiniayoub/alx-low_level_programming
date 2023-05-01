#include "lists.h"

/**
 * sum_listint - Computes the sum of all the integers in a linked list.
 * @head: Pointer to the first node of the list.
 * Return: The sum of all the integers in the linked list, 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	/* Iterate over the nodes in linked list and add their values to the sum */
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return sum;
}
