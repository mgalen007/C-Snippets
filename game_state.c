#include <stdio.h>

typedef enum {
    Idle,
    Playing,
    Paused,
    GameOver
} GameState;

void print_state(GameState state) {
    switch(state) {
        case Idle:
        printf("Current state: Idle\n");
        break;
        case Playing:
        printf("Current state: Playing\n");
        break;
        case Paused:
        printf("Current state: Paused\n");
        break;
        case GameOver:
        printf("Game over!\n");
        break;
        default:
        printf("Unknown state\n");
    }
}

int main() {
    GameState state;
    state = Idle;
    print_state(state);

    return 0;
}