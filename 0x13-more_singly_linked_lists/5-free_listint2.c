#include "lists.h"
#include <stdlib.h>
/**
 * free_listint2 - frees a listint_t list and sets the head to NULL
 * @head: double pointer to the head of the list
 */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	if (head == NULL || *head == NULL)
		return;

	current = *head;

	while (current != NULL)
	{
		next = current->next; /* Save the next node */
		free(current); /* Free the current node */
		current = next; /* Move to the next node */
	}

	*head = NULL; /* Set the head to NULL */
}
