//2.Write a C program to print the sum ofall the even elements and even position elements in an array.
#include <stdio.h>
void main(){
    int m,csk[10],sum=0,add=0;
    for(m=0;m<=10;m++)
    {printf("Enter 10 no.s:");
    scanf("%d",&csk[m]);}
for(m=0;m<=10;m=m+2)
{sum=sum+csk[m];
}
printf("SUM of even position elements= %d\n",sum);
for(m=0;m<=10;m++)
{if(csk[m] % 2==0)
   { add=add+csk[m];}
}printf("SUM of even elements= %d\n",add);
}