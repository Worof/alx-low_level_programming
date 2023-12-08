#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: double pointer to the head of the dlistint_t list
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: data for the new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *new_node, *temp;
    unsigned int i;

    if (h == NULL)
        return (NULL);

    if (idx == 0) /* Add at the beginning */
        return (add_dnodeint(h, n));

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    temp = *h;

    for (i = 0; temp != NULL && i < idx; i++)
    {
        if (i == idx - 1)
        {
            if (temp->next == NULL) /* Add at the end */
                return (add_dnodeint_end(h, n));

            new_node->next = temp->next;
            new_node->prev = temp;
            temp->next->prev = new_node;
            temp->next = new_node;
            return (new_node);
        }
        temp = temp->next;
    }

    free(new_node);
    return (NULL); /* If idx is out of range */
}
