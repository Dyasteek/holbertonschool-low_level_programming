#include "main.h"

char
*_strstr(char *haystack, char *needle)
{
int a, b;
if (*needle == 0)
{
return (haystack);
}
for (a = 0; haystack[a] != '\0'; a++)
{
for (b = 0; needle[b] != '\0'; b++)
{
if (haystack[a + b] == needle[b])
{
if (needle[b + 1] == '\0')
{
return (&haystack[a]);
}
continue;
}
else
{
break;
}
}
}
return ('\0');
}
