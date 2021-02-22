#include <stdio.h>

int main() {
    int i,j,a[5][5];
    for(i=0;i<5;i++)
    {for(j=0;j<5;j++)
    {if(i==j || i+j==4)
    printf("*");
    else
    printf(" ");
    }printf("\n");
    }
    return 0;
}
