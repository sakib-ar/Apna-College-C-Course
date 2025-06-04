#include <stdio.h>

int main() {
    printf("*Find the smallest among 3 numbers*\n\n");

    int a , b , c ;
    printf("Enter 1st Number: "); scanf("%d", &a); // Input 1st Number from the user
    printf("Enter 2nd Number: "); scanf("%d", &b); // Input 2nd Number from the user
    printf("Enter 3rd Number: "); scanf("%d", &c); // Input 3rd Number from the user

    if (a == b && b == c && c == a) {
        printf("All numbers are same!");
    }
    else if ((a < b || a == b) && (a < c || a == c)) {
        printf("%d is the smallest number", a);
    }
    else if ((b < a || b == a) && (b < c || b == c)) {
        printf("%d is the smallest number", b);
    }
    else if ((c < a || c == a) && (c < b || c == b)) {
        printf("%d is the smallest number", c);
    }

    return 0;
}
