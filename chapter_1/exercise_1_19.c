#include <stdio.h>
#define MAXLINE 1000

int getline(char s[], int lim);
void reverse(char s[]);

/* Write a function reverse(s) that reverses the character string s. Use it to write a program
that reverses its input a line at a time.  */

int main() {
    int len;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0) 
    {
        reverse(line);
        printf("%s", line);
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

void reverse(char s[])
{
    int end = MAXLINE;

    for (int i = 0; i<MAXLINE; ++i) 
    {
        if (s[i] == '\0') {
            if (s[i-1] == '\n')
            {
                end = i-2;
            }
            else
            {
                end = i-1;
            }
            break;
        }
    }

    for (int i = 0; i<end/2; i++) 
    {
        int temp = s[i];
        s[i] = s[end-i];
        s[end-i] = temp;
    }
    
}