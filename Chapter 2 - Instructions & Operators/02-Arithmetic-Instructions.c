#include<stdio.h>

int main() {
    int a = 1, b = 2, c = 3;

    //valid
    a = b + c;

    //invalid
    // b + c = a;

    printf("%d \n", 3 % 2);
    printf("%d \n", -3 % 2);


// Type Conversion:
    printf("sum of 2 & 3 : %d \n", 2 + 3);
    printf("sum of 2.0 & 3 : %f \n", 2.0 + 3);
    printf("sum of 2.0 & 3.0 : %f \n", 2.0 + 3.0);


// Associativity:
    printf(" Output : %d", 5+2/2*3);

    return 0;
}
