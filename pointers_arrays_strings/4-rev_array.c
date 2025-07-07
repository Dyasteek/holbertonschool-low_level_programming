#include <string.h>
#include "main.h"
/**
 * reverse_array - reverses an array
 *
 * Return: Empty
 */
/**
 * @a: array of ints
 */
/**
 * @n: number of ints in array
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int tmp[] = {0};

	i = 0;
	j = 0;
	while (i < n && tmp[j] != '\0')
	{
		tmp[j] = a[n];
		a[j] = tmp[n];
		j++;
		n--;
	}
}
