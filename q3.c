// Write a C program to check if a given year is a leap year or not using if-else
#include <stdio.h>
int main()
{
  int year;
  printf("enter a year: \n");
  scanf("%d", &year);

  if (year % 4 == 0)

  {
    printf("%d is a is leap year",year);
  }
  else
  {
    printf("%d is a not a leap year",year);
  }

  return 0;
}