#include <stdio.h>
#include <string.h>
#include "main.h"

char
*_strcpy(char *dest, char *src)
{
	char *aux1 = dest;
	for (; *src != '\0'; src++)
	{
		*dest = *src;
		dest++;
	}
	*dest = '\0';
	return (aux1);
}
