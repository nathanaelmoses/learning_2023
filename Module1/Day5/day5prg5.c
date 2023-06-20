#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
};

void swapStructures(struct Person* person1, struct Person* person2) {
    char tempName[50];
    strcpy(tempName, person1->name);
    strcpy(person1->name, person2->name);
    strcpy(person2->name, tempName);

    int tempAge = person1->age;
    person1->age = person2->age;
    person2->age = tempAge;
}

int main() {
    struct Person person1, person2;

    printf("Enter the name of person 1: ");
    scanf("%s", person1.name);

    printf("Enter the age of person 1: ");
    scanf("%d", &person1.age);

    printf("Enter the name of person 2: ");
    scanf("%s", person2.name);

    printf("Enter the age of person 2: ");
    scanf("%d", &person2.age);

    printf("\nBefore swapping:\n");
    printf("Person 1:\nName: %s\nAge: %d\n", person1.name, person1.age);
    printf("Person 2:\nName: %s\nAge: %d\n", person2.name, person2.age);

    swapStructures(&person1, &person2);

    printf("\nAfter swapping:\n");
    printf("Person 1:\nName: %s\nAge: %d\n", person1.name, person1.age);
    printf("Person 2:\nName: %s\nAge: %d\n", person2.name, person2.age);

    return 0;
}