// Write a C program to assign grades to a student based on their marks (90+ for A, 80-89 for B,
// 70-79 for C, etc.) using an else-if ladder

#include <stdio.h>
int main()
{
  int marks;
  printf("enter your marks\n");
  scanf("%d ", &marks);

  if (marks >= 90 && marks <= 100)
  {
    printf("you got A Grade");
  }
  else if (marks >= 80 && marks <= 89)
  {
    printf("you got B Grade ");
  }
  else if (marks >= 70 && marks <= 79)
  {
    printf("you got C Grade");
  }
  else
  {
    printf("invalid marks");
  }

  return 0;
}