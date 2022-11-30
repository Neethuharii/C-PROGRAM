#include<stdio.h>
int sum(int,int);
int main(){
 int a,b,c;
 printf("enter the two values");
 scanf("%d%d",&a,&b);
 c=sum(a,b);
 printf("result is:%d",c);
 return 0;
 }


 int sum(int p,int
         q){
 int r;
 r=p+q;
 return r;
 }
