#include "main.h"
#include <stdio.h>

/**
 * _pow_recursions - find value of num^exp recursively
 * @num: number
 * @exp: exponent
 * Return: cumulative multiplication of 'num' 'exp' times
 */
int _pow_recursions(int num, int exp)
{
	if (exp < 0)
		return (-1);
	if (exp == 0)
		return (1);
	if (exp > 0)
		return (num * _pow_recursions(num, exp - 1));

	return (num);
}
