#include <stdio.h>

int main() {
    printf("*Input two number and an operator and print the final result*\n\n");

    double n1 , n2 ;
    char op ;

    printf("Enter number 1: "); scanf("%lf", &n1);
    printf("Enter operator: "); scanf(" %c", &op);

    if ((op == '+') || (op == '-') || (op == '*') || (op == '/')) {

        printf("Enter number 2: "); scanf("%lf", &n2);
        printf("\n%lf %c %lf = ", n1, op, n2);

        if(op == '+'){
            printf("%.2lf", n1 + n2); // Addition
        }
        if(op == '-'){
            printf("%.2lf", n1 - n2); // Subtraction
        }
        if(op == '*'){
            printf("%.2lf", n1 * n2); // Multiplication
        }
        if(op == '/'){
            printf("%.4lf", n1 / n2); // Division
        }
    }

    else {
        printf("Please enter valid operator (+ , - , * , /)");
    }

    return 0;
}
