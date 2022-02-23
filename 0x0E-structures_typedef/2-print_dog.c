#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the struct dog
 *
 * @a: element of d is NULL print (nil)
 * @b: if name is null print name (nil)
 * @c: if d is NULL print nothing
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;

	if (d->name == NULL)
		d->name = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);

	if (d->owner == NuLL)
		d->owner = "(nil)";
	printf("Owner: %S\n", d->owner);
}
