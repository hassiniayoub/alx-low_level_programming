#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: pointer to the head of the list
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL) /* iterate through list until end */
	{
		current_node = head; /* set current node to head */
		head = head->next; /* move head to next node */
		free(current_node); /* free current node */
	}

	if (head == NULL) /* account for empty linked list */
		return;
}
