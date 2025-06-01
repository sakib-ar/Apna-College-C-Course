/*  Practice Question 12: Write a program to find
    if a character entered by user is upper case or not.
*/

// Solution:
#include <stdio.h>

int main() {
    char ch;

    printf("Enter character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z'){
        printf("Upper Case"); // Learn ASCII values for more details
    }
    else if (ch >= 'a' && ch <= 'z'){
        printf("Lower Case"); // Learn ASCII values for more details (2)
    }
    else {
        printf("Not an English Letter");
    }

    return 0;
}
