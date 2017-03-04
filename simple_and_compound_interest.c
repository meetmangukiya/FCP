#include <stdio.h>
#include <conio.h>
#include <math.h>

void main() {
    clrscr();
    float principal, rate, year, si, ci;
    printf("Enter principal, rate, year");
    scanf("%f%f%f", &principal, &rate, &year);
    
    si = (principal * rate * year)/100;
    
    ci = (pow((1 + (rate/100)), year) * principal);
    
    printf("\nSimple Interest: %f", si);
    printf("\nCompound Interest: %f", ci);
    getch(); // Since using Turbo C++ compiler :(
}
