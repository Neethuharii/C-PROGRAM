#include<stdio.h>
int main()
{
    int i,j,n,a[3][3];

    printf("enter the values");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("you entered values are");
           for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                printf("%d\t",a[i][j]);
            }
            printf("\n");
           }}
