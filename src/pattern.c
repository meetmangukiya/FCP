// Print the pattern given below

/**
 to print a pattern like:
 54321
  4321
   321
    21
     1
 if the input is 5
 */

#include <stdio.h>
#include <conio.h>

void main() {
    clrscr();
    int rows, i , j;

    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("\n");
    for(i = 1; i <= rows; i++) {
        for(j = 0; j < i - 1; j++) printf(" ");
        for(j = rows - i + 1; j >= 1 ; j--) printf("%d", j);
        printf("\n");
    }
    getch();
}
