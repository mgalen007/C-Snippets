#include <stdio.h>

typedef enum {
    Success = 200,
    NotFound = 404,
    Error = 500
} StatusCode;


void print_status(StatusCode code) {
    switch(code) {
        case Success:
        printf("Success!\n");
        break;
        
        case NotFound:
        printf("Resource not found!\n");
        break;

        case Error:
        printf("Internal server error!\n");
        break;

        default: 
        printf("Unknown code\n");
    }
}

int main() {
    print_status(200);
    print_status(404);
    print_status(500);

    return 0;
}

