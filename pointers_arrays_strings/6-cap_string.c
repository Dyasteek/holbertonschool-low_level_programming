#include "main.h"

/**
 * cap_string - capitalize all words of a string
 *
 * @s: string
 * Return: string capitalized.
 */

char *cap_string(char *s)
{
int a, b;
char sig[13] = {9, 10, 32, 33, 40, 41, 44, 46, 59, 63, 34, 123, 125};
if (s[0] <= 'z' && s[0] >= 'a')
{
s[0] = s[0] - 32;
}
for (a = 0; s[a] != '\0'; a++)
{
for (b = 0; b <= 12; b++)
{
if ((s[a - 1] == sig[b]) && (s[a] <= 'z' && s[a] >= 'a'))
{
s[a] = s[a] - 32;
}
}
}
return (s);
}
