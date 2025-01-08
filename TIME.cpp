#include <stdio.h>

int main() {
    // Get input for the time in 24-hour format
    int hours, minutes, seconds;
    char meridian;

    printf("Enter hours (0-23): ");
    scanf("%d", &hours);
    printf("Enter minutes (0-59): ");
    scanf("%d", &minutes);
    printf("Enter seconds (0-59): ");
    scanf("%d", &seconds);

    // Validate the input
    if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59 || seconds < 0 || seconds > 59) {
        printf("Invalid input. Please enter a valid time.\n");
        return 1; // Exit with an error code
    }

    // Convert to 12-hour format
    if (hours >= 12) {
        meridian = 'P';
        if (hours > 12) {
            hours -= 12;
        }
    } else {
        meridian = 'A';
        if (hours == 0) {
            hours = 12;
        }
    }

    // Print the time in 12-hour format
    printf("%02d:%02d:%02d %cM\n", hours, minutes, seconds, meridian);

    return 0;
}

