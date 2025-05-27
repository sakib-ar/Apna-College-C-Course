/* Variable:
Variable is the name of a memory location which stores some data
It’s like a container...

Rules:
a. Variables are case sensitive
b. 1st character is alphabet or ‘_’
c. no comma/blank space
d. No other symbol other than ‘_’

Tips: Variables name should be meaningful which you can relate */

#include<stdio.h>

int main() {
    
    int num = 25; // int is used for integers
    char star = '*'; // char is used for single characters
    int age = 22;
    float pi = 3.14; // float is used for decimal numbers

    int a = 30; // Variable names can be the same but they are case sensitive
    int A = 40; // Different variables due to case sensitivity

    int _age = 22; // Variable names can start with an underscore
    int age1 = 25; // Variable names can have numbers but not start with them

    int final_price = 100; // Variable names can be descriptive (but should not contain underscore)

    return 0;
}