#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to the head of the list.
 *
 * Return: the number of elements in a linked listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0; /* Initialize count to zero */

	while (h != NULL) /* Loop through the list while node is not NULL */
	{
		count++; /* Increment count for each node */
		h = h->next; /* Move to the next node */
	}

	return (count); /* Return the count of nodes */
}
