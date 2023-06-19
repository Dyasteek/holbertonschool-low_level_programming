#include "main.h"

int 
print_last_digit(int n)
{
int i;
if (n >= 0)
{
i = n % 10;
_putchar(i + '0');
}
else
{
n = n * -1;
i = n % 10;
_putchar(i + '0');
}
return (i);
}
