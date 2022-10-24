#include <stdio.h>

int main() {

  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);

  switch (op) {
    case '+':
    printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
    break;
    case '-':
    printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
    break;
    case '*':
    printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
    break;
    case '/':
    printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
    break;
    // operator doesn't match any case constant
    default:
      printf("Incorrect Operator");
  }

  return 0;
}

/*
Output:

Enter an operator (+, -, *, /): +
Enter two operands: 1 2
1.0 + 2.0 = 3.0

*/