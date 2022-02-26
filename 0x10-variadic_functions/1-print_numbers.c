#include <stdio.h>
#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * print_numbers - a function that prints numbers
 *
 * @separator: *separator string printed between numbers
 * @n: this is the input number
 *
 * Return: (0)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int razor;

	va_start(ap, n);
	for (razor = 0; razor < n; razor++)
	{
		printf("%d", va_arg(ap, const unsigned int));
	if (separator != NULL && razor != (n - 1))
		printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

