#include "main.h"

int
is_prime_number(int n)
{
int b = 2;
b = chkprime(n, b);
return (b);
}

int
chkprime(int n, int b)
{
if ((n % b == 0 && n != b) || n <= 1)
{
return (0);
}
else if (n == b)
{
return (1);
}
else
{
b++;
return (chkprime(n, b));
}
}
