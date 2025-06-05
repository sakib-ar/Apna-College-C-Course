#include <stdio.h>

int main() {
    printf("*Find out all prime numbers from 1 to n*\n\n");

    int n;

    printf("Enter n: "); scanf("%d", &n); // Input from the user

    printf("\nPrime Numbers between 1 to %d ---> ",n);
    int PrimeDivisor;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            if (i % j == 0){
                PrimeDivisor++ ; // Storing total divisors here
            }
        }

        if (PrimeDivisor == 2){
            printf("%d ", i); // Prime Number has 2 divisors, 1 and the number itself
        }

        PrimeDivisor = 0; // Reseting it to zero as the loop ends
    }

    return 0;
}
