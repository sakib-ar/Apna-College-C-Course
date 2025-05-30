// Practice Question 02: Write a program to calculate area of a circle (radius is given)

// Solution:
#include <stdio.h>
int main() {
    float radius; // Declaring a variable to store the radius of the circle

    printf("Enter the radius: "); // Prompting the user to enter the radius
    scanf("%f", &radius); // Reading the radius value

    float area = 3.1416 * radius * radius; // Calculating the area of the square

    printf("The area of the circle is: %f\n", area); // Displaying the area of the square

    return 0;
}
