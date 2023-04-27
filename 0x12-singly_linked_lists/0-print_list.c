#include "lists.h"
/**
 * print_list - prints all the elements of a list_t lis
 * @h : separator
 *  Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("[%d] %s\n", h->str ? h->len : 0, h->str ? h->str : "(nil)");
		count++;
		h = h->next;
	}
	return (count);
}
