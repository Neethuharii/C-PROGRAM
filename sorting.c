#include<stdio.h>
int main(){
int limit,n,i,t,a[100],j;
printf("enter the limit");
scanf("%d",&limit);
printf("enter the values");
for(i=0;i<limit;i++){
scanf("%d",&a[i]);
}
for(i=0;i<limit-1;i++){
    for(j=i+1;j<limit;j++){
        if(a[i]>a[j]){
            t=a[i];
            a[i]=a[j];
            a[j]=t;
        }
    }
}
printf("you entered");
for(i=0;i<limit;i++){
    printf("\nresult is:%d",a[i]);
}
}
