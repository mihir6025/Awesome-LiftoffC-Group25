#include<stdio.h>
void main()
{
	int i,j,n,count;
	printf("Enter N: ");
	scanf("%d",&n);
	count=n*2;
	for(i=0;i<=count;i++)
	{
		for(j=0;j<=count;j++)
		{
			if(j==i||(j==count-i))
			{
				printf("*");
			}
			else
			{
				printf("  ");
			}
		}
	printf("\n");	
	}
}
