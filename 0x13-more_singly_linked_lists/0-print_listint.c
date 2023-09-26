#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t list
 * @h: pointer to the start of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0; /* Initialize node count */

	while (h != NULL)
	{
		printf("%d\n", h->n); /* Print value of current node */
		nodes++; /* Increment node count */
		h = h->next; /* Move to the next node */
	}

	return (nodes); /* Return the total count of nodes */
}
