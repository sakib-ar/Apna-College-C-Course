/*  Practice Question 10: Write a program to give grades to a student
    marks < 30 is C
    30 <= marks < 70 is B
    70 <= marks < 90 is A
    90 <= marks <= 100 is A+
*/

// Solution:
#include <stdio.h>

int main() {
    float marks;

    printf("Enter marks: ");
    scanf("%f", &marks);

    if (marks >= 0 && marks < 30){
        printf("Grade: C");
    }
    else if (marks >= 30 && marks < 70){
        printf("Grade: B");
    }
    else if (marks >= 70 && marks < 90){
        printf("Grade: A");
    }
    else if (marks >= 90 && marks <= 100){
        printf("Grade: A+");
    }
    else {
        printf("Please input valid marks (0-100)");
    }

    return 0;
}
