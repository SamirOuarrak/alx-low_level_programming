#include "lists.h"
/**
 * listint_len - number of elements in a linked listint_t lis
 * @h : head
 *  Return: the number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
