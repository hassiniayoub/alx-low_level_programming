#include "lists.h"

/**
 * pop_listint - deletes the head node, and returns the head node’s data
 * @head: pointer to head pointer of linked list
 * Return: deleted head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL) /* If the list is empty, return 0 */
		return (0);

	tmp = *head;

	data = tmp->n; /* save data to return later */

	*head = tmp->next; /* link head to next node */
	free(tmp);

	return (data);
}
