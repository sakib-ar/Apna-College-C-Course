/*  Practice Question 31: Write functions to calculate
    area of a square, a circle & a rectangle.
*/

//  Solution:
#include <stdio.h>

// Declaration/prototype:
void square(float a);
void circle(float r);
void rectangle(float l , float w);

int main() {
    float a , b ;
    char sh ;
    printf("Which Shape?\n 1. Square\n 2. Circle\n 3. Rectangle\n");
    printf("Enter first character (S / C / R): "); scanf("%c", &sh);

    if (sh == 'S' || sh == 's') {
        printf("Enter side: "); scanf("%f", &a);
        square(a);
    }
    else if (sh == 'C' || sh == 'c') {
        printf("Enter radius: "); scanf("%f", &a);
        circle(a);
    }
    else if (sh == 'R' || sh == 'r') {
        printf("Enter length: "); scanf("%f", &a);
        printf("Enter width: "); scanf("%f", &b);
        rectangle(a , b);
    }
    else {
        printf("\nEnter valid character (S / C / R) next time.");
    }

    return 0;
}

// Function definition:
void square(float a){
    float s_area = a * a ;
    printf("Area of the square ---> %.4f", s_area);
}

void circle(float r){
    float c_area = 3.1416 * r * r ;
    printf("Area of the circle ---> %.4f", c_area);
}

void rectangle(float l , float w){
    float r_area = l * w ;
    printf("Area of the rectangle ---> %.4f", r_area);
}
