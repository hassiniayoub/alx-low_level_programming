#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to head pointer of linked list
 * @index: index to delete node
 * Return: 1 if succeeded, or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *prev;
	unsigned int i;

	/* If list is empty, return -1 */
	if (*head == NULL)
		return (-1);

	tmp = *head;

	/* If deleting the first node, update head */
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	/* Iterate through the list to the node before the one to be deleted */
	for (i = 0; tmp != NULL && i < index; i++)
	{
		prev = tmp;
		tmp = tmp->next;
	}

	/* If index is out of range, return -1 */
	if (tmp == NULL)
		return (-1);

	/* Update the list to delete the node */
	prev->next = tmp->next;
	free(tmp);

	return (1);
}
