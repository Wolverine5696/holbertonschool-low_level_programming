#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints arguments passed into it
 * @argc: print number of arguments passed into it
 * @argv: arrav vector void
 *
 * Return: EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
		(void)argv;

		printf("%d\n", argc - 1);
		return (0);
}
