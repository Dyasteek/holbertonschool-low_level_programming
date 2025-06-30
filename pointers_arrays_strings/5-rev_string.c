#include "main.h"
#include <stdio.h>

void
rev_string(char *s)
{
	int i;
	int j;
	char k[10];

	j = 0;
	for (i = 0; s[i]; i++)
	{
		continue;
	}
	i -= 1;
	for (; s[i]; i--)
	{
		k[j] = s[i];
		j++;
	}
	for (i = 0; s[i]; i++)
		s[i] = k[i];
}
