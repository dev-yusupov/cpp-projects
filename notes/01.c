#include <stdio.h>

int main() {
    int x = 10;

    int* ptr1 = &x;
    int* ptr2 = &x;
    int* ptr3 = &x;

    int** ptp1 = &ptr1;
    int*** ptp2 = &ptp1;

    return 0;
}