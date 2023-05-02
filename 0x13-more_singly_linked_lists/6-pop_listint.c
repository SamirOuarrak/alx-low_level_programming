#include "lists.h"
/**
 * pop_listint - number of elements in a linked
 * @head : head
 * Return: n
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n = 0;

	if (!head || !*head)
		return (0);
	ptr = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(ptr);
	return (n);
}
