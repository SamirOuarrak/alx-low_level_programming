#include "lists.h"
/**
 * insert_nodeint_at_index - insert_nodeint_at_index
 * @head : head
 * @idx : index
 * @n : number
 *  Return: head
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL;
	listint_t *ptr;
	int i = idx;

	if (!head)
		return (NULL);
	ptr = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (!i-- || !*head)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (ptr && i >= 0)
	{
		if (!i--)
		{
			new->next = ptr->next;
			ptr->next = new;
			return (new);
		}
		ptr = ptr->next;
	}
	free(new);
	return (NULL);
}
