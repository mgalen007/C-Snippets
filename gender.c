#include <stdio.h>

// Define a gender enum
typedef enum {
    MALE = 1,
    FEMALE,
    OTHER
} Gender;

int main() {
    int choice;
    printf("Select a number: \n");
    printf("[1] Male    [2] Female    [3] Other\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case MALE:
        printf("You selected: Male");
        break;
        case FEMALE:
        printf("You selected: Female");
        break;
        case OTHER:
        printf("You selected: Other");
        break;
        default: 
        printf("Unknown choice");
    };

    return 0;
}