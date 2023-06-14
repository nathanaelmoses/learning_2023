#include <stdio.h>


void swap(void* a, void* b, size_t size) {
    char* p1 = (char*)a;
    char* p2 = (char*)b;

    for (size_t i = 0; i < size; i++) {
        char temp = p1[i];
        p1[i] = p2[i];
        p2[i] = temp;
    }
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