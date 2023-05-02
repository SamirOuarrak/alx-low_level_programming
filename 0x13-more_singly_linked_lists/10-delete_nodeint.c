#include "lists.h"
/**
 * delete_nodeint_at_index - insert_nodeint_at_index
 * @head : head
 * @index : index
 *  Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new = NULL;
	listint_t *ptr;
	int i = index;

	if (!head || !*head)
		return (-1);
	ptr = *head;
	if (!i--)
	{
		*head = (*head)->next;
		free(ptr);
	}
	while (ptr->next && (i >= 0))
	{
		if (!i--)
		{
			new->next = ptr->next;
			ptr->next = new;
		}
		ptr = ptr->next;
	}
	if (!ptr->next)
		ptr->next = new;
	return (1);
}
