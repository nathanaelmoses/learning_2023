#include <stdio.h>

 
int countSetBits(unsigned int num) {
    int count = 0;
    while (num > 0) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int x,i;
    unsigned int a[x];
    printf("enter the x value:");
    scanf("%d",&x);
    
    printf("enter the values: ");
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    
    int totalSetBits = 0;

    for (int i = 0; i < x; i++) {
        totalSetBits += countSetBits(a[i]);
    }

    printf("Total number of set bits: %d\n", totalSetBits);

    return 0;
}