#include <stdio.h>

int main() {
    printf("*Print all odd numbers from 1 to n*\n\n");
    int n;

    printf("Enter number: "); scanf("%d", &n); // Input from the user

    for(int i = 1 ; i <= n ; i = i + 2) {
        printf("%d\n",i);
    }

    return 0;
}
