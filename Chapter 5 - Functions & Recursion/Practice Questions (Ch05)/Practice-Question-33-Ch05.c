/*  Practice Question 33: Write a function to calculate Percentage
    of a student from Marks in Science, Math & Language.
*/

//  Solution:
#include <stdio.h>

// Declaration/prototype:
float percentage(float s , float m , float l);

int main() {
    printf("*Find percentage of 3 subjects*\n\n");

    float s , m , l ;
    printf("Enter marks in Science\t: "); scanf("%f", &s);
    printf("Enter marks in Math\t: "); scanf("%f", &m);
    printf("Enter marks in Language\t: "); scanf("%f", &l);

    printf("\nPercentage ---> %.2f", percentage(s , m , l));

    return 0;
}

// Function definition:
float percentage(float s , float m , float l){

    return ((s + m + l) / 3) ;
}
