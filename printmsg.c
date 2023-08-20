/*A Pen stand can hold only five pens. Ask the user how many pens he would like to put in the pen stand. Write a program to print the message “PEN STAND IS FULL” if it exceeds 5 pens. 
*/
#include<stdio.h>

int main()
{
  int npens ;
  printf("how many pens you would like to put in pen stand :");
  scanf("%d",&npens);
  if(npens>5){
    printf("PEN STAND IS FULL");
  }

  return 0;
}