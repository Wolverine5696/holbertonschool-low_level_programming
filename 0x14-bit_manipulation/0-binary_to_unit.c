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
	unsigned int decimal = 0;
	unsigned int red = 1, index = 0;

	if (b == NULL)
		return (0);
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	for (index = index - 1; index >= 0; index--)
	{
		char currentCharacter;

		currentCharacter = b[index];
		if (currentCharacter == '1')
		{
			decimal += red;
		}
		red = red * 2;
		if (index == 0)
			break;
	}
	return (decimal);
}
