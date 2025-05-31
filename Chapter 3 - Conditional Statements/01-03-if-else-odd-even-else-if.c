#include<stdio.h>

int main() {
    int age;

    printf("Enter age : ");
    scanf("%d", &age);

    if (age < 12) {
        printf("Child");
    }
    else if (age < 18) {
        printf("Teenager");
    }
    else {
        printf("Adult");
    }

    return 0;
}
