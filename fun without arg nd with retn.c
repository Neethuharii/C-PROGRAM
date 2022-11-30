#include<stdio.h>
int sum();// fun declaration:here is int value because here return a value c
int main(){
    int k;
k=sum();
printf("result is:%d",k);
}


int sum(){
int a,b,c;
printf("enter the two value");
scanf("%d%d",&a,&b);
c=a+b;
return c;
}
