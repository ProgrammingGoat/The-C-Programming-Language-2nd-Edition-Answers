#include <stdio.h>

/* Experiment to find out what happens when printf's argument string contains \c, where c is some character not listed above. */

int main() {
    printf("hello,\c world\n"); /* does not compile! */
}