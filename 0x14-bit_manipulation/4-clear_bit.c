#include "main.h"
#include <stdio.h>

/**
 * clear_bit - the value of a bit to 0 at a given index.
 * @n:pointer to change the value
 * @index: changes the position
 * Return: 1 if success, fails -1
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int red;

	if (index > (sizeof(*n) * 8))
		return (-1);

	red = 1 << index;
	*n &= ~red;
	return (1);

}
