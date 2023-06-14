#include <stdio.h>

int main() {
    int x,i;
    printf("enter the x value:");
    scanf("%d",&x);
    int a[x];
    printf("enter the values ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    int size = sizeof(a) / sizeof(a[0]);
    int sum = 0;

    for (int i = 0; i < size; i += 2) {
        sum += a[i];
    }

    printf("Sum of alternate elements: %d\n", sum);

    return 0;
}