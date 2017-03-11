// To check whether a given number is a palindrome or not

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    clrscr();
    int number, i, tmp, digits, rev;
    printf("Enter the number to be checked as palindrome: ");
    scanf("%d", &number);
    
    tmp = number;
    digits = 0;
    
    while (tmp > 0) {
        digits++;
        tmp = tmp / 10;
    }
    
    rev = 0;
    tmp = number;
    for(i = 1; i <= digits; i++){
        rev += (tmp % 10) * pow(10, (digits - i));
        tmp = tmp / 10;
    }
    if (rev == number) {
        printf("\nIt is a palindrome");
    }
    else {
        printf("\nIt is not a palindrome");
    }
    getch();
}
