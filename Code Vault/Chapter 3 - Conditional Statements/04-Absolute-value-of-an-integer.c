#include <stdio.h>

int main() {
    printf("*Print the absolute value of an integer*\n\n");

    int n ;
    printf("Enter Number: "); scanf("%d",&n); // Input from the user
    printf("\n");

    if (n >= 0) {
        printf("The Absolute value of %d is %d", n, n); // Same sign
    }
    else {
        printf("The Absolute value of %d is %d", n, -n); // Opposite sign
    }

    return 0;
}
