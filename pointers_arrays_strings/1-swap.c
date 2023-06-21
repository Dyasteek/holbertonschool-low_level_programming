#include "main.h"

void
swap_int(int *a, int *b)
{
	int ad;
	int bd;

	ad = *a;
	bd = *b;
	*a = bd;
	*b = ad;
}
