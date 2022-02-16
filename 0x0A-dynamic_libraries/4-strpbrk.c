#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string to check
 * @accept: bytes to compare
 *
 * Return: Pointer to the byte in s that matches one of the bytes in accept
 * or NULL if none
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
			return (s);
		}
		s++;
	}
	return (0);
}
