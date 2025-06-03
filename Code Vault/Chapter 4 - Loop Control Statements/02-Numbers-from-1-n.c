#include <stdio.h>

int main() {
    printf("*Print numbers from 1 to n*\n\n");
    int n;

    printf("Enter number: "); scanf("%d",&n); // Input from user

    for(int i = 1 ; i <= n ; i++){
        printf("%d\n", i);
    }

    return 0;
}
