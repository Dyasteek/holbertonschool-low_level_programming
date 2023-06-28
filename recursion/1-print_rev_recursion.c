#include "main.h"

void
_print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recrusion(*s + 1);
		_putchar(*s);
	}
}
