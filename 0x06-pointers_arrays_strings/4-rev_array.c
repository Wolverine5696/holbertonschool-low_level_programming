#include "holberton.h"
#include "stdio.h"
/**
 * main - program that reverses array
 *
 *prototype void reverse array
 *
 * return
 */
void reverse_array(int *a, int n)
{
	int i = 0, run = 0;

	n = n - 1;
	while (i <= n)
	{
		run = a[i];
		a[i] = a[n];
		a[n] = run;
		i++;
		n--;
	}
}
