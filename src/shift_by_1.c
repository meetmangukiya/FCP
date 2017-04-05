// Program to shift the contents of an array by 1

#include <stdio.h>

int main(void) {

    int n, ar[n], i, tmp, tmpy;
    printf("Enter the length of array: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) scanf("%d", &ar[i]);

    tmp = ar[0];
    tmpy = ar[1];
    for(i = 0; i < n - 1; i++) {
        tmpy = ar[i+1];
        ar[i] = ar[i+1];
    }

    ar[n-1] = tmp;
    printf("\n");
    for(i = 0; i < n; i++) printf("%d ", ar[i]);


	return 0;
}
