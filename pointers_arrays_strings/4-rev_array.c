#include "main.h"
#include <stdio.h>

void
reverse_array(int *a, int n)
{
int b, temp;
for (b = 0; b < ((n - 1) / 2); b++)
{
temp = a[b];
a[b] = a[n - 1 - b];
a[n - 1 - b] = temp;
}
}
