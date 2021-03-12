/*Program to find GCD and LCM of two numbers using recursion*/

#include<stdio.h>
int GCD(int,int);
int main()
{
    int gcd,lcm,a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    gcd=GCD(a,b);
    printf("\nGCD of %d and %d = %d.",a,b,gcd);
    lcm=(a*b)/gcd;
    printf("\nLCM of %d and %d = %d.",a,b,lcm);
    return 0;
}
int GCD(int x,int y)
{
    if(y==0)
        return x;
    else
        return GCD(y,x%y);
}
