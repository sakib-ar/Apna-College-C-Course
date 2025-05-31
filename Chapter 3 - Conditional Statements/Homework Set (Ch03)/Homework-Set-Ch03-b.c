/*  Homework Question b. Write a program to check
    if a given number is a natural number.
    (Natural numbers start from 1)
*/

// Solution:

#include <stdio.h>
int main() {
    int num;

    printf("Enter number: ");
    scanf("%d", &num);

    if (num > 0){
        printf("%d is a Natural number", num);
    }
    else {
        printf("%d is not a Natural number", num);
    }

    return 0;
}
