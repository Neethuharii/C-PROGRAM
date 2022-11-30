#include<stdio.h>
int main(){
int i,j,a[3][3],sum,b[3][3];
printf("enter the fst array");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&a[i][j]);
    }
}
printf("enter second array");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        scanf("%d",&b[i][j]);
    }
}
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        sum=a[i][j]+b[i][j];
    }
}
printf("final");
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        printf("%d\t",a[i][j],b[i][j]);

    }

 }}
