#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * Description: Size of
 *
 * Return: On success 0
 */
void jack_bauer(void)
{
	int h;
	int min;

	for (h = 0; h < 24; h++)
	{
		for (min = 0; min < 60; min++)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
		}
	}
}
