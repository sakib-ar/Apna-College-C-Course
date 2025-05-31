#include<stdio.h>

int main() {
    int age;

    printf("Enter age: ");
    scanf("%d", &age);

    age > 18 ? printf("Adult \n") : printf("Not adult \n");

    int number = 7;
    int luckyNumber = 7;

    number == luckyNumber ? printf("You got lucky number \n") : printf("Better luck next time \n");

    return 0;
}
