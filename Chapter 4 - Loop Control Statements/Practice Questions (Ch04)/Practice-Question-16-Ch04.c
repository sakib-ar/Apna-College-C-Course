//  Practice Question 16: Print the table of a number input by the user.

// Solution: (Table means Multiplication Table here)
#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1 ; i <= 10 ; i++){
        printf("%d x %d = %d\n", n, i, n*i);
    }

    return 0;
}
