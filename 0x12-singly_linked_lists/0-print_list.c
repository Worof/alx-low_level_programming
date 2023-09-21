#include "lists.h"
#include <stdio.h>

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the start of the list.
 *
 * Return: Number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0; /* Initialize node count */

	/* Traverse the list */
	while (h != NULL)
	{
		/* Check if str is NULL and print accordingly */
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);

		nodes++; /* Increment node count */
		h = h->next; /* Move to the next node */
	}

	return (nodes); /* Return the number of nodes */
}
