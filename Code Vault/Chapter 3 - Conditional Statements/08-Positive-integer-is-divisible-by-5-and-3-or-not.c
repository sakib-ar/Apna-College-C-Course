#include <stdio.h>

int main() {
    printf("*Check whether positive integer is divisible by 5 and 3 or not*\n\n");

    int n ;
    printf("Enter Number: "); scanf("%d", &n); // Input from the user
    printf("\n");

    if (n < 0 || n == 0) {
        printf("Please input positive integer. Try again"); // Filtering out negative integers and Zero
    }
    else if (n % 5 == 0 && n % 3 == 0) {
        printf("%d is divisible by 5 and 3", n); // Satisfied the condition
    }
    else {
        printf("%d is not divisible by 5 and 3", n); // Not satisfied
    }

    return 0;
}
