//  Practice Question 30: Sum of first n natural numbers

//  Solution:
#include <stdio.h>

// Declaration/prototype:
int sumN(int a);

int main() {
    int n ;
    printf("Enter a number: "); scanf("%d", &n);

    printf("Sum of first %d natural numbers ---> %d", n , sumN(n));

    return 0;
}

// Recursive Function:
int sumN(int a){
    int sum;

    if (a == 1){ // Base Case
        return 1;
    }

    else {
    sum = a + sumN(a-1);

    return sum ;
    }
}
