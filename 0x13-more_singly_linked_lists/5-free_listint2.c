#include "lists.h"
/**
 * free_listint2 - number of elements in a linked
 * @head : head
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *ptrHead;

	ptrHead = *head;
	while (*head)
	{
		ptr = (*head)->next;
		free(head);
		*head = ptr;
	}
	free(ptrHead);
}
