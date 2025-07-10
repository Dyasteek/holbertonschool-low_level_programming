#include "main.h"
/**
 * _strspn - gets length of a prefix substring
 *
 * Return: number of bytes in the initial segment of s, consisting ...
 */
/**
 * @s: string
 */
/**
 * @accept: bytes to take
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;

	i = 0;
	while (s[i] != ' ' || s[i] != '\0')
	{
		if (s[i] == *accept)
			return (i);
		i++;
	}
	return (i);
}
