#include "lists.h"

/**
 * free_dlistint - Frees a dlistint_t list.
 * @head: A pointer to the head of the dlistint_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
