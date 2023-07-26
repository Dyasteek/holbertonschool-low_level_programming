#include "lists.h"

list_t
*add_node(list_t **head, const char *str)
{
	list_t *new_l;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_l = malloc(sizeof(list_t));
	if (!new_l)
		return (NULL);

	new_l->str = strdup(str);
	new_l->len = len;
	new_l->next = (*head);
	(*head) = new_l;

	return (*head);
}
