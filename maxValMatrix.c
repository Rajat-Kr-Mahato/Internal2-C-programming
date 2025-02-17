//largest value from a matrix
#include<stdio.h>
int main(){
    int row,col,i,j;
    printf("enter the value of row for the matrix: \n");
    scanf("%d", &row);
    printf("enter the value of column of the matrix: \n");
    scanf("%d", &col);
    int arr[row][col];
    printf("enter the values to the matrix: \n");
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d%d element: ", i,j);
            scanf("%d", &arr[i][j]);
            printf("\n");
        }
    }
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    int max= arr[0][0];
    for(i=0; i<row; i++){
        for(j=0; j<col; j++){
            if( arr[i][j] > max ){
                max= arr[i][j];
            }
        }
    }
    printf("the maximum value of the matrix: %d", max);


    return 0;
}