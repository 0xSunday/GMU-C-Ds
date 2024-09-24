// Write a C program to check if a number lies between 10 and 50 (both inclusive) using if-else
// and logical operators

#include <stdio.h>

int main()
{
  int num;

  printf("Enter an integer: ");
  scanf("%d", &num);

  if (num >= 10 && num <= 50)
  {
    printf("%d lies between 10 and 50 \n", num);
  }
  else
  {
    printf("%d does not lie between 10 and 50.\n", num);
  }

  return 0;
}