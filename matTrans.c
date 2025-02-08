#include<stdio.h>
int main(){
    
    int m,n,row,col;
    printf("enter the rows and columns of matrix(m/n): \n");
    scanf("%d %d", &m,&n);
    int mat[m][n], matrans[m][n];
    printf("enter the values in the matrix: \n");
    for(row=0; row<m; row++){
        for(col=0; col<n; col++){
            scanf("%d", &mat[row][col]); 
        }
    }
    printf("original matrix: \n");
    for(row=0; row<m; row++){
        for(col=0; col<n; col++){
            printf("%d ", mat[row][col]);
        }
        printf("\n");
    }

    for(row=0; row<m; row++){
        for(col=0; col<n; col++){
            matrans[row][col]= mat[col][row];
        }
    }
    printf("transpose matrix: \n");
    for(row=0; row<m; row++){
        for(col=0; col<n; col++){
            printf("%d ", matrans[row][col]);
        }
        printf("\n");
    }

    return 0;
}












































































































