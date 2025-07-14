#include <stdio.h>
#include "main.h"

int 
main(int argc, char *argv[])
{
int value[5] = {25, 10, 5, 2, 1};
int change, a;
int coins = 0;
if (argc != 2)
{
puts("Error");
return (1);
}
change = atoi(argv[1]);
if (change < 0)
{
puts("0");
return (0);
}
for (a = 0; a < 5; a++)
{
coins = coins + (change / value[a]);
change = change % value[a];
}
printf("%d\n", coins);
return (0);
}
