#include <stdio.h>

int main() {
    printf("*Check whether a point is on x-axis, y-axis or origin*\n\n");
    int x , y ;
    printf("Enter x: "); scanf("%d", &x); // x-coordinate
    printf("Enter y: "); scanf("%d", &y); // y-coordinate

    if (x == 0 && y == 0) {
        printf("The point (%d,%d) is on the origin", x, y); // Origin
    }
    else if (x == 0) {
        printf("The point (%d,%d) is on y-axis", x, y); // y-axis
        }
    else if (y == 0) {
        printf("The point (%d,%d) is on x-axis", x, y); // x-axis
        }
    else {
        printf("The point (%d,%d) is neither on any axis nor origin.", x, y); // Not on any axis or origin
    }
    return 0;
}
