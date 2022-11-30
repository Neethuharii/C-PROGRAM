#include<stdio.h>
int main(){



int i,j,n,k;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n/2-1;j++){
                for(k=1;k<=2*n+1;k++)
            printf("*");
        }
        printf("\n");
    }
}
