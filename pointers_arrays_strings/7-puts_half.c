#include "main.h"

void
puts_half(char *str)
{
	int i;
	int n;

	for (i = 0; str[i]; i++)
		continue;
	i -= 1;
	n = i / 2;
	if (n % 2 != 0)
	{
		for (; n <= i; n++)
			_putchar(str[n]);
	}
	if (n % 2 == 0)
	{
		n++;
		for (; n <= i; n++)
			_putchar(str[n]);
	}
	_putchar('\n');
}
