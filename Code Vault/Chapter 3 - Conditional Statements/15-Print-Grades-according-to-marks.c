#include <stdio.h>

int main() {
    printf("*Print Grades according to marks*\n\n");
    printf("Grades of a non-credit course:\n90-100 ---> A\n85-<90 ---> A-\n80-<85 ---> B+\n75-<80 ---> B\n70-<75 ---> B-\nLess 70---> F\n\n");

    int marks ;
    printf("Enter Mark: "); scanf("%d", &marks);
    printf("\n");

    if (marks < 0 || marks > 100) {
        printf("Put valid mark. Try again!");
    }
    else if(marks >= 90) {
        printf("Grade: A");
    }
    else if (marks >= 85) {
        printf("Grade: A-");
    }
    else if (marks >= 80) {
        printf("Grade: B+");
    }
    else if (marks >= 75) {
        printf("Grade: B");
    }
    else if (marks >= 70) {
        printf("Grade: B-");
    }
    else {
        printf("Grade: F");
    }

    return 0;
}
