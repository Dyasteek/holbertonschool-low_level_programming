#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int
main(void)
{
  int a;
  char res[100];
  int sum;
  srand(time(NULL));
  for (a = 0; sum < 2645; a++)
    {
      res[a] = (rand() % 26 + 97);
      sum = sum + res[a];
      putchar(res[a]);
    }
  res[a + 1] = 2772 - sum;
  putchar(res[a + 1]);
  return (0);
}
