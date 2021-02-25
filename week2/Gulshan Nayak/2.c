/*C program to print the sum of all the even elements 
and even position elements in an array.*/
#include<stdio.h>
void main()
{
	int a[8],sum=0,i;
	printf("Enter the elements of the Array(7 elements): ");
	printf("\nNote that A[1] is the 1st element\n");
	for(i=1;i<8;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<8;i++)
	{
		if((a[i]%2==0)||(i%2==0))
		{
			sum=sum+a[i];
		}
	}
	printf("Sum of all the even elements and even position"
	" elements of the array is: %d",sum);
}
