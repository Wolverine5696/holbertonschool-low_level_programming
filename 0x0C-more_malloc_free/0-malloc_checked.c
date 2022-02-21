#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
*malloc_checked - functions to int b
*@b:This is the length to allocate in the memory
*Return: Returns a pointer to the allocated memory if malloc fails
*
*the malloc_checked function should cause normal process termination
*
*with a status value of 98
*/
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
return (p);
}
