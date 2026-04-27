#include <stdio.h>
#include <stdbool.h>

// Define the file permissions enum
typedef enum {
    READ = 1,
    WRITE = 2,
    EXECUTE = 4
} Permission;

// Function to check permissions
bool check_permission(Permission perm, int combo) {
    return (combo & perm) != 0;
}

int main() {
    int permission = READ | EXECUTE;
    bool has_write = check_permission(WRITE, permission);
    if (has_write) {
        printf("Write permission allowed");
    } else {
        printf("Write permission not allowed");
    }

    return 0;
}
