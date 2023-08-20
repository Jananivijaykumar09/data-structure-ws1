#include <stdio.h>

int main()
{
  int calls;
  float rate = 0;
  printf("Enter the no of calls : ");
  scanf("%d",&calls);
  if (calls < 100)
  {
    rate = 50;
  }
  else if (calls >=100 && calls < 200)
  {
    calls = calls - 100;
    rate = 50 + (calls * 1);
  }
  else if (calls >= 200 && calls <= 300)
  {
    calls = calls - 200;
    rate = 50 + (100 * 1) + (calls * 2);
  }
  else
  {
    calls = calls-300;
    rate = 50 + (100 * 1) + (100 * 2) + (calls * 3);
  }
  printf("total rate %f", rate);

  return 0;
}