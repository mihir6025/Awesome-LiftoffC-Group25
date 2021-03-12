/*Program to find the square of any number using functions*/

#include<stdio.h>
float square(float);
int main()
{
    float a,Sqr;
    printf("Enter a number : ");
    scanf("%f",&a);
    Sqr=square(a);
    printf("\nThe square of entered number %f is : %f .",a,Sqr);
    return 0;
}
float square(float b)
{
	float sq;
    sq=b*b;
    return sq;
}
