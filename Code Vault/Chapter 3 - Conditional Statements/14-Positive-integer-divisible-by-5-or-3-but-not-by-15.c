#include <stdio.h>

int main() {
    printf("*Check whether positive integer is divisible by 5 or 3 but not by 15*\n\n");

    int n ;
    printf("Enter Number: "); scanf("%d", &n); // Input from the user
    printf("\n");

    if (n < 0 || n == 0) {
        printf("Please input positive integer. Try again"); // Filtering out negative integers and Zero
    }
    else if ((n % 5 == 0 || n % 3 == 0) && n % 15 != 0) {
        printf("Condition satisfied! %d is divisible by 5 or 3 but not by 15", n);
    }
    else if ((n % 5 == 0 || n % 3 == 0) && n % 15 == 0) {
        printf("Condition is not satisfied. %d is divisible by 5, 3 and 15.", n);
    }
    else {
        printf("Condition is not satisfied. %d is not divisible by 5, 3 and 15.", n);
    }

    return 0;
}
