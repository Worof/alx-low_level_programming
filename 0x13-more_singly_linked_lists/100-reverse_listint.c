#include "lists.h"
#include <stdlib.h>
/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: Double pointer to the head of the list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next_node = NULL;

	if (!head)
		return (NULL);

	while (*head)
	{
		next_node = (*head)->next; /* Save the next node */
		(*head)->next = prev;      /* Reverse the link */
		prev = *head;              /* Move the prev pointer one step ahead */
		*head = next_node;         /* Move to the next node */
	}

	*head = prev; /* Move head pointer to the start of the reversed list */
	return (*head);
}
