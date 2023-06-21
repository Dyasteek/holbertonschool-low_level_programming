#include "main.h"
#include <stdio.h>

void
rev_string(char *s)
{
	int i;
	int j;
	char nexstr[1000];

	j = 0;
	for (i = 0; s[i]; i++)
	{
		continue;
	}
	i -= 1;
	for (; s[i]; i--)
	{
		nexstr[j] = s[i];
		j++;
	}
	for (i = 0; s[i]; i++)
		s[i] = nexstr[i];
}
