#include "main.h"

/**
* main - writes a program that prints the alphabet 10x
*
*
* Return 
*/
void print_alphabet_x10(void)
{
	char X;
	int i;
	i = 0;
	while (i < 11)
	{
		for (X = 'a'; X <= 'z'; X++);
		{
			_putchar(X);
		}
			_putchar('\n');
			i++;
	}
	return;
}
