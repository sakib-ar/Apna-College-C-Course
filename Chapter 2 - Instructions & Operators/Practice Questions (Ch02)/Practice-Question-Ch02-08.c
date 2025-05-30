/*  Practice Question 08: Print 1(true) or 0(false) for the following statements:

    a. if it's Sunday & it's snowing -> true
    b. if it's Monday or it's raining -> true
    c. if a number is grater than 9 & less than 100 (2 digit number) -> true
*/

//Solution:
#include<stdio.h>

int main(){
    // a:
    int isSunday = 1;
    int isSnowing = 1;

    printf("a. %d \n", isSunday && isSnowing);

    // b:
    int isMonday = 1;
    int isRaining = 1;

    printf("b. %d \n", isMonday || isRaining);

    // c:
    int x;
    printf("Enter number: ");
    scanf("%d", &x);

    printf("c. %d \n", x>9 && x<100);

    return 0;
}
