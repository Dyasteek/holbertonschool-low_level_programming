#include "lists.h"

int
delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *rm;

	if (*head == NULL)
	{
		return (-1);
	}
	rm = *head;
	while (rm->prev != NULL)
	{
		rm = rm->prev;
	}
	while (i < index)
	{
		rm = rm->next;
		if (rm == NULL)
		{
			return (-1);
		}
		i++;
	}
	if (rm->next != NULL)
	{
		rm->next->prev = rm->prev;
	}
	if (rm->prev != NULL)
	{
		rm->prev->next = rm->next;
	}
	else
	{
		*head = rm->next;
	}
	free(rm);
	return (1);
}
