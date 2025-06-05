#include <stdio.h>

int main() {
    printf("*Print Series: 1,2,4,8,16,32,... up to n terms*\n\n");
    int n ;
    int a = 1 ; // 1st term

    printf("Enter n: "); scanf("%d", &n); // Input from the user
    printf("\n");

    for(int i = 1 ; i <= n ; i++){
        printf("%d ", a);
        a = a * 2 ; // Each term, it multiplies by 2
    }

    return 0;
}
