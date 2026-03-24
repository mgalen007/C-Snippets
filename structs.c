#include <stdio.h>
#include <string.h>

struct Student {
    char name[20];
    int age, studentID;
    float grade;
};

typedef struct Student Student;

void present_student(Student *stud) {
    printf("Name: %s\n", stud->name);
    printf("Age: %d\n", stud->age);
    printf("Grade: %.1f\n", stud->grade);
    printf("Student ID: %d\n", stud->studentID);
}

int main() {
    Student stud1, stud2;
    Student students[] = {stud1, stud2};

    for (int i = 0; i <= 1; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("----------------------------\n");
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Age: ");
        scanf("%d", &(students[i]).age);
        printf("Grade: ");
        scanf("%f", &(students[i]).grade);
        printf("Student ID: ");
        scanf("%d", &(students[i]).studentID);
        printf("\n");
    }

    for (int i = 0; i <= 1; i++) {
        printf("Details entered for Student %d:\n", i + 1);
        printf("-------------------------------\n");
        present_student(&(students[i]));
        printf("\n");
    }

    return 0;
}
