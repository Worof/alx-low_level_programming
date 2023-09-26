#include "lists.h"
#include <stdlib.h>
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: a pointer to the head of the linked list
 * @index: the index of the node, starting at 0
 *
 * Return: a pointer to the indexed node, or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (!head) /* if the head is NULL, return NULL */
		return (NULL);

	for (i = 0; i < index && head; i++) /* traverse to the indexed node */
		head = head->next;

	if (i < index) /* if reached end before reaching index, return NULL */
		return (NULL);

	return (head); /* return the indexed node */
}
