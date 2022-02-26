#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 *
 *@format: types of arguments passed to the function
 *
 * Return: (0)
 */

void print_all(const char * const format, ...)

	va_list ap;
	int i;
	
	i = 0;

	va_start(ap, const format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'i':
				printf("%d", va_arg(ap, int));
				break;
			case 'c':
				printf("%c", (char) va_arg(ap, int));
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
			case 's':
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] 'f' ||
			format[i] == 's') && format[i + 1] != '\0')
				printf(", ");
					i++;
	}
	printf("\n");
	va_end(ap)
