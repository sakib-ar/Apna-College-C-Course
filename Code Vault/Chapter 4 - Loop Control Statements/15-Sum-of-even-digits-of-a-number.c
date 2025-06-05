#include <stdio.h>

int main() {
    printf("*Print sum of all even digits of a number*\n\n");
    int n , sum = 0 ;

    printf("Enter number: "); scanf("%d", &n); // Input from the user
    printf("\n");

    if (n < 0) {
        n = -n ; // Focusing on digit here, not sign
    }

    for(n ; n > 0 ; n = n / 10){
        if ((n % 10) % 2 == 0) {
            sum += (n % 10) ;
        }
    }

    printf("The sum of the even digits is: %d", sum);

    return 0;
}
