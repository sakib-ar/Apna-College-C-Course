#include <stdio.h>

int main() {
    printf("*Check whether a number is three digit or not*\n\n");

    int n ;
    printf("Enter number: "); scanf("%d", &n); // Input from the user
    printf("\n");

    if (n > 99 && n < 1000) {
        printf("%d is a three-digit number", n); // Two-digit
    }
    else {
        printf("%d is not a three-digit number", n); // Not two-digit
    }

    return 0;
}
