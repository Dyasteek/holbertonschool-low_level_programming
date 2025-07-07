#include <string.h>
#include "main.h"
/**
 * string_toupper - changes all lowercase letter to uppercase
 *
 * Return: char
 */
/**
 * @a: takes char to convert
 */
char *string_toupper(char *a)
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
