#include<stdio.h>
#include <bits/stdc++.h>
int main(){
    int arr[10];
    int n,i,g=INT_MIN;
    printf("enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nenter elemnts:");
        scanf("%d",&arr[i]);
        if(arr[i]>g){
        g=arr[i];
        }
    }
    printf("\ngreatest element is:%d",g);
    int s=INT_MAX;
    for(i=0;i<n;i++){
        if(arr[i]<s){
        s=arr[i];
        }
    }
    printf("\nsmallest element is:%d",s);
}