#include <stdio.h>
#include "main.h"
/**
 * times_table - function prototype declared
 * Description: Prints every times table from 0 to 9
 * Return: number
 */
void times_table(void)
{
	int i;
	int n;
	int r = 0;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 10; i++)
		{
			if ((r * 2) <= 18)
			{
				_putchar((r = n * i) + 48);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(((r = n * i) / 10) + 48);
				_putchar(((r = n * i) % 10) + 48);
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
