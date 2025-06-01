/*  Practice Question 11: (MCQ)

    int x = 2;

    if(x=1){
        printf("x is equal to 1");
    }else{
        printf("x is not equal to 1");
    }
    
    Will this code-
    a. give error
    b. print x is equal to 1
    c. print x is not equal to 2
*/

/*  Correct answer:
    b. print x is equal to 1

    we declared 2 at first, but then in the if condition,
    we wrote x=1, which will replace 2 with 1 in x
    So, x=1 is 1 means TRUE (non-zero), and if(1) will run the condition.
*/
//  Code:
#include <stdio.h>

int main() {
    int x = 2;

    if (x=1){
        printf("x is equal to 1");
    } else {
        printf("x is not equal to 1");
    }

    return 0;
}
