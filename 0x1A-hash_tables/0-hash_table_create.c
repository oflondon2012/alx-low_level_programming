#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash table.
 * @size: size of the array.
 *
 * Return: NULL or hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hast;
	unsigned long int j;

	hast = malloc(sizeof(hash_table_t));
	if (hast == NULL)
		return (NULL);

	hast->size = size;
	hast->array = malloc(sizeof(hash_node_t *) * size);
	if (hast->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		hast->array[j] = NULL;

	return (hast);
}
