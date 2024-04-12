#include "search_algos.h"

/**
 * create_list - Creates a singly linked list from an array
 * @array: The array to convert to a linked list
 * @size: The size of the array
 *
 * Return: The head of the newly created list
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *head = NULL, *new_node, *temp;
	size_t i;

	for (i = 0; i < size; i++)
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
		{
			free_list(head);
			return (NULL);
		}
		new_node->n = array[i];
		new_node->index = i;
		new_node->next = NULL;
		if (head == NULL)
			head = new_node;
		else
			temp->next = new_node;
		temp = new_node;
	}
	return (head);
}
/**
 * print_list - Prints a singly linked list
 * @list: The list to print
 */
void print_list(const listint_t *list)
{
	while (list != NUL)
	{
		printf("Index[%lu] = [%d]\n", list->index, list->n);
		list = list->next;
	}
}

/**
 * free_list - Frees a singly linked list
 * @list: The list to free
 */
void free_list(listint_t *list)
{
	listint_t *temp;

	while (list != NULL)
	{
		temp = list;
		list = list->next;
		free(temp);
	}
}

/**
 * jump_list Searches for a value in a sorted list of integers.
 * @list: A pointer to the head of the singly linked list.
 * @size: The number of elements in the linked list.
 * @value: The value to search for.
 *
 * Return: A pointer to the first node where value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	listint_t *prev = list;
	listint_t *current = list;
	size_t i;

	if (!list)
		return (NULL);

	while (current->index < size && current->n < value)
	{
		prev = current;
		for (i = 0; i < step && current->next; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n >= value || current->index == size - 1)
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);

	while (prev->index < size && prev->n <= value)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		if (prev->next == NULL || prev->index == current->index)
			break;
		prev = prev->next;
	}

	return (NULL);
}
