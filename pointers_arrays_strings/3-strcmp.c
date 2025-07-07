#include <string.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 * Return: less than zero, zero, or greater than zero
 */
/**
 * @s1: string
 */
/**
 * @s2: string
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i = 0, j = 0; s1[i] != '\0' && s2[j] != '\0'; i++, j++)
	{
		if (s1[i] == s2[j] && strlen(s1) == strlen(s2))
			return (0);
		if (strlen(s1) < strlen(s2))
			return (13);
		else
			return (-13);
	}
	return (5);
}
