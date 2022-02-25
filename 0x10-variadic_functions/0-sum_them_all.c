#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum or parameters
 *
 * @n: the answer to the problem
 *
 * Return: (0);
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int addition;
	int sum;

	sum = 0;
	va_start(ap, n);

	for (addition = 0; addition < n; addition++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}	
