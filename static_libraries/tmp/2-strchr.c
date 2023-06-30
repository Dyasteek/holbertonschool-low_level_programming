#include <stdio.h>
#include "main.h"

char
*_strchr(char *s, char c)
{
int a;
for (a = 0; s[a] != c; a++)
{
if (s[a + 1] == '\0' && s[a + 1] != c)
{
return ('\0');
}
}
return (&s[a]);
}
