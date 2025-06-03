#include <stdio.h>

int main() {
    printf("*Check whether a year is a leap year or not*\n\n");

    int year ;
    printf("Enter Year: "); scanf("%d", &year); // Input from user
    printf("\n");

    if (year < 0 || year == 0) {
        printf("Please input positive year. Try again"); // No negative numbers
    }
    // Leap Year conditions:
    else if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year", year);
    }
    else{
        printf("%d is not a leap year", year);
    }

    return 0;
}
