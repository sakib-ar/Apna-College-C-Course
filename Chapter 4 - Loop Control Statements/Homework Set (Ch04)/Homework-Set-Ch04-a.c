/*  Homework Question a. Search on what a "nested loop" is &
    print this pattern using it.
    *****
    *****
    *****
    *****
*/

//  Solution:
# include <stdio.h>

int main() {
    int i , j ;

    // Outer loop for rows
    for(i = 1 ; i <= 5 ; i++) {

        // Inner loop for columns
        for(j = 1 ; j <= 5 ; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
