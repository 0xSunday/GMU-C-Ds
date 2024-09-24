// Write a C program to perform basic arithmetic operations (+, -, *, /) based on user input
// using the switch statement
#include <stdio.h>
int main()
{
  char symbol;
  float num1, num2, result;
  printf("press 1 for +\n");
  printf("press 2 for -\n");
  printf("press 3 for X\n");
  printf("press 4 for /\n");
  scanf("%c", &symbol);
  printf("Enter 1st and 2nd number ");
  scanf("%f %f", &num1, &num2);
  switch (symbol)
  {
  case '1':
    result = num1 + num2;
    printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
    break;
  case '2':
    result = num1 - num2;
    printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
    break;

  case '3':
    result = num1 * num2;
    printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
    break;
  case '4':
    result = num1 / num2;
    printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
    break;

  default:

    printf("Error! Invalid operator.\n");
    return 0;
  }
}
