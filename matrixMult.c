#include<stdio.h>
int main(){
    int r1,r2,c1,c2;
    int matrix1[3][3],matrix2[3][3];
    printf("enter the no of rows for first matrix: ");
    scanf("%d",&r1);
    printf("enter the no of column for first matrix: ");
    scanf("%d",&c1);
    printf("enter the no of rows for second matrix: ");
    scanf("%d",&r2);
    printf("enter the no of column for second matrix: ");
    scanf("%d",&c2);
    printf("enter the element of first marix:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("enter the element of second matrix: \n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            scanf("%d",&matrix2[i][j]);
        }
    }
    printf("matrix of first element:\n");
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            printf("%d ",matrix1[i][j]);
        }
        printf("\n");
    }
    printf("matrix of second element:\n");
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            printf("%d ",matrix2[i][j]);
        }
        printf("\n");
    }
    if(c1!=r2){
        printf("multiplication not possible:");
        return 0;
    }
    
    else{
        printf("Result of matrix multiplication:\n ");
        int mul[r1][c2];
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                int sum=0;
                for(int k=0;k<r1;k++){
                    sum+=matrix1[i][k]*matrix2[k][j];
                }
                mul[i][j]=sum;
                printf("%d ",mul[i][j]);
            }
            printf("\n");
        }
    }
}