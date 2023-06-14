#include <stdio.h>

// Generic swap function using type casting
void swap(void* a, void* b, size_t size) {
    void* temp = malloc(size);
    memcpy(temp, a, size);
    memcpy(a, b, size);
    memcpy(b, temp, size);
    free(temp);
}

int main() {
    int a,b;
    printf("enter the a value:\n");
    scanf("%d",&a);
    printf("enter the b value:\n");
    scanf("%d",&b);
    printf("Before swap: a = %d, b = %d\n", a, b);

    // Swapping integers
    swap(&a, &b, sizeof(int));
    printf("After swap: a = %d, b = %d\n", a, b);

   

    return 0;
}