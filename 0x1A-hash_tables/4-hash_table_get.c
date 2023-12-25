#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value from a hash table
 * @ht: hash table
 * @key: key of the hash table
 *
 * Return: a value from the table
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hash_index = 0;
	hash_node_t *temp;

	if (!ht || !key)
		return (NULL);

	hash_index = key_index((const unsigned char *)key, ht->size);

	if (strcmp(key, "") == 0)
		return (NULL);

	temp = ht->array[hash_index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			return (temp->value);
		}
		temp = temp->next;
	}

	return (NULL);
}
