#include <stdio.h>

int main() {
    int n, i, j, num;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {          // each row
        num = 1;                      // first number in every row is 1

        for(j = 0; j < n - i; j++)    // spaces for triangle shape
            printf(" ");

        for(j = 0; j <= i; j++) {     // print values in the row
            printf("%d ", num);
            num = num * (i - j) / (j + 1); // formula for next number
        }

        printf("\n");
    }

    return 0;
}

