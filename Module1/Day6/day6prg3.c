#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStudents(struct Student* students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        students[i].rollno = 0;
        strcpy(students[i].name, "");
        students[i].marks = 0.0;
    }
}

void parseAndInitialize(const char* input, struct Student* students, int numStudents) {
    const char* delimiter = " ";
    char* token;
    int i = 0;

    char inputCopy[100];
    strcpy(inputCopy, input);

    token = strtok(inputCopy, delimiter);
    while (token != NULL && i < numStudents) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, delimiter);
        strcpy(students[i].name, token);

        token = strtok(NULL, delimiter);
        students[i].marks = atof(token);

        token = strtok(NULL, delimiter);
        i++;
    }
}

void displayStudents(const struct Student* students, int numStudents) {
    printf("Student Data:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar();

    struct Student* students = (struct Student*)malloc(numStudents * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed. Exiting...\n");
        return 1;
    }

    initializeStudents(students, numStudents);

    printf("Enter the student data in the format 'rollno name marks' for each student:\n");

    char input[100];
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    parseAndInitialize(input, students, numStudents);

    displayStudents(students, numStudents);

    free(students);

    return 0;
}