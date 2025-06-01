/*  Practice Question 23: Calculate the sum of all numbers
    between 5 and 50 (including 5 & 50)
*/

// Solution:
#include <stdio.h>

int main() {
    int sum = 0;
    for(int i = 5 ; i <= 50 ; i++){
        sum += i ;
    }

    printf("The sum of all numbers between 5 and 50 ---> %d \n", sum);

    return 0;
}
