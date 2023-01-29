#include <stdio.h>
#include <math.h>

int main() {
    double num1, num2;
    char operation;

    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    printf("Enter the operation (+, -, *, /, s for sin, c for cos, t for tan, e for exponential): ");
    scanf(" %c", &operation);

    switch (operation) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, num1 * num2);
            break;
        case '/':
            printf("%.2lf / %.2lf = %.2lf\n", num1, num2, num1 / num2);
            break;
        case 's':
            printf("sin(%.2lf) = %.2lf\n", num1, sin(num1));
            break;
        case 'c':
            printf("cos(%.2lf) = %.2lf\n", num1, cos(num1));
            break;
        case 't':
            printf("tan(%.2lf) = %.2lf\n", num1, tan(num1));
            break;
        case 'e':
            printf("%.2lf^%.2lf = %.2lf\n", num1, num2, pow(num1, num2));
            break;
        default:
            printf("Invalid operation\n");
    }

    return 0;
}
