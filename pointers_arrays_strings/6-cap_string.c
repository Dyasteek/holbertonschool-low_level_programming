#include <string.h>
#include "main.h"
/**
 * cap_string - changes everything to uppercase
 *
 * Return: char
 */
/**
 * @a: takes char to convert
 */
char *cap_string(char *a)
{
	int i, abc = 65;

	for (i = 0; *a != '\0' && i < 20; i++)
	{
		if (*a >= 97 && *a <= 122)
		{
			a[i] = abc + i;
		}
	}
	return (a);
}
