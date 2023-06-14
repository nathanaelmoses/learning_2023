#include <stdio.h>

int bit_operations(int num, int oper_type) {
    switch (oper_type) {
        case 1:
            num |= 1; 
            break;
        case 2:
            num &= ~(1 << 31);  
            break;
        case 3:
            num ^= (1 << 16);  
            break;
        default:
            printf("Invalid operation type.\n");
            return -1; 
    }

    return num;
}

int main() {
    int number, operationType;
    int result;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Enter the operation type (1, 2, or 3): ");
    scanf("%d", &operationType);

    result = bit_operations(number, operationType);

    if (result != -1) {
        printf("Result: %d\n", result);
    }

    return 0;
}