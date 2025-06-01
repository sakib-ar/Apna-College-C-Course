# include <stdio.h>

int main () {
    /* decrement operator: --i , i--
    --i ---> pre-decrement
    i-- ---> post-decrement
    */

    int i = 1 ;

    printf("Pre-decrement: \nLet, i = 1\n\n");
    printf("--i = %d \n" , --i); // first decrease, then use
    printf("Current value, i = %d \n", i); // Checking the latest value of i

    printf("--------------------");

    int j = 1 ;

    printf("\nPost-decrement: \nLet, j = 1\n\n");
    printf("j-- = %d \n" , j--); // use first, then decrease
    printf("Current value, j = %d \n", j); // Checking the latest value of j

    return 0;
}
