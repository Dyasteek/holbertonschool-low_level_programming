#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Size of
 *
 * Return: Always 0
 */
int main(void)
{
char c;
while (c != 'g')
{
if (c <= '9')
{
for (c = '0'; c <= '9'; ++c)
putchar(c);
}
else
{
c = 'a';
while (c != 'g')
{
putchar(c);
++c;
}
}
}
putchar('\n');
return (0);
}
