#include "stdio.h"

int
_isalpha(int c)
{
int r;
if (c >= 96 && c <= 123)
r = 1;
else if (c >= 64 && c <= 91)
r = 1;
else
r = 0;
return (r);
}
