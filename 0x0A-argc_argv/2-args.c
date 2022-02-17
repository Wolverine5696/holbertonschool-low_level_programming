#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* main: prints all arguments 
* @argc: arguments passed into it
* @argv: prints arguments in array on newline
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i; 

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}	
