#include "lists.h"
/**
 * add_node - number of elements in a linked
 * @head : head of list_t
 * @str : str
 *  Return: the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = str ? strlen(str) : NULL;
	new->len = str ? strlen(str) : 0;
	new->next = *head;
	*head = new;
	return (*head);
}
