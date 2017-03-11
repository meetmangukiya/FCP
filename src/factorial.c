// To calculate of nCr with a factorial function that computes
// factorial using loops.

#include <stdio.h>
#include <conio.h>

void main(){
    int n, r;
    clrscr();
    int factorial(int);
    printf("Enter n, r: ");
    scanf("%d%d", &n, &r);
    printf("\nnCr: %d", (factorial(n)) / (factorial(r) * factorial(n - r)));
    getch();
}

int factorial(int num){
    int fact = 1;
    for(int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}
