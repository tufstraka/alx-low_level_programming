#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the new hash table, or NULL on failure.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;

    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    ht->size = size;
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL)
    {
        free(ht); // Cleanup on failure
        return (NULL);
    }

    /* Initialize all elements of the array to NULL */
    for (unsigned long int i = 0; i < size; i++)
        ht->array[i] = NULL;

    return (ht);
}
