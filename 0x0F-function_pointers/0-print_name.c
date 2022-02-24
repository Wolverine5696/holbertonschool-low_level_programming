#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - function that prints a name
 * @name: name of the pointer
 *
 * return (0);
 *
 */
void print_name(char *name, void (*f)(char *))
{	
	
