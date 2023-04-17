#include "dog.h"
/**
 * free_dog - free_dog
 * @d: struc dog to free
 */

void free_dog(dog_t *d)
{
	if (d && d->name)
		free(d->name);
	if (d && d->owner)
		free(d->owner);
	if (d)
		free (d);
}
