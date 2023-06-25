#include "main.h"
#include <stdio.h>

char
*string_toupper(char *s)
{
int a;
for (a = 0; s[a] != '\0'; a++)
{
if (s[a] <= 'z' && s[a] >= 'a')
{
s[a] = s[a] - 32;
}
}
return (s);
}
