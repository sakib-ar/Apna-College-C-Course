#include <stdio.h>

int main() {
    printf("*Find out whether it is possible to form a triangle with knowing 3 sides*\n\n");

    int a , b , c ;
    printf("Enter 1st Side: "); scanf("%d", &a); // Input 1st Side from the user
    printf("Enter 2nd Side: "); scanf("%d", &b); // Input 2nd Side from the user
    printf("Enter 3rd Side: "); scanf("%d", &c); // Input 3rd Side from the user
    printf("\n");

    if ((a + b) > c && (b + c) > a && (c + a) > b) {
        printf("They will form a triangle");
    }
    else {
        printf("They won't never form a triangle");
    }

    return 0;
}
