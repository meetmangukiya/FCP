// Sorting a given array of numbers using bubble sort algorithm

#include <stdio.h>
#include <conio.h>

int main(void) {
    clrscr();
    int n, i, tmp, j;
    printf("Enter the length of array: ");
	scanf("%d", &n);
    int ar[n];
    printf("\nEnter %d numbers: ", n);

	for(i = 0; i < n; i++) scanf("%d", &ar[i]);

    for(i = 0; i < n; i++){
        for(j = 0; j < n - i - 1; j++){
            if (ar[j + 1] > ar[j] ){ // Ascending sort
                tmp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = tmp;
            }
        }
    }

    printf("\nSorted: ");
    for(i = 0; i < n; i++) printf("%d ", ar[i]);
    getch();
	return 0;
}
