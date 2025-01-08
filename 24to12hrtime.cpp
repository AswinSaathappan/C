#include <stdio.h>
 int main() {
 // Get input for the time in 24-hour format
 int hours, minutes, seconds;
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
 // Determine AM or PM
 int isPM = 0; // 0 for AM, 1 for PM
 if (hours >= 12)
 {
 isPM = 1;
 }
 if (hours > 12)
 {
 hours -= 12;
 }
 // Special case: midnight (0:00)
    else if (hours == 0) 
        hours = 12;
 // Print the time in 12-hour format
 printf("%02d:%02d:%02d %s\n", hours, minutes, seconds, isPM?"PM":"AM");
 return 0;
}
