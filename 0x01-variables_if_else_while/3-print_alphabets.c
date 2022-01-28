#include<stdio.h>
/**
*
*main - added code to make lowercase and uppercase alphabet
*
*Return: 0
*/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar (ch);														putchar ('\n');
																for (ch = 'A'; ch <= 'Z'; ch++)											
																	putchar(ch);
	return (0);
}
