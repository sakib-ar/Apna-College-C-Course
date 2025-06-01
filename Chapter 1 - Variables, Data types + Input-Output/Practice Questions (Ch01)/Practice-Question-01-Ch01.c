// Practice Question 01: Write a program to calculate area of a square (side is given)

// Solution:
#include <stdio.h>
int main() {
    float side; // Declaring a variable to store the side length of the square

    printf("Enter the side-length: "); // Prompting the user to enter the side length
    scanf("%f", &side); // Reading the side-length value

    float area = side * side; // Calculating the area of the square

    printf("The area of the square is: %f\n", area); // Displaying the area of the square

    return 0;
}
