#include <stdio.h>

int main() {
    printf("*Find the largest among 3 numbers*\n\n");

    int a , b , c ;
    printf("Enter 1st Number: "); scanf("%d", &a); // Input 1st number from the user
    printf("Enter 2nd Number: "); scanf("%d", &b); // Input 2nd number from the user
    printf("Enter 3rd Number: "); scanf("%d", &c); // Input 3rd number from the user
    printf("\n");

    if (a == b && b == c && c == a) {
        printf("All numbers are same!"); // All numbers are equal
    }
    else if ((a > b || a == b) && (a > c || a == c)) {
        printf("%d is the largest number", a);
    }
    else if ((b > a || b == a) && (b > c || b == c)) {
        printf("%d is the largest number", b);
    }
    else if ((c > a || c == a) && (c > b || c == b)) {
        printf("%d is the largest number", c);
    }

    return 0;
}
