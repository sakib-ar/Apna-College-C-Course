#include <stdio.h>

int main() {
    printf("*Print Series: 3,12,48,... up to n terms*\n\n");
    int n;
    int a = 3 ; // 1st term

    printf("Enter n: "); scanf("%d", &n); // Input from the user
    printf("\n");

    for(int i = 1 ; i <= n ; i++){
        printf("%d ", a);
        a = a * 4 ; // Each term, it multiplies by 4
    }

    return 0;
}
