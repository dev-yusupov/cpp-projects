/*
Create a Fahrenheit-Celsius converter (C = (F - 32) / 1.8). 
Write [-20; 200] interval Fahrenheit values with a scale of 10, 
and the corresponding degree Celsius.
*/

#include <stdio.h>

float fahrenheit_to_celsius(int fahrenheit) {
    return (fahrenheit - 32) * 1.8;
}

int main() {
    int fahrenheit;

    scanf("%d", &fahrenheit);

    if (fahrenheit > 200 || fahrenheit < -20) {
        printf("Invalid temperature\n");
        return 1;
    }

    printf("Celsius: %.2f\n", fahrenheit_to_celsius(fahrenheit));

    return 0;
}