/*  Homework Question a. Write a program to check
    if a given number is Armstrong number or not.
    (Search what is Armstrong number)
*/

// Solution:

/*  A positive integer is called an Armstrong number (of order n) if
    abc = a^n + b^n + c^n + ...
    e.g., 153 = 1^3 + 5^3 + 3^3
*/

// Code:
# include <stdio.h>
# include <math.h>

int main() {
    int num , a , b , c , d , e ;

    printf("Enter number (up to 4 digit): ");
    scanf("%d", &num);

    // 1-digit Number:
    if (num >= 0 && num < 10){
        printf("%d is an Armstrong number", num);
    }

    // 2-digit Number:
    else if (num >= 10 && num < 100){
        a = num / 10 ; // To get the first digit
        b = a % 10 ; // To get the second digit

        if (pow(a,2)+pow(b,2) == num){
            printf("%d is an Armstrong number", num);
        }
        else {
            printf("%d is not an Armstrong number", num);
        }
    }

    // 3-digit Number:
    else if (num >= 100 && num < 1000){
        a = num / 100 ; // To get the first digit
        b = (num / 10) % 10 ; // To get the second digit
        c = num % 10 ; // To get the third digit

        if (pow(a,3) + pow(b,3) + pow(c,3) == num){
            printf("%d is an Armstrong number", num);
        }
        else {
            printf("%d is not an Armstrong number", num);
        }
    }

    // 4-digit Number:
    else if (num >= 1000 & num < 10000){
        a = num / 1000 ; // To get the first digit
        b = (num / 100) % 10 ; // To get the second digit
        c = (num / 10) % 10 ; // To get the third digit
        d = num % 10 ; // To get the fourth digit

        if (pow(a,4) + pow(b,4) + pow(c,4) + pow(d,4) == num){
            printf("%d is an Armstrong number", num);
        }
        else {
            printf("%d is not an Armstrong number", num);
        }
    }

    // 5-digit Number:
    else if (num >= 10000 && num < 100000){
        a = num / 10000 ; // To get the first digit
        b = (num / 1000) % 10 ; // To get the second digit
        c = (num / 100) % 10 ; // To get the third digit
        d = (num / 10) % 10 ; // To get the fourth digit
        e = num % 10 ; // To get the fifth digit

        if (pow(a,5) + pow(b,5) + pow(c,5) + pow(d,5) + pow(e,5) == num){
            printf("%d is an Armstrong number", num);
        }
        else {
            printf("%d is not an Armstrong number", num);
        }
    }

    // Note: This problem can be solved by loops with more flexibility

    return 0;
}
