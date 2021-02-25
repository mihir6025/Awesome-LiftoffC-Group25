//C program to count the total number of words in a string
#include<stdio.h>
void main()
{
	char a[100],c=0,i;
	printf("Enter the sentence: ");
	//scanf("%s",&a); --> will not work.
	gets(a);
	while(a[i]!='\0')
	{
		if((a[i]==' ')||(a[i]=='\n'))
		c++;
		i++;
	}
	printf("Total no of words are: %d",c+1);
}

