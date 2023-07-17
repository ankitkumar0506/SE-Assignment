#include<stdio.h>
int main ()
{
  int num1, num2;
  float result=0;
  char ch;
  printf ("Enter first number = ");
  scanf ("%d", &num1);
  printf ("Enter second number = ");
  scanf ("%d", &num2);
  printf ("Choose operator to perform operations =\n 1.Addition (+)...\n 2.Subtraction (-)...\n 3.Multiplication (*)\n 4.Division (/)...\n 5.Modulo (%%)...\n ");
  scanf (" %c",&ch);
  switch (ch)
    {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
     break;
    case '%':
     result = num1 % num2;
      break;
    default:
      printf ("Invalid operation\n");
    }
  printf ("Result: %d %c %d = %.2f\n", num1, ch, num2, result);
}