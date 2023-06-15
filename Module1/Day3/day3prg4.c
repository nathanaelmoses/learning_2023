#include <stdio.h>

int findLargestNumber(int num);

int main() {
    int num;
    printf("Enter a 4-digit number: ");
    scanf("%d", &num);
    int largestNumber = findLargestNumber(num);
    printf("Largest number after deleting a single digit: %d\n", largestNumber);
    return 0;
}

int findLargestNumber(int num) {
    int largest = 0;
    int i;
    for (i = 0; i < 4; i++) {
        int temp = num;
        int divisor = 1;
        int j;
        for (j = 0; j < i; j++) {
            divisor *= 10;
        }
        temp = (temp / (divisor * 10)) * divisor + (temp % divisor);
        if (temp > largest) {
            largest = temp;
        }
    }
    return largest;
}