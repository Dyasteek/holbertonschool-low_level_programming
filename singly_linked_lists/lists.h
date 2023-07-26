#ifndef LISTS_H
#define LISTS_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - print all the elements of a linked list
 * @h: pointer to the list to print
 *
 * Return: the number of the nodes printed
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
