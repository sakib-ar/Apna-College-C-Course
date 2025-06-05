#include <stdio.h>

int main() {
    printf("*Count the digits of a number*\n\n");
    int n , digit = 0;

    printf("Enter number: "); scanf("%d", &n); // Input from the user
    printf("\n");

    if (n < 0) {
        n = -n ; // Focusing on digit here, not sign
    }

    for(n ; n > 0 ; n = n / 10) {
        digit++ ;
    }

    printf("The number of digits is: %d", digit);

    return 0;
}
