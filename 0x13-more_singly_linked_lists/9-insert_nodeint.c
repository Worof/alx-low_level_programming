#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to the address of the head of the listint_t list.
 * @idx: The index where the new node should be added.
 * @n: The integer to be included in the new node.
 *
 * Return: The address of the new node or NULL if it fails.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (!*head && idx > 0)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	current = *head;
	for (i = 0; i < idx - 1 && current; i++)
		current = current->next;
	if (!current)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
