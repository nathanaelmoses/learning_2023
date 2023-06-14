#include <stdio.h>

int findbig(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int main() {
    int a,b;
    printf("enter the a value:");
    scanf("%d",&a);
    printf("enter the b value:");
    scanf("%d",&b);

    int result= findbig(a,b);

    printf("biggest number:%d\n", result);

    return 0;
}