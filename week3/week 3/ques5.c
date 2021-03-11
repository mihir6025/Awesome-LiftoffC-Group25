#include <stdio.h>
int palindrome(int n)
{
    int rem, rev = 0, temp;
    temp = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (rev == temp){
        return 0;
    }
    else{
        return 1;
    }
}

int main()
{
    int a;
    printf("enter a no:");
    scanf("%d", &a);
    if (palindrome(a) == 0){
        printf("%d is a palindrome number.\n", a);
    }
    else{
        printf("%d is not a palindrome number.\n", a);
    }
}