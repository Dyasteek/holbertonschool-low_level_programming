#include "main.h"
#include <stdio.h>

char
*_strncat(char *dest, char *src, int n)

{
int size_d, a;
for (size_d = 0; dest[size_d] != '\0'; size_d++)
{
}
for (a = 0; a < n && src[a] != '\0'; a++)
{
dest[size_d + a] = src[a];
}
dest[size_d + a] = '\0';
return (dest);
}
