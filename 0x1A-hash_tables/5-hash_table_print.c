#include "hash_tables.h"

/**
 * hash_table_print - Prints the hash table
 * @ht: The hash table to print
 *
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	int comma;

	printf("{");
	for (i = 0; i < ht->size && ht; i++)
	{
		if (ht->array[i])
		{
			if (comma == 1)
				printf(", ");

			temp = ht->array[i];
			while (temp != NULL)
			{
				printf("'%s: %s'", temp->key, temp->value);

				if (temp->next != NULL)
					printf(", ");

				temp = temp->next;
			}
			comma = 1;
		}
	}
	printf("}\n");
}
