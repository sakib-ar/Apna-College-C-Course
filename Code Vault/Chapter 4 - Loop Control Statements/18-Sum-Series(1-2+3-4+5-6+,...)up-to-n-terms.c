#include <stdio.h>

int main() {
    printf("***Print the Sum of Series: 1-2+3-4+5-6+... up to n terms***\n");
    int n , sum = 0;

    printf("Enter n: "); scanf("%d", &n); // Input from the user
    printf("\n");

    for (int i = 1 ; i <= n ; i++) {
        if (i % 2 != 0) {
            sum += i ; // Add the odd terms
        }
        else {
            sum -= i ; // Add the even terms
        }
    }

    printf("Sum up to term %d is: %d", n, sum);

    return 0;
}
