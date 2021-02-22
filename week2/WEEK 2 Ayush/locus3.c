//3.Write a C program to count the total number of words in a string.
#include <stdio.h>
#include <string.h>
int main() {
    int m,word=1;
    char alpha[100];
    printf("Enter a string:");
  	gets(alpha);
 for(m=0;alpha[m]!='\0';m++){
	if(alpha[m]== ' ' || alpha[m] == '\t')
		{word++;	
		} 
	}	
	printf("The Total Number of Words in String is :%d",word);
return 0;
}