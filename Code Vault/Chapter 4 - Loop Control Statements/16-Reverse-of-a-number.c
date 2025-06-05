#include <stdio.h>

int main() {
    printf("***Print Reverse of a given number***\n");
    int n , r = 0;

    printf("Enter number: "); scanf("%d",&n); // Input from the user

    for (n ; n != 0 ; n = n / 10){
        r = (n % 10) + r * 10;
    }

    printf("Reverse of the number is: %d", r);

    return 0;
}
