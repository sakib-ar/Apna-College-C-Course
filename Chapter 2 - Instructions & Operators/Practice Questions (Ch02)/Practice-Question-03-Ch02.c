// Practice Question 03: Solve: int a = 1.999999;

// Solution:
#include <stdio.h>

int main() {
    /* This won't work:
    int a = 1.999999;
    printf("%d",a);
    */

    // This will work:
    int a = (int) 1.999999; // (int) will convert fractions to integer

    printf("%d",a); // But it won't round up, just the whole number

    return 0;
}
