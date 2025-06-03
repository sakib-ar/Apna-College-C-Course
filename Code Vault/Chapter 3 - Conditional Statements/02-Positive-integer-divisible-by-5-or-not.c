#include <stdio.h>

int main() {
    printf("*Check whether positive integer is divisible by 5 or not*\n\n");

    int n ;
    printf("Enter Number: "); scanf("%d", &n); // Input from user
    printf("\n");

    if (n < 0 || n == 0) {
        printf("Please input positive integer. Try again"); // Filtering out negative numbers and Zero
    }
    else if (n % 5 == 0) {
        printf("%d is divisible by 5", n);
    }
    else{
        printf("%d is not divisible by 5", n);
    }

    return 0;
}
