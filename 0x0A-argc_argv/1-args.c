#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - function start
 * @argc: print number of arguments passed into it
 * @argv: arrav vector void
 *
 * return EXIT_SUCCESS
 */
int main(int argc, char *argv[])
{
		(void)argv;

		printf("%d\n", argc - 1);
		return (0);
}
