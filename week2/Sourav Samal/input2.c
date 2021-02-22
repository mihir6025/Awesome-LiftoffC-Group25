#include <stdio.h>
int main()
 {
    int a[200],i,j,k,n,x=0,y=0;
    printf("enter size of array \n");
    scanf("%d",&n);
    printf("array of %d elements\n",n);
    for(i=0;i<n;i++)
  {  scanf("%d",&a[i]);
}
for(j=0;j<n;j+=2)
{
    x+=a[j];
}
for(k=0;k<n;k++)
{
    if(a[k]%2==0)
    y+=a[k];
}

printf("sum of even position elements=%d \n",x);
printf("sum of even elements=%d",y);

}