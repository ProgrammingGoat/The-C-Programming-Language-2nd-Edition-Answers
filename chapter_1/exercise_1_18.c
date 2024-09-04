#include <stdio.h>
#define MAXLINE 1000

/*Write a program to remove trailing blanks and tabs from each line of input, and to delete entirely blank lines. */

int getline(char s[], int lim);

int main() {
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) 
    {
        int i;

        for (i=len-1; i>=0; --i)
        {
            if (line[i] == ' ' || line[i] == '\t')
            {
                line[i] = '\0';
            } 
            else 
            {
                break;
            }
        }
        if (i != 0) {
            printf("%s", line);
        }
    }
    return 0;
}

int getline(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';


    return i;
}