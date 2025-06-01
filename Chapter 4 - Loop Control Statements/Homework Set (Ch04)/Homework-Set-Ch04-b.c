//  Homework Question b. Write a program to check if a number is prime or not

/*  Solution:

    A prime number is a natural number greater than 1 that
        has no divisors other than 1 and itself.

*/

//  Code:
# include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    int PrimeDivisor;

    for(int i = 1 ; i <= n ; i++){
        if (n % i == 0){
            PrimeDivisor++ ; // Storing total divisors here
        }
    }

    if (PrimeDivisor == 2){
        printf("%d is a prime number \n", n);
    }
    else {
        printf("%d is not a prime number \n", n);
    }

    return 0;
}
