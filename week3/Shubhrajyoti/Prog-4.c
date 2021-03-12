/*Program to find the factorial of a number using recursion*/

#include<stdio.h>
int Factorial(int);
int main()
{
    int num,fact;
    printf("\nEnter a positive integer : ");
    scanf("%d",&num);
    fact=Factorial(num);
    printf("\nFactorial of entered number %d is =  %d", num,fact );
    return 0;
}

int Factorial(int n)
{
    if (n>=1)
        return n*Factorial(n-1);
    else
        return 1;
}

