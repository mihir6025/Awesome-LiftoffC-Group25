#include<stdio.h> 
 
int main(){ 
    int number,a,sum=0; 
    printf("Enter a number: "); 
    scanf("%d",&number); 
     
    while(number>0){ 
        a=number%10; 
        sum+=a; 
        number=number/10; 
    } 
     
    printf("The sum of digits of the number is: %d", sum); 
     
    return 0; 
} 