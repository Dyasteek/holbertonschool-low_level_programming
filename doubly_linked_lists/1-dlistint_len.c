#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - initiliazes prototype
 * @h: list head
 * Description: returns lenght of a doubly linked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	return (i);
}
