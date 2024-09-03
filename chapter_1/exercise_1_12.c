#include <stdio.h>

#define IN 1
#define OUT 0

/* Write a program that prints its input one word per line. */

int main() {
    int c, state;

    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t') {
            if(state == IN) {             
                putchar('\n');
                state = OUT;
            }
        } else {
            putchar(c);
            state = IN;
        }
    }
}