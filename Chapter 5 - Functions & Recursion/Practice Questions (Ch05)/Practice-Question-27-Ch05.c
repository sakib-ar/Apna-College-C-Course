/*  Practice Question 27: Write 2 functions - one to print "Hello" &
    second to print "good bye".
*/

//  Solution:
#include <stdio.h>

// Declaration/prototype
void hello();
void goodbye();

int main() {
    hello(); // function call
    goodbye(); // function call

    return 0;
}

// Function definition:
void hello() {
    printf("Hello!\n");
}

void goodbye() {
    printf("Good bye!\n");
}
