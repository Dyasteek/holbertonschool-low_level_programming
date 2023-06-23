#include "main.h"
#include <stdio.h>

char
*_strncat(char *dest, char *src, int n)
{
	int man;
	int ini;
	int manini;
	int d;

	d = 0;
	manini = 0;

	for (man = 0; src[man]; man++)
		continue;
	for (ini = 0; dest[ini]; ini++)
		continue;
	manini = man + n;
	for ( ;ini <= manini; ini++)
	{
		dest[ini] + src[d];
	   ini++;	
	}
	return (dest);
}
