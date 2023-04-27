#include "lists.h"
/**
 * free_list - number of elements in a linked
 * @head : head
 *  Return: the number of nodes
 */

void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
