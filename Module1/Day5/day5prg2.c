#include <stdio.h>


struct Complex {
    double real;
    double imaginary;
};


void readComplex(struct Complex* num) {
    printf("Enter the real part: ");
    scanf("%lf", &num->real);

    printf("Enter the imaginary part: ");
    scanf("%lf", &num->imaginary);
}


void writeComplex(const struct Complex* num) {
    printf("Complex number: %.2f + %.2fi\n", num->real, num->imaginary);
}


struct Complex addComplex(const struct Complex* num1, const struct Complex* num2) {
    struct Complex result;
    result.real = num1->real + num2->real;
    result.imaginary = num1->imaginary + num2->imaginary;
    return result;
}


struct Complex multiplyComplex(const struct Complex* num1, const struct Complex* num2) {
    struct Complex result;
    result.real = (num1->real * num2->real) - (num1->imaginary * num2->imaginary);
    result.imaginary = (num1->real * num2->imaginary) + (num1->imaginary * num2->real);
    return result;
}

int main() {
    struct Complex num1, num2;

    printf("Enter the first complex number:\n");
    readComplex(&num1);

    printf("\nEnter the second complex number:\n");
    readComplex(&num2);

    printf("\nFirst complex number:\n");
    writeComplex(&num1);

    printf("\nSecond complex number:\n");
    writeComplex(&num2);

    struct Complex sum = addComplex(&num1, &num2);
    printf("\nSum of the two complex numbers:\n");
    writeComplex(&sum);

    struct Complex product = multiplyComplex(&num1, &num2);
    printf("\nProduct of the two complex numbers:\n");
    writeComplex(&product);

    return 0;
}