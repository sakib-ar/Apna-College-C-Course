#include <stdio.h>

int main() {
    printf("*Print first 'n' Fibonacci numbers*\n");
    int a = 1, b = 1, N, n = 1 ;

    printf("Enter number: "); scanf("%d", &N); // Input from the user
    printf("\n");

    if (N <= 0) {
        printf("Hey! Only positive Numbers! Try again...\n");
    }
    else {
        if (N == 1) {
            printf("Fibonacci number at n = 1 is 1\n");
        }
        else if (N == 2) {
            printf("Fibonacci number at n = 1 is 1\nFibonacci number at n = 2 is 2");
        }
        else {
            printf("Fibonacci number at n = 1 is 1\nFibonacci number at n = 2 is 2\n");

            for(int i = 1 ; i <= N-2 ; i++){
                n = a + b ;
                a = b ;
                b = n ;
                printf("Fibonacci number at n = %d is %d\n", i+2, n);
            }
        }
    }

    return 0;
}
