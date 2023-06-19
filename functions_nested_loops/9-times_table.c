#include "main.h"

void
times_table(void)
{
	int j;
	int b;

	for (j = 0; j < 10; j++)
	{
		b = 0;

		while (b < 10)
		{
			int r = b * j;

			if (b > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (r >= 10)
				{
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				} else
				{
					_putchar(' ');
					_putchar('0' + r);
				}
			}
			else
				_putchar(r + '0');

			b++;
		}

		_putchar('\n');
	}

}
