#include <stdio.h>
#include <stdbool.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    if (top >= MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = c;
}

char pop() {
    if (top < 0) {
        printf("Stack Underflow\n");
        return -1;
    }
    return stack[top--];
}

char peek() {
    if (top < 0) {
        return -1;
    }
    return stack[top];
}

bool isEmpty() {
    return top == -1;
}

bool isMatchingPair(char opening, char closing) {
    return (opening == '(' && closing == ')') ||
           (opening == '{' && closing == '}') ||
           (opening == '[' && closing == ']');
}

bool ispar(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];

        if (ch == '(' || ch == '{' || ch == '[') {
            push(ch);
        } else if (ch == ')' || ch == '}' || ch == ']') {
            if (isEmpty() || !isMatchingPair(pop(), ch)) {
                return false;
            }
        }
    }

    return isEmpty();
}

int main() {
    char s[100];
    printf("Enter the Parenthesis: ");
    scanf("%s", s);  // Corrected scanf: No need for '&' as 's' is already an array

    if (ispar(s)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
