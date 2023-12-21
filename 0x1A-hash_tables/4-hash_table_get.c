#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 * @ht: The hash table you want to look into.
 * @key: The key you are looking for.
 *
 * Return: The value associated with the element, or NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *node;

    if (ht == NULL || key == NULL || *key == '\0')
        return (NULL);

    /* Get the index for the key */
    index = key_index((const unsigned char *)key, ht->size);

    /* Search for the key in the linked list at that index */
    node = ht->array[index];
    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0)
            return (node->value);
        node = node->next;
    }

    return (NULL); /* Key not found */
}
