#include <stdio.h>

typedef enum {
    Ok,
    FileNotFound,
    AccessDenied
} StatusCode;

// Error-handling function
void describe_status(StatusCode code) {
    switch(code) {
        case Ok:
        printf("Result Ok: success!\n");
        break;

        case FileNotFound:
        printf("Error: File not found!\n");
        break;

        case AccessDenied:
        printf("Error: Access Denied!\n");
        break;

        default:
        printf("Unknown error: try again.\n");
    }
}

int main() {
    describe_status(FileNotFound);
    describe_status(Ok);
    describe_status(AccessDenied);

    return 0;
}