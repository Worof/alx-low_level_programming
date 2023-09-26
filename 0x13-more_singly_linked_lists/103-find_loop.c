#include "lists.h"
#include <stdlib.h>
/**
 * find_listint_loop - Finds the start of a loop in a linked list
 * @head: Pointer to the first node in the list
 *
 * Description: Uses Floyd's Tortoise and Hare algorithm to detect
 * loops in a singly linked list and find the start of the loop.
 * Returns the address of the start of the loop or NULL if no loop exists.
 *
 * Return: Address of the start of the loop, or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
    listint_t *tortoise, *hare;

    if (head == NULL)
        return (NULL);

    tortoise = hare = head;

    while (hare != NULL && hare->next != NULL)
    {
        tortoise = tortoise->next;
        hare = hare->next->next;

        if (tortoise == hare)
        {
            tortoise = head;
            while (tortoise != hare)
            {
                tortoise = tortoise->next;
                hare = hare->next;
            }
            return (tortoise);
        }
    }
    return (NULL);
}
