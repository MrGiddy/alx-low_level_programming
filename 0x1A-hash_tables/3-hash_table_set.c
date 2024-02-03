#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Pointer to the hash table
 * @key: The key, a non-empty string
 * @value: Value associated with the key
 *
 * Return: 1 on success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *current_item;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);

	node = create_hash_node(key, value);
	if (node == NULL)
		return (0);
	/* Get the index to store the new node in ht array */
	index = key_index((const unsigned char *)key, ht->size);

	current_item = ht->array[index];
	if (current_item == NULL)
	{
		/* store node directly at the array index */
		ht->array[index] = node;
		return (1);
	}
	else
	{
		/* If key is a match to the key at the spot, update value */
		if (strcmp(current_item->key, key) == 0)
		{
			strcpy(current_item->value, value);
			return (1);
		}
		else
		{
			/* Handle the collision - insert node at beg. of chain */
			if (current_item->next == NULL)
			{
				current_item->next = node;
			}
			node->next = current_item->next;
			current_item->next = node;
			return (1);
		}
	}
	return (0);
}

/**
 * create_hash_node - Creates a node of the hash table array
 * @key: The key value for the node
 * @value: The value for the node
 *
 * Return: A new hash_node_t node
 */
hash_node_t *create_hash_node(const char *key, const char *value)
{
	hash_node_t *node;

	/* Assign memory for a new node */
	/* as well as for its key and value parts */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = malloc(sizeof(strlen(key) + 1));
	if (node->key == NULL)
		return (NULL);
	node->value = malloc(sizeof(strlen(key) + 1));
	if (node->value == NULL)
		return (NULL);

	/* Populate the new node */
	strcpy(node->key, key);
	strcpy(node->value, value);
	node->next = NULL;

	return (node);
}
