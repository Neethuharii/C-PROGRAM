#include<stdio.h>
void sum();
int main(){
sum();
}

void sum(){
int a,b,c;
printf("enter two number");
scanf("%d%d",&a,&b);
c=a+b;
printf("result is:%d",c);
}
