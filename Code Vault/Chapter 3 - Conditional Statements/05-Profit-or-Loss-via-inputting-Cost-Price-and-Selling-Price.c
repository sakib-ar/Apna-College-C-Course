#include <stdio.h>

int main() {
    printf("*Check whether seller made profit or loss via input Cost Price & Selling Price*\n\n");

    int CP , SP ;
    printf("Enter Cost Price: "); scanf("%d", &CP); // Input Cost Price from the user
    printf("Enter Selling Price: "); scanf("%d", &SP); // Input Selling Price from the user
    printf("\n");

    int diff = SP - CP ; // Difference considering SP > CP

    if (SP > CP) {
        printf("Profit ---> $%d", diff);
    }
    else if (SP < CP) {
        printf("Loss ---> $%d", -diff); // Opposite sign for CP > SP
    }
    else {
        printf("Cost Price is same as Selling Price!\nNeither Profit nor Loss");
    }

    return 0;
}
