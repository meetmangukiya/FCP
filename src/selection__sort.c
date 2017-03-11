// Sort a given array using Selection Sort algorithm.

#include <stdio.h>

int main() {
    int n, i;

    printf("Length of array: ");
    scanf("%d", &n);
    int ar[n];

    printf("\nEnter %d numbers: ", n);
    for(i = 0; i < n; i++) scanf("%d", &ar[i]); // Populating the array

    for(i = 0; i < n; i++) {
        int min, j, li = -1, tmp;

        min = ar[i];
        for(j = i; j < n; j++) {
            if (ar[j] < min) {
                min = ar[j];
                li = j;
            }
        }

        // Swapping
        if (li != -1) {
            tmp = ar[i];
            ar[i] = min;
            ar[li] = tmp;
        }
    }

    printf("\nSorted array: ");
    for(i = 0; i < n; i++) printf("%d ", ar[i]);

    return 0;
}
