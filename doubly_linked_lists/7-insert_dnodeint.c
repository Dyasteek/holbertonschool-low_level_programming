#include <stdlib.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - initializes prototype
 * @h: list
 * @idx: index
 * @n: n value
 * Description: takes a list and adds a new node at index
 * Return: NULL if empty or failed to place, address to new node otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *insert_node;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);
	insert_node = malloc(sizeof(dlistint_t));
	if (insert_node == NULL)
		return (NULL);
	insert_node->n = n;
	insert_node->prev = NULL;
	insert_node->next = NULL;
	if (idx == 0)
	{
		insert_node->next = *h;
		if (*h != NULL)
			(*h)->prev = insert_node;
		*h = insert_node;
		return (insert_node);
	}
	temp = *h;
	while (temp)
	{
		if (i == idx)
		{
			insert_node->prev = temp->prev;
			insert_node->next = temp;
			if (temp->prev != NULL)
				temp->prev->next = insert_node;
			temp->prev = insert_node;
			return (insert_node);
		}
		temp = temp->next;
		i++;
	}
	free(insert_node);
	return (NULL);
}
