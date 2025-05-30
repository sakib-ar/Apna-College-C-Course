//  Homework Question a. Write a program to print the average of 3 numbers

// Solution:
#include <stdio.h>
int main() {
    float a , b , c ;

    printf("Enter 1st number: "); scanf("%f", &a);
    printf("Enter 2nd number: "); scanf("%f", &b);
    printf("Enter 3rd number: "); scanf("%f", &c);

    printf("\nThe Average is: %f", (a+b+c)/3);

    return 0;
}
