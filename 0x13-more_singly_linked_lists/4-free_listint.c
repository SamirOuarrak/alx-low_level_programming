#include "lists.h"
/**
 * free_listint - number of elements in a linked
 * @head : head
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
