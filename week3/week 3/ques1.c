#include <stdio.h>
int square(int n)
{

    return n * n ;
}
int main()
{
    int a, b;
    printf("enter a no:");
    scanf("%d", &a);
    b = square(a);
    printf("%d", b);
    return 0;
}