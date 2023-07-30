#include "main.h"

int
set_bit(unsigned long int *n, unsigned int index)
{
	if (index <= (sizeof(unsigned long int) * 8))
	{
		*n = (*n | (1 << index));
		return (1);
	}
	else
	{
		return (-1);
	}
}
