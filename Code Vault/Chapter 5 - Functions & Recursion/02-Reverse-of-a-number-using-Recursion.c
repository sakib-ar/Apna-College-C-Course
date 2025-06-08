#include <stdio.h>

int revN = 0; // Global variable to store the reversed number

// Declaration/prototype:
int revn(int n);

int main() {
    printf("*Find reverse of a number*\n\n");

    int n;
    printf("Enter a number: "); scanf("%d", &n);

    printf("\nReverse of %d ---> %d", n , revn(n));

    return 0;
}

// Function definition:
int revn(int n) {
    if (n == 0) {
        return ;
    }

    else {
        int digit = n % 10 ;
        revN = digit + revN * 10 ;
        revn(n / 10);
    }

    return revN ;
}
