#include <stdio.h>

// Enum for the days of the week
enum WeekDays {
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday, 
    Saturday,
    Sunday
};

// Array of day name strings
char *days[7] = {
    "Monday", "Tuesday", "Wednesday", "Thursday",
    "Friday", "Saturday", "Sunday"
};

int main() {
    for (int i = Monday; i <= Sunday; i++) {
        printf("%s: %d\n", days[i], i);
    }

    return 0;
}