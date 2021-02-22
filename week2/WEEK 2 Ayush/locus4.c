//4.Write a C program to find the largest and smallest element in an array.
#include <stdio.h>
int main() {
    int rcb[10],m,lg,sl;
    printf("Enter the elements:\n");
    for(m=0;m<10;m++)
    {
  	scanf("%d",&rcb[m]);}
 lg=rcb[0];
 for(m=1;m<10;m++){
	if(rcb[m]>lg)
    {lg=rcb[m];}
}printf("Largestelement:%d\n",lg);
sl=rcb[9];
for(m=0;m<9;m++){
	if(rcb[m]<sl)
    {sl=rcb[m];}
}printf("\nSmallest element:%d",sl);
}