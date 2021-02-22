#include<stdio.h>  
 int main()    
{    
int no,x,s=0;    
printf("Enter any nubmer:");    
scanf("%d",&no);    
while(no>0)    
{    
x=no%10;    
s=s+x;    
no=no/10;    
}    
printf("sum of the digitsof the number is=%d",s);    
return 0;  
}   