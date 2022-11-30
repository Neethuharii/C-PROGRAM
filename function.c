#include<stdio.h>
void sum();//function declaration so main function top specify
int main(){
sum();//function call

}

void sum(){
int a,b,c;
printf("enter two values");
scanf("%d%d",&a,&b);
c=a+b;
printf("result is:%d",c);
}
