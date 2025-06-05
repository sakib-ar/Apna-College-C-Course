#include <stdio.h>

int main() {
    printf("*Print Series: 100,50,25,...up to n terms*\n\n");
    int n;
    float a = 100 ; // 1st term

    printf("Enter n: "); scanf("%d", &n); // Input from the user
    printf("\n");

    for(int i = 1 ; i <= n ; i++){
        printf("%f ", a);
        a = a / 2 ; // Each term, it divides by 2
    }

    return 0;
}
