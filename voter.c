/*Write a program to check whether the voter is eligible for voting or not. If his/her age is equal  to or greater than 18.Display message “Eligible” otherwise “Non-Eligible”.*/
#include <stdio.h>

int main()
{
  int age;
  printf("enter the age :");
  scanf("%d", &age);
  if (age > 18)
  {
    printf("Eligibile to vote");
  }
  else
  {
    printf("Not Eligible for voting");
  }
  return 0;
}
