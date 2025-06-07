/*  Homework Question b. Write a function to find
    square root of a number.
*/

//  Solution:
# include <stdio.h>
# include <math.h>

//function declaration/prototype
float squareRoot(float n);

int main() {
    printf("*Find square root of a number*\n\n");

    float n;
    printf("Enter a number: "); scanf("%f", &n); // Input from the user

    printf("\nSquare-root of %.2f ---> %.4f", n, squareRoot(n));

    return 0;
}

//function definition
float squareRoot(float n){

    return sqrt(n);
}
