//1.Write a C program to calculate the sum of digits of a number..
#include <stdio.h>
void main(){
    int m,rem,sum=0;
    printf("Enter a no.:");
    scanf("%d",&m);
while(m>0)
{rem=m%10;
sum=sum+rem;
m=m/10;}
printf("SUM IS= %d\n",sum);
}