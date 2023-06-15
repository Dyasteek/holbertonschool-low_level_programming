#include "main.h"
/**
 * print_alphabet_x10 - Prints the alphabet 10 times
 *
 * Description: Size of
 *
 * Return: On success 0
 */
void print_alphabet_x10(void)
{
char i;
int t;
for (t = 0; t <= 9; t++)
{
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
}
