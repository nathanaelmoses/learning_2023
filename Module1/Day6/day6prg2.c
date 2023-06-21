#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeArray(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        students[i].rollno = 1001;
        strcpy(students[i].name, "Aron");
        students[i].marks = 100.00;
    }
}

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the number of students: ");
    scanf("%d", &size);

    // Create an array of structures dynamically
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    // Initialize the array of structures
    initializeArray(students, size);

    // Display the array of structures
    printf("\nArray of Structures:\n");#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayArray(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Rollno: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the number of students: ");
    scanf("%d", &size);

    // Create an array of structures dynamically
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    // Display the array of structures
    displayArray(students, size);

    // Free dynamically allocated memory
    free(students);

    return 0;
}
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Rollno: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    // Free dynamically allocated memory
    free(students);

    return 0;
}