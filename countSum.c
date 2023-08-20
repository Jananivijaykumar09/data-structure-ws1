#include <stdio.h>

int main()
{
  int n, sum = 0,count=0;
  printf("Enter 0 to terminate the process\n");
  while (1)
  {
    printf("enter the number : ");
    scanf("%d", &n);
    if ((n == 0))
    {
      break;
    }
    else 
    {
      count++;
      sum = sum + n;
    }
    
  }
  printf(" the sum :%d\n", sum);
  printf("the count %d ",count);

  return 0;
}