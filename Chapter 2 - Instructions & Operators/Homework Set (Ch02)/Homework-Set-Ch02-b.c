//  Homework Question b.  Write a program to check if given character is digit or not.

// Solution:
#include <stdio.h>
int main() {
    char x;

    printf("Is a digit , Result ---> 1 \n");
    printf("Not a digit, Result ---> 0 \n\n");

    printf("Enter a single character: "); scanf("%c",&x);

    int n = (int) x; // To get ASCII value of a single character

    printf("\nResult ---> %d \n", n >= 48 && n <= 57); // ASCII value of digit (0-9) is (48 to 57)

    return 0;
}
