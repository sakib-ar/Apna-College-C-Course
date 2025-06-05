#include<stdio.h>

// Function declaration/prototype
void mtable(int a);

int main() {
    int n;
    printf("Enter a number: "); scanf("%d", &n);

    mtable(n); // argument/actual parameter

    return 0;
}

// Function definition
void mtable(int a){
    printf("*Multiplication table of %d*\n", a);

    for (int i = 1 ; i <= 10 ; i++){ // parameter/formal parameter
        printf("%d x %d = %d \n", a , i , a * i);
    }
}
