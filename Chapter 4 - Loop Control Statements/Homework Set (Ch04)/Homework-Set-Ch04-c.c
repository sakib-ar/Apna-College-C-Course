//  Homework Question c. Write a program to print prime numbers in a range.

/*  Solution:

    A prime number is a natural number greater than 1 that
        has no divisors other than 1 and itself.

*/

//  Code:
# include <stdio.h>

int main() {
    int n;

    printf("*Check Prime numbers between 1 to n*");
    printf("\n\nEnter n: ");
    scanf("%d", &n);

    printf("\n\nPrime Numbers between 1 to %d ---> ",n);
    int PrimeDivisor;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j <= i ; j++){
            if (i % j == 0){
                PrimeDivisor++ ; // Storing total divisors here
            }
    }
        if (PrimeDivisor == 2){
            printf("%d ", i);
        }
        PrimeDivisor = 0; // Reseting it to zero as the loop ends
    }

    return 0;
}
