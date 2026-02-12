#include <stdio.h>

int main() {
    int a, b;
    char operator;

    scanf("%d %c %d", &a, &operator, &b);

    switch(operator) {
        case '+':
            printf("Result = %d", a + b);
            break;
    case '-':
        printf("Result = %d", a - b);
        break;
    case '*':
            printf("Result = %d", a * b);
            break;
    case '/':
         if (b != 0)
            printf("Result = %d", a / b);
            else
                printf("Division by zero not allowed");
            break;
      default:
            printf("Invalid operator");
    }
    return 0;
}
