// Prints number of days of the month of given year and month

#include <stdio.h>
#include <conio.h>

void main() {
    clrscr();
    int year, month;
    printf("Enter year: ");
    scanf("%d", &year);
    printf("\nEnter month: ");
    scanf("%d", &month);
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: printf("There are 31 days in this month");
                 break;
        case 4:
        case 6:
        case 9:
        case 11: printf("There are 30 days in this month");
                 break;
        case 2: if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0)){
                    printf("There are 29 days in this month. This is a leap year.");
                }
                else {
                    printf("There are 28 days in this month.");
                }
                break;
    }
    getch();
}
