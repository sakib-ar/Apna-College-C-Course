/*  Practice Question 34: Write a function to
    print the nth term of the Fibonacci Sequence
*/

//  Solution:
#include <stdio.h>

// Declaration/prototype:
int fibo(int n);

int main() {
    printf("*Find nth term of the Fibonacci Sequence*\n\n");

    int n ;
    printf("Enter n: "); scanf("%d", &n);

    printf("\nFibonacci Sequence at n = %d ---> %d", n , fibo(n));

    return 0;
}

// Function definition:
int fibo(int n) {
    if (n == 0){
        return 0;
    }

    else if (n == 1){
        return 1;
    }

    else{
        return (fibo(n - 2) + fibo(n - 1));
    }
}
