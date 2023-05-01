#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at the specified index ofLinked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to retrieve
 * Return: the node at the specified index, or NULL if index is out of range
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	/* account for empty list */
	if (head == NULL)
		return (NULL);

	/* iterate through list */
	for (i = 0; head != NULL && i < index; i++)
		head = head->next;

	/* check if index was out of bounds */
	if (i != index)
		return (NULL);

	return (head);
}
