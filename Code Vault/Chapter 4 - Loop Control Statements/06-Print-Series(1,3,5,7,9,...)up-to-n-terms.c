#include <stdio.h>

int main() {
    printf("*Print Series: 1,3,5,7,9,... up to n terms*\n\n");
    int n ;
    int a = 1 ; // 1st Term

    printf("Enter n: "); scanf("%d", &n); // Input from the user
    printf("\n");

    for(int i = 1 ; i <= n ; i++){
        printf("%d ", a);
        a = a + 2 ; // Each term, it increases by 2
    }

    return 0;
}
