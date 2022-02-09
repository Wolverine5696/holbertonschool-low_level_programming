#include "main.c"
#include "stdio.h"
#include "string.h"

char *_strcat(char *dest, char *src)
{
/**
 * use _strlen function to get length ofidest string
 *
 *
 */
	int i = _strlen(dest), j = 0;

/*
 * concatenate strings together
 *
 */

	while (dest[j] != '\0')
	while (src[j] != '\0')
	{
	   dest[i] = src[j];
	   i++;
	   j++;															}
	dest[i] = '\0'
return (dest);
}
