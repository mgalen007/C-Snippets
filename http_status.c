#include <stdio.h>

typedef enum {
    Ok = 200,
    BadRequestError = 400,
    NotFoundError = 404,
    InternalServerError = 500 
} HttpStatus;

void respond(int n) {
    if (n < 300) {
        if (n == Ok) {
            printf("OK: request successful\n");
        }
        printf("Sent successfully\n");
    } else if (n < 400) {
        printf("Redirect...\n");
    } else if (n < 500) {
        if (n == BadRequestError) {
            printf("BadRequestError: you sent an invalid request\n");
        }
        printf("Invalid request\n");
    } else if (n < 600) {
        if (n == InternalServerError) {
            printf("InternalServerError: error, try again later\n");
        }
        printf("An error occured, try again later\n");
    }
}


int main() {
    respond(500);
    respond(200);
    respond(404);
    respond(400);
    return 0;
}