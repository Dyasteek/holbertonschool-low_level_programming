#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - init prototype
 * Description: allocates memory using malloc
 * Return: NULL if fails or pointer to the alloc mem
 */
/**
 * @b: size of bytes
 */
void *malloc_checked(unsigned int b)
{
	int *buff;

	if (b == 0)
	{
		return (NULL);
	}
	else
	{
		buff = malloc(b);
		if (buff == NULL)
		{
			return (NULL);
			printf("%d", 98);
		}
		else
		{
			return (buff);
			free(buff);
		}
	}
}
