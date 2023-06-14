#include <stdio.h>

void Exponent(double x) 
{
    unsigned long long* p = (unsigned long long*)&x;
    unsigned int exponent = (*p >> 52) & 0x7FF;
    printf("Hexadecimal: 0x%X\n", exponent);
    printf("Binary: 0b");
    for (int i = 10; i >= 0; i--) {
        int bit = (exponent >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
    
}

int main() {
    double x;
    printf("enter the x value:");
    scanf("%lf",&x);
    Exponent(x);

    return 0;
}