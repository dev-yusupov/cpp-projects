/*
Create a program which gets an integer and reverses it. 
Use only arithmetic operations. E.g. 12345 -> 54321.
*/

#include <stdio.h>

int reverse(int n) {
    int reversed = 0;

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return reversed;
}

int main() {
    int n;

    scanf("%d", &n);

    printf("Reversed: %d\n", reverse(n));

    return 0;
}