#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to head pointer of linked list
 * @idx: index to insert new node
 * @n: new node's data
 * Return: address of new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current_node;
	unsigned int i;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set data of new node */
	new_node->n = n;

	/* Special case: insert at the beginning of the list */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Traverse the list to the node before the index to insert */
	current_node = *head;
	for (i = 0; i < idx - 1 && current_node != NULL; i++)
		current_node = current_node->next;

	/* If the index is out of range, free the new node and return NULL */
	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	/* Link the new node into the list */
	new_node->next = current_node->next;
	current_node->next = new_node;

	return (new_node);
}
