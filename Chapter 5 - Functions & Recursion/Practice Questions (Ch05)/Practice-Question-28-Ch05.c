/*  Practice Question 28: Write a function that prints Namaste if user is Indian,
    Bonjour if the user is French, Selam if the user is Turkish &
    Ni hao if the user is Chinese.
*/

//  Solution:
#include <stdio.h>

// Declaration/prototype
void indian();
void french();
void turkish();
void chinese();

int main() {
    char cty;

    printf("Which nationality are you? Enter the first letter\n");
    printf(" 1. Indian\n 2. French\n 3. Turkish\n 4. Chinese\n");
    printf("I / F / T / C : "); scanf("%c", &cty);
    printf("\n");

    if (cty == 'I' || cty == 'i') {
        indian();
    }
    else if (cty == 'F' || cty == 'f') {
        french();
    }
    else if (cty == 'T' || cty == 't') {
        turkish();
    }
    else if (cty == 'C' || cty == 'c') {
        chinese();
    }
    else {
        printf("Please enter valid character (I / F / T / C)");
    }

    return 0;
}

// Function definition:
void indian() {
    printf("Namaste!\n");
}

void french() {
    printf("Bonjour!\n");
}

void turkish() {
    printf("Selam!\n");
}

void chinese() {
    printf("Ni hao!\n");
}
