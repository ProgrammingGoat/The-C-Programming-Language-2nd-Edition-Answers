#include <stdio.h>

/* Verify that the expression getchar() != EOF is 0 or 1. */

int main() {
    int c;

    while(1) {
        printf("%d\n", getchar() != EOF);
    }
}