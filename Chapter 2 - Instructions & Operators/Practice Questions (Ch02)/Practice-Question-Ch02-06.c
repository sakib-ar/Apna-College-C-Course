//  Practice Question 05: Write a program to check if a number is odd or even.

// Solution:
#include <stdio.h>

int main() {
    int n;

    printf("If Odd : 0\nIf Even: 1\n\nEnter a number: ");
    scanf("%d",&n); // Taking input from user

    printf("%d", n%2==0);

    return 0;
}
