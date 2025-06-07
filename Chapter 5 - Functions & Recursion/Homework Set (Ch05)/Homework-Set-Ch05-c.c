/*  Homework Question c. Write a function to print "Hot" or "Cold"
    depending on the temperature user enters.
*/

//  Solution:
# include <stdio.h>

//function declaration/prototype
void tempchk(float n);

int main() {
    printf("*See if the temperature is hot or cold*\n\n");

    float t;
    printf("Enter temperature (Celsius): "); scanf("%f", &t); // Input from the user
    printf("\n");
    tempchk(t);

    return 0;
}

//function definition
void tempchk(float n){
    if (n > 25){ // Let room temperature be the baseline
        printf("It is hot outside");
    }
    else {
        printf("It is cold outside");
    }
}
