#include <stdio.h>

typedef enum {
    RED,
    YELLOW,
    GREEN
} TrafficLight;

void print_state(TrafficLight n) {
    switch(n) {
        case RED:
        printf("Stop!\n");
        break;

        case YELLOW:
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
    print_state(RED);
    print_state(YELLOW);
    print_state(GREEN);

    return 0;
}