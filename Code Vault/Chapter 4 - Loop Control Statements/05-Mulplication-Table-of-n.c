#include <stdio.h>

int main() {
    printf("*Print the multiplication table of n*\n\n");
    int n;

    printf("Enter number: "); scanf("%d", &n); // Input from the user

    printf("Multiplication Table of %d:\n\n", n);

    for(int i = 1 ; i <= 10 ; i++){
        printf("%d x %d = %d\n",n,i,n*i);
    }

    return 0;
}
