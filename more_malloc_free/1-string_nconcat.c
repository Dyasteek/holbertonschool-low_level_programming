#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char
*string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, a, b;
	char *str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (size1 = 0; s1[size1] != '\0'; size1++)
		;
	for (size2 = 0; s2[size2] != '\0' && size2 < n; size2++)
		;
	str = malloc((size1 + size2) * sizeof(char) + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < size1; a++)
	{
		str[a] = s1[a];
	}
	for (b = 0; b < size2; b++)
	{
		str[a] = s2[a - size1];
		a++;
	}
	str[a] = '\0';
	return (str);
}
