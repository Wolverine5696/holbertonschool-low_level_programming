#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at the given index.
 * @n: pointer to values
 * @index: position to change the bits
 *
 * Return: 1 if worked or -1 if fails
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(*n) * 8))
		return (-1);

	*n |= 1 << index;
	return (1);
}
