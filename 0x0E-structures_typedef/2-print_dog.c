#include "dog.h"

/**
 * print_dog - print_dog
 * @d: struct dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Name: %.6f\n", d->age);
		printf("Name: %s\n", d->owner ? d->owner : "(nil)");
	}
}
