#include <stdio.h>

/* Write a program to copy its input to its output, replacing each string of one or more blanks by a single blank. */

int main() {
    int c, prevchar;
    prevchar = 'a';

    while ((c = getchar()) != EOF) {
        if (!(c == ' ' && prevchar == ' ')) {
            putchar(c);
        }
        prevchar = c;
    }
}