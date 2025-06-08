#include <stdio.h>

int gcd(int a , int b);

int main() {
    printf("*Find GCD of two numbers*\n\n");
    int n1 , n2 ;

    printf("Enter number 1: "); scanf("%d", &n1); // Input 1st number from the user
    printf("Enter number 2: "); scanf("%d", &n2); // Input 2nd number from the user

    if (n1 < 0 || n2 < 0) {
        printf("Enter positive integer next time") ; // Filtering out negative integers
    }

    else {
        printf("\nGCD of %d and %d ---> %d", n1, n2, gcd(n1,n2));
    }

    return 0;
}

int gcd(int a , int b){
    int gcd;

    for(int i = 1 ; i <= a && i <= b ; i++){
        if (a % i == 0 && b % i == 0) { // Checking each time if i is the greatest common divisor
            gcd = i ;
        }
    }

    return gcd;
}
