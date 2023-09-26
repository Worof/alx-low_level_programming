#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - Sums all the data (n) of a listint_t linked list.
 * @head: The head of the list.
 *
 * Return: If the list is empty, return 0. Otherwise, the sum of all the data.
 */
int sum_listint(listint_t *head)
{
	int sum = 0; /* Initialize sum to 0 */

	/* Traverse the list and add the value of n to sum at each node */
	while (head != NULL)
	{
		sum += head->n; /* Add the value of n to sum */
		head = head->next; /* Move to the next node */
	}
	return (sum); /* Return the computed sum */
}
