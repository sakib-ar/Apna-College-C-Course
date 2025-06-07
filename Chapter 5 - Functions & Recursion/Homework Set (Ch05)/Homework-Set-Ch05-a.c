/*  Homework Question a. Write a function to find
    sum of digits of a number
*/

//  Solution:
# include <stdio.h>

//function declaration/prototype
int dsum(int n);

int main() {
    printf("*Find sum of digits of a number*\n\n");

    int n;
    printf("Enter a number: "); scanf("%d", &n); // Input from the user

    if (n < 0) {
        n = -n ; // Focusing on digit here, not sign
    }

    printf("\nSum of digits of %d ---> %d", n , dsum(n)); // Calling Function

    return 0;
}

//function definition
int dsum(int n){
    int sum = 0;

    for (n ; n > 0 ; n = n / 10){
        sum += n % 10 ; // Using remainder to find the last digit and updating the sum
    }

    return sum;
}
