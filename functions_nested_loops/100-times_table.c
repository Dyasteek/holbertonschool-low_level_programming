#include <stdio.h>
#include "main.h"
/**
 * print_times_table - function prototype declared
 * Description: Prints every times table from 0 to 9
 * Return: number
 */
/**
 * @n: takes number
 */
void print_times_table(int n)
{
	int i;
	int c;
	int r = 0;

	if (n < 15 && n > 0)
	{
		for (c = 0; c <= n; c++)
		{
			for (i = 0; i <= n; i++)
			{
				if ((r * 2) <= 18)
				{
					_putchar((r = c * i) + 48);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else if (r <= 100)
				{
					_putchar(((r = c * i) / 10) + 48);
					_putchar(((r = c * i) % 10) + 48);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar((((r = c * i) / 100) % 10) + '0');
					_putchar(((r = c * i) / 10) + '0');
					_putchar(((r = c * i) % 10) + '0');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
	else if (n == 0)
		_putchar('0');
}
