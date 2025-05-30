//  Homework Question c.  Write a program to print the smallest number of two

// Solution:
#include <stdio.h>
int main() {
    float num1 , num2 ;

    printf("Enter 1st number: "); scanf("%f", &num1);
    printf("Enter 2nd number: "); scanf("%f", &num2);

    float diff = num1 - num2;
    float small = num2 + diff * (diff < 0);

    printf("\nSmallest number: %f \n", small);

    return 0;
}
