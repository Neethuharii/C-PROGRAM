#include<stdio.h>
int main(){
int limit,i,a[100],b[100],t,j;
printf("enter the limit");
scanf("%d",&limit);
printf("enter the first array");
for(i=0;i<limit;i++){

    scanf("%d",&a[i]);
}
printf("enter the second array");
for(j=0;j<limit;j++){
    scanf("%d",&b[j]);
}
for(i=0;i<limit;i++){

if(a[i]>b[j]){
t=a[i];
a[i]=b[j];
b[j]=t;
}}
printf("swapped values :%d",a[i],b[j]);
}
