// Write a C program to find the largest of three numbers using nested if statements

#include <stdio.h>
int main()
{
  int num1, num2, num3;
  printf("enter 3 numbers:\n");
  scanf("%d %d %d", &num1, &num2, &num3);

  if (num1 > num2)
  {
    if (num1 > num3)
    {
      printf("%d is the largest number", num1);
    }
  }
  else if (num2 > num3)
  {
    printf("%d is the largest number", num2);
  }
  else
  {
    printf("%d is the largest number", num3);
  }

  return 0;
}