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
int main(int argc, char*argv[])
{
	int i =0
	for(i = 0; i < argc; i++)
		printf("argv[%2d]: %s\n", i,argv[i]);

		return(0);
}		
		
