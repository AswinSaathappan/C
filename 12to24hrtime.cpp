#include <stdio.h>
 int main()
 {
 // Get input for the time in 12-hour format
 int hours, minutes, seconds;
 char meridian;
 printf("Enter hours (1-12): ");
 scanf("%d", &hours);
 printf("Enter minutes (0-59): ");
 scanf("%d", &minutes);
 printf("Enter seconds (0-59): ");
 scanf("%d", &seconds);
 // Validate the input
 if (hours < 1 || hours > 12 || minutes < 0 || minutes > 59 || seconds < 0 || seconds > 59)
 {
 printf("Invalid input. Please enter a valid time.\n");
 return 1; // Exit with an error code
 }
 //Get input for AM or PM
 printf("Enter A for AM or P for PM: ");
 scanf(" %c", &meridian);
 // Validate AM or PM input
 if (!(meridian == 'A' || meridian == 'P'))
 {
 printf("Invalid input. Please enter A or P.\n");
 return 1; // Exit with an error code
 }
 // Convert to 24-hour format
 if (meridian == 'P' && hours != 12){
 hours += 12;
 }
 else if (meridian == 'A' && hours == 12)
 {
 hours = 0;
 }
 // Print the time in 24-hour format
 printf("%02d:%02d:%02d %cM\n", hours, minutes, seconds,meridian);
 return 0;
 }
