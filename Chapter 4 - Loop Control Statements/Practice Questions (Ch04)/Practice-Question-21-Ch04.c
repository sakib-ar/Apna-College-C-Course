//  Practice Question 21: Print the factorial of a number n.

// Solution:
#include <stdio.h>

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    double fact = 1;

    for(int i = 1 ; i <= n ; i++){
        fact *= i ;
    }

    printf("%d! = %.lf \n", n , fact);

    return 0;
}
