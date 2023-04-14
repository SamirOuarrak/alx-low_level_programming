#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - malloc checkd
 * @b: b
 * Return: string
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(sizeof(unsigned int) * b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
