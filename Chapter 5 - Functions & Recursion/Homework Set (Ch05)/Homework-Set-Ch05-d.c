//  Homework Question d.  Make your own pow function.

//  Solution:
# include <stdio.h>

//function declaration/prototype
double mypow(float b , int p);

int main() {
    printf("*Find power of a number*\n\n");

    float b;
    int p;
    printf("Enter base number: "); scanf("%f", &b); // Input base from the user
    printf("Enter power number: "); scanf("%d", &p); // Input power from the user

    printf("\n%.2f^%d = %.2lf", b , p , mypow(b,p));

    return 0;
}

//function definition
double mypow(float b , int p){
    double result = 1;

    if (p == 0){
        return result ;
    }

    else {
        for (int i = 1 ; i <= p ; i++){
            result *= b ;
        }

        if (p > 0){
            return result;
        }
        else {
            return (1.0 / result) ;
        }
    }
}
