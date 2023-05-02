#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the beginning
 * @head : head
 * @n : number
 *  Return: head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *ptr;

	if (!head)
		return (NULL);
	ptr = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	while (ptr && ptr->next)
		ptr = ptr->next;
	new->n = n;
	new->next = NULL;
	if (ptr)
		ptr->next = new;
	else
		*head = new;
	return (new);
}
