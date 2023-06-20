#include "main.h"

void
print_triangle(int n)
{
	int i, j, k;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (j = 1; j <= n; j++)
		{
			if (j != 0)
			{
				for (k = n; k > j; k--)
				{
					_putchar(' ');
				}
			}

			for (i = 0; i < j; i++)
			{
				_putchar('#');
			}

		_putchar('\n');

		}
	}
}
