#include "dog.h"

/**
 * init_dog - init_dog
 * @d: struct dog
 * @name: name dog
 * @age: age dog
 * @owner: owner name
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->age = age;
		d->name = name;
		d->owner = owner;
	}
}
