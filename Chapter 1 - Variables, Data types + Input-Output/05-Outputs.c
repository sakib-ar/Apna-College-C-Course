# include <stdio.h>

int main() {
    // Name some variables first:

    int age = 21; // An integer variable
    float pi = 3.14; // A floating-point variable
    char hashtag = '#'; // A character variable

    // To print an integer, use ---> %d
    printf("Integer value is %d\n", age);

    // To print a decimal or any real number, use ---> %f
    printf("Float value is %f\n", pi);

    // To print a character, use ---> %c
    printf("Character is %c\n", hashtag);
    
    /* Here, %d %f and %c are format specifiers used in the printf function.
       - %d is used for integers,
       - %f is used for floating-point numbers,
       - %c is used for characters.
       
    To locate which variable it is, you must use a comma after the inverted commas("") and then write the variable name.*/
    return 0;
}