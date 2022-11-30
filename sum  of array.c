#include<stdio.h>
int main(){
int limit,n,sum=0,i,a[100];
printf("enter the limit");
    scanf("%d",&limit);
    printf("enter the values");
    for(i=0;i<limit;i++){
        scanf("%d",&n);
    }
    for(i=0;i<limit;i++){
        sum=sum+a[i];}
    printf("result is:%d\n",sum);
}
