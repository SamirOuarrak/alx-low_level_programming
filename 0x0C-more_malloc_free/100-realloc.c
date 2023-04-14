#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _realloc - realloc
 * @ptr: ptr
 * @old_size: old_size
 * @new_size: new size
 * Return: ptr to new address
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *reall;

	if (ptr == NULL || new_size > old_size)
	{
		reall = malloc(new_size);
		free(ptr);
		return (reall);
	}
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
