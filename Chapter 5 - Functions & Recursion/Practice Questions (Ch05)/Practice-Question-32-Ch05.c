/*  Practice Question 32: Print "Hello World" 5 times using recursion
*/

//  Solution:
#include <stdio.h>

// Declaration/prototype:
void hlw(int count);

int main() {

    hlw(5);

    return 0;
}

// Function definition:
void hlw(int count){
    if (count == 0){
        return 0;
    }

    printf("Hello World\n");
    hlw(count - 1);
}

