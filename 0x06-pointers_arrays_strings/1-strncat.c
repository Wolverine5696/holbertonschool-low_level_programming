#include "holberton.h"

/**
 * _strncat - appends n src to dest string
 * @dest: string that gets appended
 * @src: strig to append
 * @n: number in string to append
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
		int i = 0, j;

		while (*dest != '\0')
		{
			dest++;
			j++;
		}															while ((*src != '\0') && (i < n))
	{
		i++;
		*(dest++) = *(src++);
		j++;
	}
	dest = dest - j
	return (dest);
}
