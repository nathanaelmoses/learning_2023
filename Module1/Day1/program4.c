#include <stdio.h>

int main() {
    int rollNo;
    char name[50];
    float physicsMarks, mathMarks, chemistryMarks,totalMarks, percentage;

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %s", name);

    printf("Enter Marks of Physics: ");
    scanf("%f", &physicsMarks);

    printf("Enter Marks of Math: ");
    scanf("%f", &mathMarks);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemistryMarks);
    
    if(physicsMarks<0||physicsMarks>100){
        printf("entered mark is wrong");
    }
    else if(mathMarks<0||mathMarks>100){
        printf("entered mark is wrong");
    }
    else if(chemistryMarks<0||chemistryMarks>100){
        printf("entered mark is wrong\n");
    }
    else{
    totalMarks = physicsMarks + mathMarks + chemistryMarks;
    percentage = (totalMarks / 300.0) * 100;

    printf("Summary\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", physicsMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemistryMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);
    }

    return 0;
}