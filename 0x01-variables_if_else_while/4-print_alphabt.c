#include <stdio.h>
/**
 * main - entry point
 * Description: adding code to print the alphabet miuns the e and the q letters
 * Return: 0
 */
int main(void)
{
	int d;

	for (d = 'a'; d <= 'z'; d++)
	{
		if (d != 'e' && d != 'q')
		{
			putchar(d);
		}
	}
	putchar('\n');
	return (0);
}
