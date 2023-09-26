#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints all elements in a linked list.
 * @head: A pointer to the start of the list.
 * 
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *fast = head, *slow = head;
    size_t nodes = 0;

    while (fast && fast->next)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        slow = slow->next;
        fast = fast->next->next;
        nodes++;

        if (fast == slow)
        {
            do
            {
                fast = fast->next;
                nodes++;
            } while (fast != slow);

            printf("-> [%p] %d\n", (void *)fast, fast->n);
            return nodes;
        }
    }

    /* In case where the list does not have a loop. */
    while (slow)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        slow = slow->next;
        nodes++;
    }

    return nodes;
}
