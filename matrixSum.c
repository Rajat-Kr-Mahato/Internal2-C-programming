#include<stdio.h>
int main(){
    int r1=3,r2=3,c1=3,c2=3;
    int a[3][3],b[3][3];
    printf("enter the elements of first matrix:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("first matrix: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("enter the elements of second matrix:\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("second matrix: \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    printf("sum of above given matrix: \n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}