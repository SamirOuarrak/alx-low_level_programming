#include "lists.h"
/**
 * get_nodeint_at_index - the nth node of a listint_t linked list
 * @head : head
 * @index : Index
 * Return: node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);
	while (head)
	{
		if (!index--)
			break;
		head = head->next;
	}
	return (head);
}
