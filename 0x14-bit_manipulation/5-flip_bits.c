#include "main.h"
#include <stdio.h>

/**
 * flip_bits - gives the number of bits you need
 * to flip to get to the other one
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 *
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int red;
	unsigned int counter;

	red = n ^ m;

	counter = 0;
	while (red > 0)
	{
		if ((red & 1) != 0)
			counter++;
		red = red >> 1;
	}
	return (counter);
}
