//C program to find the largest and smallest element in an array
#include<stdio.h>
void main()
{
	int a[6],i,j,t;
	printf("Enter 6 elements in the Array: ");
	for(i=0;i<6;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<6;i++)
	{
		for(j=i+1;j<6;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];			//swapping
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("Smallest element: %d\nLargest element: %d",a[0],a[5]);
}
