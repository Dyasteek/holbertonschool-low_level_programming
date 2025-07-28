#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - initiliazes prototype
 * @h: list head
 * Description: prints the contents of a doubly linked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *temp;

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		i++;
	}
	return (i);
}
