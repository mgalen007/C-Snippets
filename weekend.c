#include <stdio.h>

typedef enum {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
} Day;


int compare(Day day) {
    switch(day) {
        case MONDAY:
        case TUESDAY:
        case WEDNESDAY:
        case THURSDAY:
        case FRIDAY:
        return 1;        
    }
    return 0;
}

int main() {
    int n = compare(MONDAY);
    if (n == 0) {
        printf("Weekend");
    } else {
        printf("Week day");
    }
    return 0;
}