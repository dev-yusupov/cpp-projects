#include <stdio.h>

int main() {
    // Declare int variable
    int a = 6;

    // Print the value of the variable
    printf("The value of a is %d\n", a);

    // Assign new value to the variable
    scanf("%d", &a);

    // Print the new value of the variable
    printf("The value of a is %d\n", a);

    if (a > 0) {
        printf("The value of a is positive\n");
    } else if (a < 0) {
        printf("The value of a is negative\n");
    } else {
        printf("The value of a is zero\n");
    }

    // Determine the greatest and the smallest integer numbers (sizeof). Assign the greatest integer to a variable and add one. Check what happens.

    int max_int = 2147483647;
    printf("The value of max_int is %d\n", max_int);

    // Declare two variables of type int
    int b = 1;
    int c = 3;

    // Calculate the average of two variables

    float average = (b + c) / 2.0;

    printf("The average of b and c is %f\n", average);

    return 0;
}