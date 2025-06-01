# include <stdio.h>

int main () {
    printf("The program will print 1-50\nEnter any number to stop printing that number specifically\n\n");

    int n;

    printf("Enter any number (1-50): ");
    scanf("%d", &n);

    printf("\n 1-100 until %d ---> ", n);

    for(int i = 1 ; i <= 50 ; i++){

        if (i == n){
            continue; // Skip
        }
        printf("%d ", i);
    }

    printf("END \n");

    return 0;
}
