#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box* box) {
    return box->length * box->width * box->height;
}

double calculateSurfaceArea(struct Box* box) {
    double lw = box->length * box->width;
    double wh = box->width * box->height;
    double hl = box->height * box->length;

    return 2 * (lw + wh + hl);
}

int main() {

    struct Box myBox;

    printf("Enter the length of the box: ");
    scanf("%lf", &myBox.length);

    printf("Enter the width of the box: ");
    scanf("%lf", &myBox.width);

    printf("Enter the height of the box: ");
    scanf("%lf", &myBox.height);

    
    struct Box* boxPtr = &myBox;

    
    printf("Using (*) and (.) operators:\n");
    printf("Length: %.2f\n", (*boxPtr).length);
    printf("Width: %.2f\n", (*boxPtr).width);
    printf("Height: %.2f\n", (*boxPtr).height);
    printf("Volume: %.2f\n", calculateVolume(boxPtr));
    printf("Surface Area: %.2f\n", calculateSurfaceArea(boxPtr));

    
    printf("\nUsing (->) operator:\n");
    printf("Length: %.2f\n", boxPtr->length);
    printf("Width: %.2f\n", boxPtr->width);
    printf("Height: %.2f\n", boxPtr->height);
    printf("Volume: %.2f\n", calculateVolume(boxPtr));
    printf("Surface Area: %.2f\n", calculateSurfaceArea(boxPtr));

    return 0;
}