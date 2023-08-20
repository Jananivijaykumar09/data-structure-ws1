#include <stdio.h>

int main()
{
  for (int n = 7; n < 100; n++)
  {
    if (n % 4 == 0 && n%5 == 4 && n% 6 == 4)
    {
      printf(" the number is :%d", n);
    }
  }

  return 0;
}