#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {64, 84, 20, 36, 12, 90, 72, 10, 45, 56};
    int len = sizeof(arr) / sizeof(arr[0]);

    int min = INT_MAX;
    int max = INT_MIN;

    for (int i = 0; i < len; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("Array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);

    return 0;
}