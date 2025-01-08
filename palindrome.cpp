#include <stdio.h>
#include <string.h>

int isPalindromeNumber(int num);
int isPalindromeWord(char word[], int length);

int main() {
    int choice;
    printf("Choose an option:\n");
    printf("1. Check if a number is a palindrome\n");
    printf("2. Check if a word is a palindrome\n");
    scanf("%d", &choice);

    switch (choice)
 {
        case 1:
        {
            int num;
            printf("Enter a number: ");
            scanf("%d", &num);

            if (isPalindromeNumber(num)) {
                printf("%d is a palindrome number.\n", num);
            } else {
                printf("%d is not a palindrome number.\n", num);
            }
            break;
        }
        case 2:
           {
            char word[100];
            printf("Enter a word: ");
            scanf("%s", word);
            int length = strlen(word);

            if (isPalindromeWord(word, length)) {
                printf("%s is a palindrome word.\n", word);
            } else {
                printf("%s is not a palindrome word.\n", word);
            }
            break;
        }
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

int isPalindromeNumber(int num)
{
    int originalNum = num;
    int reversedNum = 0;

    while (num > 0)
   {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
		 num /= 10;
    }

    return (originalNum == reversedNum);
}

int isPalindromeWord(char word[], int length)
{
        int i;
        for (i = 0; i < length ; ++i)
        {
        if (word[i] != word[length - 1 - i]) {
            return 0;
        }
    }
    return 1;
}	
