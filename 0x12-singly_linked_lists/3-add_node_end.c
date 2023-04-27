#include "lists.h"
/**
 * add_node_end - add_node_end
 * @head : head of list_t
 * @str : str
 *  Return: the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = NULL;
	list_t *ptr;

	ptr = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	while (ptr && ptr->next)
		ptr = ptr->next;

	new->str = str ? strdup(str) : NULL;
	new->len = str ? strlen(str) : 0;
	new->next = NULL;

	if (ptr)
		ptr->next = new;
	else
		*head = new;
	return (ptr);
}
