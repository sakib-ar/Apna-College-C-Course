#include<stdio.h>

int main() {
    int a, b;
    // First we ask the user to input something...
    printf("Enter a: ");

    /* Then we read the input from the user
    and store it in the variable 'a'
    Careful to use '&' before variable name*/
    scanf("%d", &a);
    
    printf("Enter b: ");
    scanf("%d", &b);
    
    printf("Sum of a & b is: %d", a+b);
    
    return 0;
}