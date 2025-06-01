//  Practice Question 05: Write a program to check if a number is divisible by 2 or not.

// Solution:
#include <stdio.h>

int main() {
    int n;

    printf("If divisible by 2\t: 1\nIf not divisible by 2\t: 0\n\nEnter a number: ");
    scanf("%d",&n); // Taking input from user

    printf("%d", n%2==0);

    return 0;
}
