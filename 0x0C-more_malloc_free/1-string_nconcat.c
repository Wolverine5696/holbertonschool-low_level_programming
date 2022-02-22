#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
* string_nconcat - function that concatenates two strings.
*
*@s1: First string input
*@s2: Second string input
*@n: copies first string to second string
*
* Return: This is the string joined
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strcat;
	unsigned int a;
	unsigned int b;

	if (*s1 == NULL)
		*s1 = "";
	if (*s2 == NULL)
		*s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
	}
	if (n > b)
		n = b;
	strcat = malloc(((a + n) + 1));
	if (strcat == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		strcat[a] = s1[a];
	}
	for (b = 0; b != n; b++)
	{
		strcat[a] = s2[b];
		a++;
	}
	strcat[a] = '\0';
	return (strcat);
}
