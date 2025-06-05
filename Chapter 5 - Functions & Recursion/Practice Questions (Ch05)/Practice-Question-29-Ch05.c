/*  Practice Question 29: Use library functions to calculate
    the square of a number given by the user.
*/

//  Solution:
#include <stdio.h>
#include <math.h> // to get power function

int main() {
    int n ;
    printf("Enter a number: "); scanf("%d", &n);

    printf("\n%d ^ 2 = %.lf", n , pow(n , 2));

    return 0;
}
