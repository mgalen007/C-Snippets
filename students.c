#include <stdio.h>
#include <string.h>

// Define a Student struct
struct Student {
    int id, age;
    char lname[20], fname[20], gender[6];
};

// Declare functions to read and show properties
void setProperties(struct Student *stud, int id, int age, char fname[20], char lname[20], char gender[6]) {
    (*stud).id = id;
    (*stud).age = age;
    strcpy((*stud).fname, fname);
    strcpy((*stud).lname, lname);
    strcpy((*stud).gender, gender);
}
void getProperties(struct Student *stud) {
    printf("\nID: %d", (*stud).id);
    printf("\nAge: %d", (*stud).age);
    printf("\nFirst name: %s", (*stud).fname);
    printf("\nLast name: %s", (*stud).lname);
    printf("\nGender: %s", (*stud).gender);
}

int main() {
    // Declare two students
    struct Student stud1, stud2;

    // Set their properties
    setProperties(&stud1, 1, 16, "Rugwiro", "Galen", "male");
    setProperties(&stud2, 2, 15, "Atete", "Eunice", "female");

    // Print the properties
    getProperties(&stud1);
    printf("\n--------------------------\n");
    getProperties(&stud2);
}