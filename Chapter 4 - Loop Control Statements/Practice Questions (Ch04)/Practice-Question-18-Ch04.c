/*  Practice Question 18: Keep taking numbers as input from
    the user enters an number which is multiple of 7
*/

// Solution:
#include <stdio.h>

int main() {
    int n;

    do{
        printf("Enter number: ");
        scanf("%d", &n);

        if (n % 7 == 0){
            break;
        }
    } while(1);

    printf("You just entered a number which is multiple of 7.\nProgram Ended! \n");

    return 0;
}
