
#include <stdio.h>
int main()
 {
  int arr[200],min,max,n,i;
  printf("\n enter the no of elelmetns: ");
  scanf("%d" ,&n);
  printf("\n enter elements: \n");
  for(i=0;i<n;i++)
  scanf("%d", &arr[i]);

  printf("\nelements of array:");
  for(i=0;i<n;i++)
  printf("%d ",arr[i]);
  min=max=arr[0];
  for(i=0;i<n;i++)
  {
      if(arr[i]>max)
      max=arr[i];
      if(arr[i]<min)
      min=arr[i];
  }
  printf("\n smallest element of array: %d",min);
  printf("\n largest element of array: %d",max);
return 0;
}
