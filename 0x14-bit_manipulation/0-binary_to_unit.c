#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: binary number to convert
 * Return: converted number, or 0 if b isn't binary or NULL
 *
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bits = 0;

	while (*b)
	{
		if (*b == '1')
			bits = bits * 2 + 1;
		else if (*b == '0')
			bits = bits * 2;
		else
			return (0);
		b++;
	}

	return (bits);

}
