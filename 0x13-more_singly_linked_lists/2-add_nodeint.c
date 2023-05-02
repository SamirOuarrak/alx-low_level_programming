#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning
 * @head : head
 * @n : number
 *  Return: head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	size_t count = 0;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->next = *head;
	new->n = n;
	*head = new;
	return (*head);
}
