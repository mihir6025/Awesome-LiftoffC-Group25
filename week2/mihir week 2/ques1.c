#include<stdio.h>
#include<math.h>
int main(){
    int n,rem,sum=0;
    printf("enter a no:");
    scanf("%d",&n);
    while(rem!=0){
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("sum of digits are: %d",sum);
}