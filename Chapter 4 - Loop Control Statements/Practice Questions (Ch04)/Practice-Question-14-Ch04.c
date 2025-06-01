/*  Practice Question 14: Print the Numbers from 0 to n,
    if n is given by the user
*/

// Solution:
#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int i = 0;
    while(i <= n){
        printf("%d ", i);
        i++;
    }

    return 0;
}
