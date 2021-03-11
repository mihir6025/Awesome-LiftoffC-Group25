#include<stdio.h>
int greatestDiv(int a,int b){
    if(a>b){
        a=a-b;
        greatestDiv(a,b);
        
    }
    else if(b>a){
        b=b-a;
        greatestDiv(a,b);
        
    }
    else{
        return a;
        
    }
}
int main(){
    int n,m,x,y;
    printf("enter the no:");
    scanf("%d%d",&n,&m);    
    x=greatestDiv(n,m);
    y=(n*m)/x;
    printf("gcs is : %d \n",x);
    if(x!=0){
    y=(n*m)/x;
    printf("lcm is : %d ",y);
    }
}