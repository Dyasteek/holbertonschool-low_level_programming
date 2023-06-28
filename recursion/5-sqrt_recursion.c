#include "main.h"

int
_sqrt_recursion(int n)
{
	int b = 1;
	b = chksqrt(n, b);
	return (b);
}

int chksqrt(int n, int b)
{
	if (n == (b *b))
	{
		return (b);
	}
}
