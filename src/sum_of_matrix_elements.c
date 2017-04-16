// To calculate the sum of non-diagonal elements of a square matrix

#include <stdio.h>
#include <conio.h>

int main() {
    clrscr();

    int n, i, j, sum = 0;
    printf("Enter row/column for matrix: ");
    scanf("%d", &n);
    printf("\nEnter elements of matrix");
    int ar[n][n];
    for(i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &ar[i][j]);
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if (i != j)
                sum += ar[i][j];
        }
    }

    printf("\nSum of non-diagonal elements: %d", sum);
    getch();
    return 0;
}
