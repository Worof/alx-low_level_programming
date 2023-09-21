#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list_t list.
 * @h: Pointer to the start of the list.
 *
 * Return: Number of elements in the list.
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0; /* Initialize node count */

	/* Traverse the list */
	while (h != NULL)
	{
		nodes++; /* Increment node count */
		h = h->next; /* Move to the next node */
	}

	return (nodes); /* Return the number of nodes */
}
