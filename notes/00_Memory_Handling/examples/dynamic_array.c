#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the length of array: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    printf("Enter %d integers: \n", n);
    for (int i = 0; i < n; i++) {
        printf("Enter integer %d \n", i+1);
        scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum = sum + arr[i];
    }

    printf("%d", sum);

    free(arr);


    return 0;
}