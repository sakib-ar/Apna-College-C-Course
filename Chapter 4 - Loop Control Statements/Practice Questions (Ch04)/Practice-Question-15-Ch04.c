/*  Practice Question 15: Print the Sum of First n Natural Numbers.
    Also, print them in reverse
*/

// Solution:
#include <stdio.h>

int main() {
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    int sum = 0;
    int i = 1 ;

    do{
        sum += i ;
        i++ ;
    } while(i <= n);

    printf("\nThe Sum of First %d Natural Numbers ---> %d \n", n,sum);
    printf("\nThe Reverse Order: ");

    for(i = n ; i >= 1 ; i--){
        printf("%d ", i);
    }

    return 0;
}
