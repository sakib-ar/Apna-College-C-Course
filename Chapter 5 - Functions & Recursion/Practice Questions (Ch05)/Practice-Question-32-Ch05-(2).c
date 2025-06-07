//  Practice Question 32: Write a function to convert Celsius to Fahrenheit using function

//  Solution:
#include <stdio.h>

// Declaration/prototype:
float cnv (float c);

int main() {
    printf("*Convert Celsius to Fahrenheit*\n\n");

    float c;
    printf("Enter temperature in Celsius: "); scanf("%f", &c);
    printf("\n");

    printf("Celsius\t\tFahrenheit\n");
    printf("%.4f \t %.4f", c , cnv(c));

    return 0;
}

// Function definition:
float cnv(float c){
    float f = ((c * 9.0) / 5.0) + 32 ;

    return f;
}

