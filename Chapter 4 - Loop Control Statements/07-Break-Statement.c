# include <stdio.h>

int main () {
    printf("The program will print 1-100\nEnter any number to stop printing there\n\n");

    int n;

    printf("Enter any number (1-100): ");
    scanf("%d", &n);

    printf("\n 1-100 until %d ---> ", n);

    for(int i = 1 ; i <= 100 ; i++){

        printf("%d ", i);

        if (i == n){
            break;
        }
    }

    printf("END \n");

    return 0;
}
