#include <stdio.h>
#include <string.h>
void main()
{
    char str[100];
    printf("Type a sentence: \n");
    gets(str);
    int i=0, word=1;
    while(str[i]!='\0')
     {
      if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
         word++;
        }
          i++;
        }
      printf("Total number of words in the string is : %d\n", word);
      
}