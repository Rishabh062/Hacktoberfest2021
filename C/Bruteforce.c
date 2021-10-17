// Program to implement of Bruteforce string matching Algorithm
#include <stdio.h>
#include <string.h>
int indexOf(char *pattern, char *text)
{
    int n = strlen(text), m = strlen(pattern);
    for (int i=0; i <= n - m; i++)
    {
        int j;
    for(j = 0; j < m && text[i + j] == pattern[j]; j++);
    if(j == m)
        return i;
    }
    return -1;
}
 int main()
 {
     char text[100], pattern[100];
     printf("Enter a Text: ");
     gets(text);
     printf("Enter a Pattern: ");
     gets(pattern);
     int index = indexOf(pattern, text);
     if(index == -1)
        printf("Pattern '%s' Not found in text '%s' ", pattern, text);
     else
        printf("Pattern '%s' found in text '%s' at position %d", pattern, text, index);
     return 0;
 }
