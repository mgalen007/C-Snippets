#include <stdio.h>

typedef enum {
    MODE_DEVELOPMENT,
    MODE_STAGING,
    MODE_PRODUCTION
} AppConfig;

void run_app(AppConfig mode) {
    switch(mode) {
        case MODE_DEVELOPMENT:
        printf("\n------DEVELOPMENT MODE------\n");
        break;

        case MODE_STAGING:
        printf("\n------STAGING MODE------\n");
        break;

        case MODE_PRODUCTION:
        printf("\n------PRODUCTION MODE------\n");
        break;

        default:
        printf("Undefined mode!\n");
    }
}

void log_debug(AppConfig mode, char *message) {
    if (mode == MODE_DEVELOPMENT) 
        printf("\n[DEBUG] %s\n", message);
}

void log_warning(AppConfig mode, char *message) {
    if (mode == MODE_DEVELOPMENT || mode == MODE_STAGING) {
        printf("\n[WARNING] %s\n", message);
    }
}

void log_error(AppConfig mode, char *message) {
    printf("\n[ERROR] %s", message);
}

int main() {
    AppConfig dev = MODE_DEVELOPMENT;
    AppConfig staging = MODE_STAGING;
    AppConfig prod = MODE_PRODUCTION;

    run_app(dev);
    log_debug(dev, "-n flag not set!");

    run_app(staging);
    log_warning(staging, "Missing ';' on line 20, may cause app crash");

    run_app(prod);
    log_error(prod, "Function greet not defined, on line 27");

    return 0;
}