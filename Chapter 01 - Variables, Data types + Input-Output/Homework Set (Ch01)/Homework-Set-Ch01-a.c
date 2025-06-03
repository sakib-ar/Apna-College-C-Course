/*  Homework Question a: Write a program to calculate perimeter of rectangle
    Take sides, a & b, from the user*/

// Solution:
#include <stdio.h>
int main() {
    float length; // Declaring a variable to store the length of the rectangle
    float width; // Declaring a variable to store the width of the rectangle

    printf("Enter length: "); // Prompting the user to enter the length
    scanf("%f", &length); // Reading the value of the length

    printf("Enter width: "); // Prompting the user to enter the length
    scanf("%f", &width); // Reading the value of the width

    float perimeter = 2 * (length + width); // Calculating the perimeter of the rectangle

    printf("The perimeter of the rectangular is: %f\n", perimeter); // Displaying the perimeter of the rectangular

    return 0;
}
