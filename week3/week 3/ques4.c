#include <stdio.h>
long int fact(int n)
{
    if (n  >= 1)
    {
        return n * fact(n - 1);
    }
    else
    {
        return 1;
    }
}

int main()
{
    int a, b;
    printf("enter a no:");
    scanf("%d", &a);
    b = fact(a);
    printf("%d", b);
    return 0;
}
