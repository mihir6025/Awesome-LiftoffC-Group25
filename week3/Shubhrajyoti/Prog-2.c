/*Program to print the factorial of a given number using functions.*/

#include<stdio.h>
int fact(int);
int main()
{
    int x,F;
    printf("Enter a number whose factorial you want to find : ");
    scanf("%d",&x);
    F=fact(x);
    printf("\nThe factorial of %d is %d . :",x,F);
    return 0;
}
int fact(n)
{
    int factorial=1;
    int i;
    for(i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
