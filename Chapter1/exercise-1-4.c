#include <stdio.h>

/* Write a program to print the corresponding Celsius to Fahrenheit table. */

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;

    printf("%3s\t%3s", "C", "F\n");

    while (celsius <= upper) {
        fahr = celsius*(9.0/5.0) + 32;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius = celsius+step;
    }
}