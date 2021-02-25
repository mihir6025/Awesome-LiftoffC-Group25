#include<stdio.h>
 int main()
{
    int i,j;   
    printf("\nThe pattern is :\n");
    for (i = 1; i <= 5; i++)
        {
           for (j = 1; j <= 5; j++)
               {
                 if (j == i || j == (5 + 1 - i))
                     printf("*");
                 else
                     printf(" ");
               }
           printf("\n");
        }
    return 0;
}