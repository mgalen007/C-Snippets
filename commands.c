#include <stdio.h>

typedef enum { CMD_START = 1, CMD_STOP, CMD_RESTART } Command;

void start() {
    printf("User selected the start command\n");
}

void stop() {
    printf("User selected the stop command\n");
}

void restart() {
    printf("User selected the restart command\n");
}

int main() {
    printf(" -------------------------------\n");
    printf("|       --| COMMANDS |--        |\n");
    printf(" -------------------------------\n\n");
    printf(" [1] Start   [2] Stop    [3] Restart\n");
    while (1) {
        int cmd;
        printf("Choice: ");
        scanf("%d", &cmd);

        if (cmd == CMD_START) start();
        if (cmd == CMD_STOP) stop();
        if (cmd == CMD_RESTART) restart();       
    }
    return 0;
}
