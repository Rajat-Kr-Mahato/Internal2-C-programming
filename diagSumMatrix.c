#include <stdio.h>
int main(){
    int i,j,row,col,m,n;
    printf("enter the size of the matrix (m/n)\n");
    scanf("%d%d", &m,&n);
    int matrix[m][n];
    printf("enter the values in matrix\n");
    for(row=0; row<m; row++){
        for(col=0; col<n; col++){
            scanf("%d", &matrix[row][col]);

        }
    }
    for(row=0; row<m; row++){
        for(col=0; col<n; col++){
            printf("%d ", matrix[row][col]);
        }
        printf("\n");
    }

//sum of diagonal of matrix
    int sum1=0, sum2=0;
    for(row=0; row<m; row++){
        for(col=0; col<n; col++){
            if(row==col){
                sum1+= matrix[row][col];
            }
            if(row+col==m-1){
                sum2+=matrix[row][col];
            }
        }
    }
    printf("sum of both the diagonal of the matrix respectively are : %d %d", sum1,sum2);


    return 0;
}