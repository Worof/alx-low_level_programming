#include "lists.h"
#include <stdio.h>

size_t free_list_until_meet(listint_t **h, listint_t *meet);
size_t free_remaining_list(listint_t **h);

/**
 * free_listint_safe - frees a listint_t list safely
 * @h: double pointer to the start of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
    size_t nodes = 0;
    listint_t *fast, *slow;

    if (!h || !*h)
        return (0);

    slow = *h;
    fast = *h;

    while (slow && fast && fast->next)
    {
        nodes++;
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            nodes += free_list_until_meet(h, slow);
            *h = NULL;
            return (nodes);
        }
    }

    nodes += free_remaining_list(h);
    *h = NULL;
    return (nodes);
}

/**
 * free_list_until_meet - Frees list until meet point and counts nodes
 * @h: double pointer to the start of the list
 * @meet: point where the slow and fast pointers meet
 *
 * Return: the size of the list that was freed
 */
size_t free_list_until_meet(listint_t **h, listint_t *meet)
{
    size_t nodes = 1; // meet node itself
    listint_t *next, *slow = meet->next;

    while (slow != meet)
    {
        nodes++;
        slow = slow->next;
    }

    while (*h != meet)
    {
        next = (*h)->next;
        free(*h);
        *h = next;
    }

    return nodes;
}

/**
 * free_remaining_list - Frees the remaining list and counts nodes
 * @h: double pointer to the start of the list
 *
 * Return: the size of the list that was freed
 */
size_t free_remaining_list(listint_t **h)
{
    size_t nodes = 0;
    listint_t *next;

    while (*h)
    {
        next = (*h)->next;
        free(*h);
        *h = next;
        nodes++;
    }

    return nodes;
}
