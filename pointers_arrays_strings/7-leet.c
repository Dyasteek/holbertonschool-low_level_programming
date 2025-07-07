#include "main.h"
/**
 * leet - encodes string into 1337
 *
 * Return: string
 */
/**
 * @a: char to take
 */
char *leet(char *a)
{
	int i;

	i = 0;
	while (i < 20)
	{
		if (a[i] == 'a' || a[i] == 'A')
		{
			a[i] = 52;
			i++;
		}
		i++;
	}
	return (a);
}
