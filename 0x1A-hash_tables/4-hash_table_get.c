#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Pointer to the hash table
 * @key: The key for which to retrieve value
 *
 * Return: value (a string), NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *current_item, *temp;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current_item = ht->array[index];
	if (current_item != NULL)
	{
		if (strcmp(current_item->key, key) == 0)
			return (current_item->value);

		temp = current_item;
		while (temp->next != NULL)
		{
			if (strcmp(temp->key, key) == 0)
				return (temp->value);
			temp = temp->next;
		}
		return (NULL);
	}
	return (NULL);
}
