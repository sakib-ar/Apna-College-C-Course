#include <stdio.h>

int main() {
    printf("*Print Series: 100,97,94,91,... up to n terms*\n\n");
    int n;
    int a = 100 ; // 1st term

    printf("Enter n: "); scanf("%d", &n); // Input from the user
    printf("\n");

    for(int i = 1 ; i <= n ; i++){
        if (a > 0) { // No negative numbers
            printf("%d ", a);
            a = a - 3 ; // Each term, it decreases by 3
        }
    }

    return 0;
}
