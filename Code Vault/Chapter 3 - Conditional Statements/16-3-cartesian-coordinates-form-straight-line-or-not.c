#include <stdio.h>

int main() {
    printf("*Check whether 3 cartesian coordinates fall on a straight line or not*\n\n");
    float x1 , x2 , x3 , y1 , y2 , y3 , m1 , m2 ;
    printf("Enter inputs of a point by entering values of x1, y1, x2,...\n");

    printf("Enter x1: "); scanf("%f", &x1); //
    printf("Enter y1: "); scanf("%f", &y1); //
    printf("Enter x2: "); scanf("%f", &x2); //
    printf("Enter y2: "); scanf("%f", &y2); //
    printf("Enter x3: "); scanf("%f", &x3); //
    printf("Enter y3: "); scanf("%f", &y3); //

    m1 = (y2-y1) / (x2-x1) ; // Slope of 1st and 2nd point
    m2 = (y3-y2) / (x3-x2) ; // Slope of 2nd and 3rd point

    if (m1 == m2 || (x1 == x2 && x2 == x3)) {
        printf("\nThey will form a straight line.");
    }
    else {
        printf("\nThey will not form a straight line");
    }

    return 0;
}
