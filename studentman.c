#include <stdio.h>
#include <string.h>

// Create a Student struct
struct Student {
    char name[20];
    int age;
    char gender[6];
    char class[3];
};

// Function to create a new student
struct Student create_student(char name[20], int age, char gender[6], char class[3]) {
    struct Student student;
    strcpy(student.name, name);
    student.age = age;
    strcpy(student.gender, gender);
    strcpy(student.class, class);

    return student;
};

typedef struct Student Student;

// Function to display information about a student
void present_student(Student *student) {
    printf("->Name: %s\n", student->name);
    printf("->Age: %d\n", student->age);
    printf("->Gender: %s\n", student->gender);
    printf("->Class: %s\n", student->class);
}

// Array representing a class of students (20 max)
Student class[20];
int counter = 0;

// Function to add student to the class
void add_student(Student *student, int *counter) {
    class[*counter] = *student;
    (*counter)++;
}

int main() {
    char name[20];
    int age;
    char gender[6];
    char class[3];

    printf("----------------\n");
    printf("Creating Student\n");
    printf("----------------\n");

    printf("Enter the name: ");
    scanf("%s", name);
    printf("How old is the student? ");
    scanf("%d", &age);
    printf("Specify the gender: ");
    scanf("%s", gender);
    printf("In which class is the student? ");
    scanf("%s", class);
    printf("\n");

    printf("------------------\n");
    printf("Presenting Student\n");
    printf("------------------\n");

    Student new_student = create_student(name, age, gender, class);
    present_student(&new_student);

    return 0;
}