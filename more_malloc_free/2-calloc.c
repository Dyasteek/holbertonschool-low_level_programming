#include <stdlib.h>
#include "main.h"
/**
 * _calloc - init prot
 * Description: assign bytes to array
 * Return: pointer to malloc
 */
/**
 * @nmemb: array value
 */
/**
 * @size: array size
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int i;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);
	b = malloc(sizeof(int) * ((nmemb) * (size)));
	if (b == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		b[i] = 0;
	return (b);
}
