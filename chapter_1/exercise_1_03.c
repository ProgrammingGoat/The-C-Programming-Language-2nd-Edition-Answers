#include <stdio.h>

/* Modify the temperature conversion program to print a heading above the table.*/

int main() {
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;

    printf("%3s\t%3s", "F", "C\n");

    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr+step;
    }
}