#include <stdio.h>

void calculator() {
    double num1, num2, result;
    char operator;

    printf("\nSimple Calculator\n");
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    switch (operator) {
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
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero is not allowed.\n");
                return;
            }
            break;
        default:
            printf("Invalid operator. Please use +, -, *, or /.\n");
            return;
    }

    printf("Result: %.2lf\n", result);
}

int main() {
    calculator();
    return 0;
}
