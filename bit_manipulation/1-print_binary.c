#include "main.h"

void
print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	print_binary2(n);
}

void
print_binary2(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}
	print_binary2(n >> 1);
	_putchar((1 & n) + '0');
}
