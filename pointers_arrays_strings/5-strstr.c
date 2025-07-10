#include "main.h"
/**
 * _strstr - locates a substring
 *
 * Return: pointer to the beginning of first occurrence or null
 */
/**
 * @haystack: string
 */
/**
 * @needle: substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	while (haystack[i] != '\0')
	{
		if (haystack[i] == *needle)
			return (haystack);
		else
			return ('\0');
		i++;
	}
	return (haystack);
}
