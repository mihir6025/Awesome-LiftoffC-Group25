#include <stdio.h>
#include <string.h>
 
void main()
{
    char s[200];
    int x = 0, i;
 
    printf("Enter any string:\n");
    scanf("%[^\n]s", s);
    for (i = 0;s[i] != '\0';i++)
    {
        if (s[i] == ' ' && s[i+1] != ' ')
            x++;    
    }
    printf("total number of words in the given string is: %d\n", x + 1);
}