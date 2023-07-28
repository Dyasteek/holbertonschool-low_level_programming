#include "lists.h"

dlistint_t
*add_dnodeint(dlistint_t **head, const int n)
{
	listint_t *add_node;
	add_node = malloc(sizeof(listint_t));

	if (!add_node || !head)
	{
		return (NULL);
	}
	add_node->n = n;
	add_node->next = *head;
	*head = add_node;

	return (*head);
}
