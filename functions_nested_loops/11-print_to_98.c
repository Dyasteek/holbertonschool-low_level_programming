#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints from given number to 98
 * Description: prints to 98
 */
/**
 * @n: takes number
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			if (n < 10 && n > -10)
			{
				if (n < 0)
				{
					_putchar('-');
				}
				_putchar(n + '0');
			}
			else if (n >= 10 || n <= -10)
			{
				if(n < 0)
				{
					_putchar('-');
				}
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			if (n < 100 && n > -100)
			{
				if (n < 0)
				{
					_putchar('-');
				}
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n >= 100 || n <= -100)
			{
				if (n < 0)
				{
					_putchar('-');
				}
				_putchar((n / 100) + '0');
				_putchar((n % 10) + '0');
				_putchar((n % 100) + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
			n--;
		}
	}
	else
	{
		_putchar('9');
		_putchar('8');
	}
	_putchar('\n');
}
