#include "main.h"
/**
 * _strpbrk - searches string for any set of bytes
 *
 * Return: pointer s that matches bytes in accept or null
 */
/**
 * @s: string
 */
/**
 * @accept: bytes to take
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == *accept)
			return (s);
		else
			return ('\0');
		i++;
	}
	return (s);
}
