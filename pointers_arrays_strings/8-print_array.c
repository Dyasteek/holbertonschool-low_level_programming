#include <stdio.h>
#include "main.h"

void
print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
