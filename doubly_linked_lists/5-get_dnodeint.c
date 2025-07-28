#include <stddef.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - initilizes prototype
 * @head: list to check
 * @index: index to check every node
 * Description: takes a list and checks every node based on index
 * Return: every node and index, NULL at end
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		if (i == index)
			return (temp);
		i++;
		temp = temp->next;
	}
	return (NULL);
}
