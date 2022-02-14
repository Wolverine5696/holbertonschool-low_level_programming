#include "holberton.h"
#include "stdio.h"
/**
 * leet - function encodes a stringc
 * @sk: - pointer char sk
 *
 * Description: this is a string that encodes 1337 into a string
 * Return: address of s
 */
char *leet(char *sk)
{
	int i;
	int j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[j] == s[i])
				s[i] = b[j];
		}
	}
	return (s);
}

