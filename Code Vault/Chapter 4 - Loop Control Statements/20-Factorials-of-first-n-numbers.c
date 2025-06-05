#include <stdio.h>

int main() {
    printf("*Print all the factorial(0! to n!) of a given number n*\n");

    int n;
    printf("Enter n: "); scanf("%d", &n);
    printf("\n");

    double fact = 1;

    if (n < 0) {
        printf("Enter positive integer next time");
    }
    else {
        if(n == 0) {
            printf("0! = 1");
        }
        else {
            for (int i = 1 ; i <= n ; i++) {
                fact = fact * i;
                printf("%d! = %.lf\n", i , fact);
            }
        }
    }

    return 0;
}
