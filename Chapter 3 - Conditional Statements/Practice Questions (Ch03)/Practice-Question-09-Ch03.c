/*  Practice Question 09: Write a program to check if a student passed or failed.
    if marks is greater than 30 ---> Pass
    if marks is less than or equal to 30 ---> Fail
*/

// Solution:
#include <stdio.h>

int main() {
    float marks;

    printf("Enter marks: ");
    scanf("%f", &marks);

    if (marks >= 0 && marks <= 30){
        printf("FAILED");
    }
    else if (marks <= 100){
        printf("PASSED");
    }
    else {
        printf("Please input valid marks (0-100)");
    }

    // We can solve by using Ternary Operator (Efficient for few conditions):
    (marks >= 0 && marks <= 30)? printf("\nFAILED")
    : (marks <= 100)? printf("\nPASSED")
    : printf("\nPlease input valid marks (0-100)");

    return 0;
}
