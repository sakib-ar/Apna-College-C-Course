#include <stdio.h>

int main() {
    printf("*Print Series: 4,7,10,13,... up to n terms*\n\n");
    int n ;
    int a = 4 ; // 1st Term

    printf("Enter n: "); scanf("%d", &n); // Input from the user
    printf("\n");

    for(int i = 1 ; i <= n ; i++){
        printf("%d ", a);
        a = a + 3 ; // Each term, it increases by 3
    }

    return 0;
}
