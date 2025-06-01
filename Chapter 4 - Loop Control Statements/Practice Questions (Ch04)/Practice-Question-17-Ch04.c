/*  Practice Question 17: Keep taking numbers as input from the user
    until the user enters an odd number
*/

// Solution:
#include <stdio.h>

int main() {
    int n;

    do{
        printf("Enter number: ");
        scanf("%d", &n);

        if (n % 2 != 0){
            break;
        }
    } while(1);

    printf("You just entered odd number.\nProgram Ended! \n");

    return 0;
}
