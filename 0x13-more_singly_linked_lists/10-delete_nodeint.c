#include "lists.h"
/**
 * delete_nodeint_at_index - insert_nodeint_at_index
 * @head : head
 * @index : index
 *  Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *PtrPrev;
	int i = index;

	if (!head || !*head)
		return (-1);
	ptr = *head;
	PtrPrev = *head;
	if (!i--)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}
	while (ptr && i >= 0)
	{
		if (!i--)
		{
			PtrPrev->next = ptr->next;
			free(ptr);
			return (1);
		}
		PtrPrev = ptr;
		ptr = ptr->next;
	}
	return (-1);
}
