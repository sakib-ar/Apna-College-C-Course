#include<stdio.h>

// Function declaration/prototype
void vatman(float price);

int main() {
    float price = 100.0 ;

    vatman(price);
    printf("Final Price is: %f", price); // Run the code, you will see that parameter does not affect main function

    return 0;
}

// Function definition
void vatman(float price) {
    price = price + (0.18 * price);
    printf("Final Price ---> %f\n", price);
}
