#include <stdio.h>
#include <stdlib.h>

// Function prototypes
int add(int, int);
int subtract(int, int);
int divide(int, int);
int multiply(int, int);

typedef enum {
    ADD = 1,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
} Command;

int main() {
    printf("           ------------           \n");
    printf("<---------| CALCULATOR |--------->\n");
    printf("           ------------           \n\n");
    int a, b, cmd;

    // Main loop
    while (1) {
        printf("[1] Addition          [2] Subtraction\n");
        printf("[3] Multiplication    [4] Integer division\n");
        printf("[5] Exit\n\n");
        printf("Choice: ");
        scanf("%d", &cmd);
        if (cmd == 5) exit(1);
        printf("\n");
        printf("Enter num1 and num2: ");
        scanf("%d %d", &a, &b);
        printf("Result: ");

        switch(cmd) {
            case ADD:
            printf("%d + %d = %d\n", a, b, add(a, b));
            break;

            case SUBTRACT:
            printf("%d - %d = %d\n", a, b, subtract(a, b));
            break;

            case DIVIDE:
            printf("%d / %d = %d\n", a, b, divide(a, b));
            break;

            case MULTIPLY:
            printf("%d * %d = %d\n", a, b, multiply(a, b));
            break;

            default:
            printf("Invalid command!\n");
        }
        printf("\n");
    }

    return 0;
}

// Function bodies
int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int divide(int a, int b) {
    if (b != 0) return a / b;
    printf("Math Error: cannot divide by zero!\n");
}
int multiply(int a, int b) { return a * b; }


