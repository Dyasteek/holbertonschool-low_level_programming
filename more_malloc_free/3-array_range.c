#include "main.h"
#include <stdlib.h>

int
*array_range(int min, int max)
{
	int size, a, b;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	b = 0;
	for (a = min; a <= max; a++)
	{
		arr[b] = a;
		b++;
	}
	return (arr);
}
