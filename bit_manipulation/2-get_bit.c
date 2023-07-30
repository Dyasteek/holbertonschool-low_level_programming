#include "main.h"

int
get_bit(unsigned long int n, unsigned int index)
{
	if (index <= (sizeof(unsigned long int) * 8))
	{
		return ((n >> index) & 1);
	}
	else
	{
		return (-1);
	}
}
