#include "main.h"

int
_islower(int c)
{
int r;
if (c >= 96 && c <= 123)
r = 1;
else
r = 0;
return (r);
}
