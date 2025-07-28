#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - initiliazes prototype
 * @head: list to free
 * Description: takes a list and frees its allocated memory
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next_node;

	while (head != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}
}
