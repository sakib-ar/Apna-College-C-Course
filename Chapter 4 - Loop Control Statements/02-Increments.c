# include <stdio.h>

int main () {
    /* increment operator: ++i , i++
    ++i ---> pre-increment
    i++ ---> post-increment
    */

    int i = 1 ;

    printf("Pre-increment: \nLet, i = 1\n\n");
    printf("++i = %d \n" , ++i); // first increase, then use
    printf("Current value, i = %d \n", i); // Checking the latest value of i

    printf("--------------------");

    int j = 1 ;

    printf("\nPost-increment: \nLet, j = 1\n\n");
    printf("j++ = %d \n" , j++); // use first, then increase
    printf("Current value, j = %d \n", j); // Checking the latest value of j

    return 0;
}
