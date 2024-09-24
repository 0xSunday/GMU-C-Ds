// Write a C program that checks if a number is positive, negative, or zero using the if
// statement.

#include <stdio.h>
int main()
{
  int num;
  printf("enter  a numer : ");
  scanf("%d ", &num);
  if (num > 0)
  {
    printf("%d is a positive number ", num);
  }
  if (num < 0)
  {
    printf("%d is a negetive number ", num);
  }
  if (num = 0)
  {
    printf("%d is a zero ", num);
  }

  return 0;
}