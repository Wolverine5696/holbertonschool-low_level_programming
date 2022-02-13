#include"holberton.h"
#include"stdio.h"
#include"main.h"
/**
* main capitalizes all words on a string
*
* return s
*/
char *cap_string(char *s)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}"; /* word seperators */

	i = 1;
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= ('a' - 'A'); /* changes first letter of word */
	while (s[i] != '\0')
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (s[i - 1] == sep[j] && (s[i] >= 'a' && s[i] <= 'z'))

				s[i] -= ('a' - 'A'); /* capiatilzes if after seperator */
		i++;
	}
	return (s);
}
