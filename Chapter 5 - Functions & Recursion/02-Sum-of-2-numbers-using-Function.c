#include<stdio.h>

// Function declaration/prototype
int sum(int a , int b);

int main() {
    int n1 , n2 ;

    printf("Enter 1st number: "); scanf("%d", &n1);
    printf("Enter 2nd number: "); scanf("%d", &n2);

    int s = sum(n1 , n2);

    printf("Sum ---> %d", s);

    return 0;
}

// Function definition
int sum(int a , int b) {

    return a + b;
}
