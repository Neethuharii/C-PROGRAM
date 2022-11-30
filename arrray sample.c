
#include<stdio.h>
int main(){
int i,a[100],limit;
printf("enter the limit");

scanf("%d",&limit);

printf("enter the values");
for(i=0;i<limit;i++){
    scanf("%d",a[i]);
}
printf("you entered");
for(i=0;i<limit;i++)
{

    printf("%d",a[i]);
}
}
