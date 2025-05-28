//  Homework Question b: Take a number(n) from user & output its cube(n*n*n)

// Solution:
#include <stdio.h>
int main() {
    float num; // Declaring a variable to store number

    printf("Enter number: "); // Prompting the user to enter any number
    scanf("%f", &num); // Reading the number

    float cube = num * num * num; // Calculating the cube of the number

    printf("The cube of the number is: %f\n", cube); // Displaying the cube of the number

    return 0;
}
