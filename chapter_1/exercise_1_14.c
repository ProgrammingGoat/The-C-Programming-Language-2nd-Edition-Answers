#include <stdio.h>

/* Write a program to print a histogram of the frequencies of different characters in its input. */

int main() 
{
    int c;
    int characters[26];

    for (int i=0; i<26; i++) 
    {
        characters[i] = 0;
    }

    while((c = getchar()) != EOF) 
    {
        if (c >= 'a' && c <= 'z')
        {
            characters[c-'a']++;
        }

    }

    for (int i = 0; i<26; i++) 
    {
        printf("%c: ", 'a'+i);

        for(int j=0; j<characters[i]; j++) {
            printf("_");
        }
        printf("\n");
    }

}