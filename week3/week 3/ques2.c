#include <stdio.h>
int fact(int a)
{
    int i, j = 1;
    for (i = 1; i <= a; i++)
    {
        j = j * i;
    }
    return j;
}
int main()
{
    int a, b;
    printf("enter a no :");
    scanf("%d",&a);
    b = fact(a);
    printf("%d", b);
    return 0;
}