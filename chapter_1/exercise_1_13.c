#include <stdio.h>

#define IN 0
#define OUT 1

/* Write a program to print a histogram of the lengths of words in its input. It is easy to draw the
histogram with the bars horizontal; a vertical orientation is more challenging */

int main() 
{
    /* Allow only words 1-10 chars in length */

    int c, wordlength, status;
    int worddist[10];

    for (int i = 0; i < 10; i++)
    {
        worddist[i] = 0;
    }

    status = OUT;
    wordlength = 0;

    while((c = getchar()) != EOF) {
        if (c == '\t' || c == ' ' || c == '\n') 
        {
            if (status == IN) 
            {
                if (wordlength <= 10) 
                {
                    worddist[wordlength-1]++;
                } else if (wordlength > 10) {
                    worddist[9]++;
                }

                wordlength = 0;
                status = OUT;
            }
        } 
        else
        {
            status = IN;
            wordlength++;
        }
    }

    for (int i = 0; i<10; i++)
    {
        if (i == 9) 
        {
            printf("10+:\t");
        } 
        else 
        {
            printf("%d:\t", i+1);
        }
        for (int j = 0; j < worddist[i]; j++)
        {
            printf("_");
        }
        printf("\n");
    }
}