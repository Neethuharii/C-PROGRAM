#include<stdio.h>
int main(){
int i,limit,a[100],searchkey,flag=0;
printf("enter the limit");
scanf("%d",&limit);
printf("enter the values");
for(i=0;i<limit;i++){
    scanf("%d",&a[i]);
}
printf("enter the search key");
scanf("%",&searchkey);
for(i=0;i<limit;i++){
    if(searchkey==a[i])
    {
        flag=1;
        break;}}
        if(flag==1){


   printf("found %d",i+1);

    }
else{
    printf("not found");
}

}}
