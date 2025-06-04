#include <stdio.h>

int main() {
    printf("*Find out if area of rectangle is greater than its perimeter*\n\n");

    float l , w ;
    printf("Enter Length: "); scanf("%f", &l); // Taking length from the user
    printf("Enter Width: "); scanf("%f", &w); // Taking width from the user
    printf("\n");

    float a = l * w ; // Formula of Area
    float p = 2 * (l + w) ; // Formula of Perimeter

    if (l < 0 || w < 0 || l == 0 || w == 0) {
        printf("Enter positive value. Try again"); // Ensuring correct values of length & width
    }
    else if (a > p) {
        printf("Area is greater than its perimeter");
    }
    else if (a == p){
        printf("Both area & perimeter are the same");
    }
    else {
        printf("Perimeter is greater than its area");
    }

    return 0;
}
