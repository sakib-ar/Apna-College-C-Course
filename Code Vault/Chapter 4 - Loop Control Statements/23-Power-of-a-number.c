#include <stdio.h>

int main() {
    printf("*Print output of a number and its power by using loop*\n");
    int a , b ;
    double power = 1 ;

    printf("Enter number: "); scanf("%d", &a); // Base Input from the user
    printf("Enter power: "); scanf("%d", &b); // Power Input from the user

    if (b <= 0) {
        printf("Enter non-negative integers next time"); // Filtering out negative integers
    }
    else {
        for(int i = 1 ; i <= b ; i++){
            power = power * a;
        }
        printf("%d to the power %d: (%d^%d) = %.lf", a , b , a , b , power);
    }

    return 0;
}
