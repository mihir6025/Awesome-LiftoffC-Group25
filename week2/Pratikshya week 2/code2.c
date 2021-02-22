#include<stdio.h>
int main()
{
  int a,i,sum=0;

  printf("Enter array value: ");
  scanf("%d", &a);
  int arr[a];

  printf("Enter number : \n");
  for(int i=0;i<a;i++)
   scanf("%d",&arr[i]);
   
    for(int i=0;i<a;i++)
   
     if(i%2==0 || arr[i]%2==0)
     {
         sum+=arr[i];
     }
      printf(" sum of even and even position number is = %d",sum);
  return 0;
}