#include <stdio.h>

typedef enum {
    RED,
    ORANGE,
    GREEN
} TrafficLight;

void print_state(TrafficLight n) {
    switch(n) {
        case RED:
        printf("Stop!\n");
        break;

        case ORANGE:
        printf("Get ready!\n");
        break;

        case GREEN:
        printf("Go!\n");
        break;

        default:
        printf("Invalid state!\n");
    }
}

int main() {
    while (1) {
        int choice;
        printf("\n[1] RED     [2] ORANGE     [3] GREEN\n");
        printf("\nEnter your chosen number: ");
        scanf("%d", &choice);

        print_state(choice - 1);
    }

    return 0;
}