#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_djb2 - starting the djb2 algorithm
 * @str: string used to generate the value
 *
 * Return: hash value
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int x;

	hash = 5381;
	while ((x = *str++))
	{
		hash = ((hash << 5) + hash) + x;
	}
	return (hash);
}
