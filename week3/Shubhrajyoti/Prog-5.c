/*Program to check whether a given number is palindrome or not using recursion*/

#include<stdio.h>
int palindrome(int);
int main()
{
   int num, rev;
   printf("\nEnter a number : ");
   scanf("%d",&num);
   rev = palindrome(num);
   if(num==rev)
      printf("\n%d is a palindrome number.",num);
   else
      printf("\n%d is not a palindrome number.",num);
   return 0;
}

int palindrome(int n)
{
   static int rev_num=0,rem;
   if(n!=0)
    {
      rem= n%10;
      rev_num= rev_num*10 +rem;
      palindrome(n/10);
    }
   return rev_num;
}
