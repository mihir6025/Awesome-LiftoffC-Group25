#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    int arr[10];
    printf("enter size of array:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("\nenter elemnts:");
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i += 2)
    {
        sum = sum + arr[i];
    }
    for (i = 0; i < n; i += 2)
    {
        if (arr[i] % 2 == 0)
        {
            sum = sum + arr[i];
        }
    }
    printf("sum is : %d ", sum);
}
