#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: double pointer to the head of the list
 * Return: the head node's data (n)
 * if the linked list is not empty, otherwise 0
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	/* Check if the list is empty */
	if (!head || !*head)
		return (0);

	/* Store the data of the head node */
	data = (*head)->n;

	/* Store the head node */
	temp = *head;

	/* Move the head to the next node */
	*head = (*head)->next;

	/* Free the stored head node */
	free(temp);

	/* Return the stored data */
	return (data);
}
