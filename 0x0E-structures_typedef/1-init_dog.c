#include "dog.h"
/**
 * init_dog - initialized a variable of type structure
 * @d: pointer to address
 * @name: dogs name
 * @age: dogs age
 * @owner: dog owners name
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
