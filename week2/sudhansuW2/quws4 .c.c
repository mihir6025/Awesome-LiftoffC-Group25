#include <stdio.h>
int main()
 {
  int arr[200],small,big,n,i;
  printf("\n enter the no of elelmetns: ");
  scanf("%d" ,&n);
  printf("\n enter elements: \n");
  for(i=0;i<n;i++)
  scanf("%d", &arr[i]);

  printf("\nelements of array:");
  for(i=0;i<n;i++)
  printf("%d ",arr[i]);
  small=big=arr[0];
  for(i=0;i<n;i++)
  {
      if(arr[i]>big)
      big=arr[i];
      if(arr[i]<small)
      small=arr[i];
  }
  printf("\n smallest element of array: %d",small);
  printf("\n largest element of array: %d",big);
return 0;
}