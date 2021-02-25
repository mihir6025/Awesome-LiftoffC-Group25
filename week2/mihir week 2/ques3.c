#include<stdio.h>
int main(){
    char str[200];
    int count=0,i;
    printf("enter a string:");
    gets(str);
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '&&str[i+1] != ' '){
        count++;
        }
    }
    printf("%d",count+1);
}