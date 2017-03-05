// To calculate of nCr with a factorial function that computes
// factorial using recursively calling itself.

#include <stdio.h>
#include <conio.h>

void main(){
    int n, r;
    clrscr();
    int factorial_recursive(int);
    printf("Enter n, r: ");
    scanf("%d%d", &n, &r);
    printf("\nnCr: %d", (factorial_recursive(n)) / (factorial_recursive(r) * factorial_recursive(n - r)));
    getch();
}

int factorial_recursive(int num){
    if (num == 1) return 1;
    int fact = 1;
    fact = num * factorial_recursive(num - 1);
    return fact;
}
