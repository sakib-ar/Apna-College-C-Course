//  Practice Question 31 (2): Factorial of n

//  Solution:
#include <stdio.h>

// Declaration/prototype:
double fact(int n);

int main() {
    printf("*Find factorial of a number*\n\n");

    int n;
    printf("Enter a number: "); scanf("%d", &n);

    printf("\n%d! = %.lf", n, fact(n));

    return 0;
}

// Function definition:
double fact(int n){
    double res;

    if (n == 0){
        return 1;
    }
    else{
        res = n * fact(n - 1);

        return res;
    }
}
