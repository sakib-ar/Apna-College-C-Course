#include<stdio.h>

int main() {
    printf("01. %d \n", 3<4 && 3<5);
    printf("02. %d \n", 3<4 && 5<4);
    printf("03. %d \n", 3<4 && 5<4);
    printf("04. %d \n", 3>4 && 5>4);
    printf("05. %d \n", 3<4 && 3<5);
    printf("06. %d \n", !(3<4 && 3<5));
    printf("07. %d \n", !(4<3 || 5<3));

    return 0;
}
