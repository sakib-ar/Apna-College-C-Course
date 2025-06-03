#include <stdio.h>

int main() {
    printf("*Check whether the number is Even or Odd*\n\n");

    int n ;
    printf("Enter Number: "); scanf("%d", &n); // Input from user
    printf("\n");

    if (n < 0) {
        printf("Please input positive integer. Try again"); // Odd, Even cannot be negative
    }
    else if (n == 0) {
        printf("The number is Zero"); // Zero is neither odd nor even
    }
    else if (n % 2 == 0) {
        printf("The number is Even"); // Even numbers are divisible by 2, thus remainder is 0
    }
    else {
        printf("The number is Odd!"); // Odd numbers are not divisible by 2, thus, remainder is not 0
    }

    return 0;
}
