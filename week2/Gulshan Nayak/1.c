//C program to calculate the sum of digits of a number.
#include<stdio.h>
void main()
{
	int n,c=0;
	printf("Enter the Number: ");
	scanf("%d",&n);
	while(n>0)
	{
		c=c+n%10; 
		n=n/10;
	}
	printf("The sum of the digits is: %d",c);
}
