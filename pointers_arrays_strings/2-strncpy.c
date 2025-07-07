#include <string.h>
#include "main.h"
/**
 * _strncpy - copies a string to another depending on bytes given
 * Return: pointer to dest
 */
/**
 * @dest: first string to copy
 */
/**
 * @src: last string to be copied
 */
/**
 * @n: bytes to limit copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
		if (dest[i] != '\0')	
			dest[i] = '\0';
	}
	return (dest);
}
