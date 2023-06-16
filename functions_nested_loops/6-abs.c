#include "main.h"

int
_abs(int n)
{
	int i;

	i = '0';
	if (n > 0 || n == 0)
	{
		i = n;
	}
	if (n < 0)
	{
		i = n * -1;
	}
	return (i);
}
