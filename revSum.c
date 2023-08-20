#include <stdio.h>

int main()
{
  while (1)
  {
    int rem, sum = 0, rev = 0, n;

    printf("Enter the number(enter 0 to stop): ", &n);
    scanf("%d", &n);
    int orginalnumber = n;
    if (n == 0)
    {
      break;
    }
    if (n < 0)
    {
      printf("give positive digits ");
    }
    else
      while (n != 0)
      {
        rem = n % 10;
        sum = rem + sum;
        n = n / 10;
        rev = rev * 10 + rem;
      }
    printf("original number %d\n", orginalnumber);
    printf("sum of digits is %d\n", sum);
    printf("reverse of the number %d\n:", rev);
  }

  return 0;
}
