#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students, int size) {
    char* token;
    char temp[20];

    // Parse the input string using strtok()
    token = strtok((char*)input, " ");

    // Initialize the array of structures
    for (int i = 0; i < size; i++) {
        // Extract rollno
        students[i].rollno = atoi(token);

        // Extract name
        token = strtok(NULL, " ");
        strcpy(students[i].name, token);

        // Extract marks
        token = strtok(NULL, " ");
        students[i].marks = atof(token);

        // Move to the next student's details
        token = strtok(NULL, " ");
    }
}

int main() {
    int size;

    // Get the size of the array from the user
    printf("Enter the number of students: ");
    scanf("%d", &size);

    // Create an array of structures dynamically
    struct Student* students = (struct Student*)malloc(size * sizeof(struct Student));

    // Get the input string from the user
    char input[100];
    printf("Enter the input string: ");
    scanf(" %[^\n]s", input);

    // Parse the input string and initialize the array of structures
    parseString(input, students, size);

    // Display the array of structures
    printf("\nArray of Structures:\n");
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