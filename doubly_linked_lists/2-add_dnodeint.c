#include "lists.h"

dlistint_t
*add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add_node = malloc(sizeof(dlistint_t));

	if (add_node == NULL)
	{
		return (NULL);
	}

	add_node->n = n;
	add_node->next = *head;
	*head = add_node;

	return (*head);
}
