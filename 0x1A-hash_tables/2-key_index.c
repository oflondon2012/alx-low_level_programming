#include "hash_tables.h"

/**
 * key_index - function that gives you the index of a key
 * @key: key to calculate index
 * @size: of the array of the hash table
 *
 * Return: an index to which key/pair shold be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int has_res = 0;
	unsigned long int r_key = hash_djb2(key);

	has_res = r_key % size;

	return (has_res);
}
