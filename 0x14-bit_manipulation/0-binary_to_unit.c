#include "main.h"
#include "_pow_recursions.c"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: binary number to convert
 * Return: converted number, or 0 if b isn't binary or NULL
 *
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, x = 0, z;

	if (b == NULL)
		return (0);

	/* go to end of array */
	for (z = 0; b[z] != '\0'; z++)
	{
	/* check if binary */
		if (((b[z]) != '0') && ((b[z]) != '1') && ((b[z]) != '\0'))
			return (0);
	}
	/* move back from NULL byte */
	z = z - 1;
	while (b[x] != '\0')
	{
		if (b[z - x] == '1')
		{
			if (x == 0)
				decimal = decimal + 1;
			else
				decimal = decimal + _pow_recursions(2, x);
		}
		x++;
	}
	return (decimal);
}
