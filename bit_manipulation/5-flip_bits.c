#include "main.h"

unsigned int
flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int a = 0;
	unsigned long int b = n ^ m;

	while (b != 0)
	{
		if ((b & 1) == 1)
		{
			a++;
		}
		b = b >> 1;
	}
	return (a);
}
