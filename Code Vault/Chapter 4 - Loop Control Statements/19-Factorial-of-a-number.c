#include <stdio.h>

int main() {
    printf("***Print the factorial of a given number***\n");

    int n;
    printf("Enter number: "); scanf("%d", &n); // Input from the user
    printf("\n");

    if (n < 0) {
        printf("Please enter positive integer next time.");
    }

    else{
        double fact = 1 ;

        for (int i = 1 ; i <= n ; i++) {
            fact = fact * i ;
        }

        printf("%d! = %.lf\n", n, fact);
    }

    return 0;
}
