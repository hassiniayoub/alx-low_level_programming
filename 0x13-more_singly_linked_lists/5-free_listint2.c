include "lists.h"

/**
 * free_listint2 - frees a linked list and sets head to NULL
 * @head: pointer to head pointer of linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL) /* check if head is NULL */
		return;

	while (*head != NULL) /* loop through the list */
	{
		temp = *head; /* set temp to head node */
		*head = (*head)->next; /* move head to next node */
		free(temp); /* free temp node */
	}

	*head = NULL; /* set head to NULL */
}
