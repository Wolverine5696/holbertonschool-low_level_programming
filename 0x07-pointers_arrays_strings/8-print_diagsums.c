#include "main.h"
/**
 * print_diagsums:
 *
 * Return: Always 0.
 */
void print_diagsums(int *a, int size)
{
	int l;
	int y = 0;
	int sumlr = 0;
	int sumrl = 0;

	for (l = 0; l < size; l++)
	{
		sumlr += a[y];
		y++;
		a = a + size;
	}
	a = a - (size * l);
	printf("%d, ", sumlr);
	y = size - 1;
	for (l = 0; l < size; l++)
	{
		sumr1 +=  a[y];
		y--;
		a - a + size;
	}
	printf("%d\n", sumr1);
return;
}
