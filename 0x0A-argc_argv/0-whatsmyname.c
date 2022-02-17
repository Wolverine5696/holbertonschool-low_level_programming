#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counts arguments from command line
 * @argv: string to array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		prtintf("%s\n", argv[]);
	return (0);
}
