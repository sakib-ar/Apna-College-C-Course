/*  Practice Question 34: Write a function to
    print n terms of the Fibonacci Sequence
*/

//  Solution:
#include <stdio.h>

// Declaration/prototype:
int fibo(int n);

int main() {
    printf("*Find n terms of the Fibonacci Sequence*\n\n");

    int n ;
    printf("Enter n: "); scanf("%d", &n);

    printf("\nFibonacci Sequence up to n = %d terms:\n", n);
    for(int i = 0 ; i < n ; i++){
        printf("%d " , fibo(i));
    }

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
