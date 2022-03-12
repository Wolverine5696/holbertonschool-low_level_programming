#include "main.h"
#include <stdio.h>

/**
 * get_bit -  returns value of a bit from a given index.
 * @n: number passed
 * @index: bit you need from malloc
 * Return: if it fails -1 otherwise the value of bits
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int temp = n >> index;

	if (sizeof(n) * 8 < index)
		return (-1);

	return (temp & 1);
}
