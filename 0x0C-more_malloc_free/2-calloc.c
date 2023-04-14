#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * _calloc - calloc
 * @nmemb: nmemb
 * @size: size
 * Return: ptr to new address
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	size_t count:

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = (void *)malloc(nmemb * size);
	count = nmemn * size;
	while (count-- > 0)
	{
		ptr[count] = 0;
	}
	return (ptr);
}
