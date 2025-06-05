#include <stdio.h>

int main() {
    printf("*Print Fibonacci number of nth term*\n");
    int a = 1 , b = 1 , N , n = 1 ;

    printf("Enter number: "); scanf("%d", &N); // Input from the user
    printf("\n");

    if (N <= 0) {
        printf("Enter positive integer next time");
    }
    else {
        for(int i = 1 ; i <= N - 2 ; i++) {
        n = a + b ;
        a = b ;
        b = n ;
        }
        printf("Fibonacci number at term %d is %d", N , n);
    }

    return 0;
}
