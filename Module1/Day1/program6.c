#include <stdio.h>

int main() {
    float operand1, operand2;
    char operator;
    float result;

    printf("Operand 1: ");
    scanf("%f", &operand1);

    printf("Operator(+,-,*,/): ");
    scanf(" %c", &operator);

    printf("Operand 2: ");
    scanf("%f", &operand2);

    
    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 != 0) {
                result = operand1 / operand2;
            } else {
                printf("Division by zero is not allowed.\n");
                return 1; 
            }
            break;
        default:
            printf("Invalid operator.\n");
            return 1; 
    }

    
    printf("Result: %.2f\n", result);

    return 0;
}