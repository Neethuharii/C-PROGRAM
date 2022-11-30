#include<stdio.h>
void sum(int,int);
int main(){
    int a,b;
    printf("enetr two number");
    scanf("%d%d",&a,&b);
sum(a,b);
}

void sum(int s,int r){
int c;
c=s+r;
printf("result is:%d",c);
}
