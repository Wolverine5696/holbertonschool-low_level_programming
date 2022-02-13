#include " holberton.h"

/**
 * main - function encodes a string
 *
 * * return - address of s
 */

char *leet(char *s);
{
	int p;
	int i;
	char g[] = "aAeEoOtTlL";
	char h[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (p = 0; p <= 9; p++)
		{
			if (g[p] == s[i])
				s[i] = h[p];
		}
	}
	return (s);
}
