#include<stdio.h>
int main()
{
  int i,a,number=0;
  printf("Enter the array value : ");
  scanf("%d",&a);
  int arr[a];
   printf("Enter numbers \n");
  for(int i=0;i<a;i++)
 
   {
    scanf("%d",&arr[i]);
    }
  for(int i=0;i<a;i++)
    {
        if(number<arr[i])
         number=arr[i];
    }
    printf("The largest nymber is %d\n",number);

 number=arr[0];
  for(int i=0;i<a;i++)
    {
        if(number>arr[i])
         number=arr[i];
    }
    printf("The smallest number is %d",number);

}