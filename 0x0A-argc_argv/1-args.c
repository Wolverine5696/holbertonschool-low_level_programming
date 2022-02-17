#include <stdio.h>
#include <stdlib.h>
#include <main.h>
/**
 * main - function start
 * @argc: number of arguments
 * @argv: arrav vector
 *
 * return 0
 */
int main(int argc, __attribute__((unused)) char  *argv[])
{

		if (argc > 0)
			printf("%d\n", argc - 1);
		return (0);
}
