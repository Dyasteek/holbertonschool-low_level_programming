#include <stdio.h>
#include "main.h"

char
*_strcat(char *dest, char *src)
{
	int i;
	int j;
	int ij;
	int n;

	n = 0;
	ij = 0;
	for (i = 0; src[i]; i++)
		continue;
	for (j = 0; dest[j]; j++)
		continue;
	ij = i + j;
	for (; j <= ij; j++)
	{
		dest[j] = src[n];
		n++;
	}
	return (dest);
}
