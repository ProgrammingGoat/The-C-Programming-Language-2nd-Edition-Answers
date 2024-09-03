#include <stdio.h>

/* Write a program to count blanks, tabs and newlines. */

int main() {
    int c, nl;

    while ((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            ++nl;
        }
    }

    printf("No. of blanks, tabs and newlines: %d", nl);
}