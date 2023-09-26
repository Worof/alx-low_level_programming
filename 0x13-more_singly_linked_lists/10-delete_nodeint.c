#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index of a listint_t list.
 * @head: double pointer to the head of the list.
 * @index: the index of the node that should be deleted.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *next_node;

	if (!head || !*head) /* validate input */
		return (-1);

	current = *head;

	if (index == 0) /* delete the head */
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!current)
			return (-1);
		current = current->next;
	}

	if (!current || !(current->next)) /* validate the node to delete */
		return (-1);

	next_node = current->next;
	current->next = next_node->next;
	free(next_node);

	return (1);
}
