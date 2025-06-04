#include <stdio.h>

int main() {
    printf("*Find the largest among 4 numbers*\n\n");

    int a , b , c , d;
    printf("Enter 1st Number: "); scanf("%d", &a); // Input 1st number from the user
    printf("Enter 2nd Number: "); scanf("%d", &b); // Input 2nd number from the user
    printf("Enter 3rd Number: "); scanf("%d", &c); // Input 3rd number from the user
    printf("Enter 4th Number: "); scanf("%d", &d); // Input 4th number from the user
    printf("\n");

    if (a == b && b == c && c == d && d == a) {
        printf("All numbers are same!");
    }
    else if ((a > b || a == b) && (a > c || a == c) && (a > d || a == d)) {
        printf("%d is the largest number", a);
    }
    else if ((b > a || b == a) && (b > c || b == c) && (b > d || b == d)) {
        printf("%d is the largest number", b);
    }
    else if ((c > a || c == a) && (c > b || c == b) && (c > d || c == d)) {
        printf("%d is the largest number", c);
    }
    else if ((d > a || d == a) && (d > b || d == b) && (d > c || d == c)) {
        printf("%d is the largest number", d);
    }
    return 0;
}
