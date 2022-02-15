#include "holberton.h"
/**
 * _strcat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int start = 0;

	while (*dest)
	{
		dest++;
		start++;
	}
	while (*src)
	{
		src++;
		*(dest++) = *(src++);
		start++;
	}
	dest = dest - start;
	return (dest);
}
