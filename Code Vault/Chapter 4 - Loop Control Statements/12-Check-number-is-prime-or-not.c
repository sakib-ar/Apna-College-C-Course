#include <stdio.h>

int main() {
    printf("*Check whether a number is prime or not*\n\n");
    int n , divisor = 0 ;

    printf("Enter number: "); scanf("%d", &n); // Input from the user
    printf("\n");

    for(int i = 1 ; i <= n ; i++) {
        if(n % i == 0){
            divisor++ ;
        }
    }
    if (divisor == 2) {
        printf("%d is prime", n); // Prime number has 2 divisors only, 1 and the number itself
    }
    else {
        printf("%d is not prime", n); // More divisor than 2
    }
    return 0;
}
