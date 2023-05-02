#include "lists.h"
/**
 * free_listint2 - number of elements in a linked
 * @head : head
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;
	listint_t *ptrNode;

	if (!head || !*head)
		return;
	ptrNode = *head;
	while (ptrNode)
	{
		ptr = ptrNode->next;
		free(ptrNode);
		ptrNode = ptr;
	}
	*head = NULL;
}
