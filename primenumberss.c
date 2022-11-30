#include<stdio.h>
int main(){
int i,num;


for(i=1;i<=100;i++){

for(num=2;num<=i;num++){
    if(i%num==0)
    {

        break;
    }

}

if(i==num)


    printf("\n%d",i);
}}

