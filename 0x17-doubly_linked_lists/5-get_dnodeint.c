#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: pointer to the head of the doubly linked list.
 * @index: index of the node, starting from 0.
 *
 * Description: Iterates through the doubly linked list to find the nth node.
 * If the node at the given index is found, it returns that node;
 * otherwise, it returns NULL.
 *
 * Return: the nth node of a list or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}

	return (NULL); /* If the node does not exist */
}
