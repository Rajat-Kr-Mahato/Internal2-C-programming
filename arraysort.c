#include<stdio.h>

int main(){
    int i,j,term;
    printf("enter the number of terms of the array\n");
    scanf("%d", &term);
    int arr[term];
    printf("enter the values to the array\n");
    for(i=0; i<term; i++){
        scanf("%d", &arr[i]);
    }
    int max= arr[0],min= arr[0],c;
    for(i=0; i<term; i++){
        
        if(arr[i] > max){
            max= arr[i];
        }
        if(arr[i] < min){
            min= arr[i];
        }
    }
    
    printf("maximum = %d\n", max);
    printf("minimum = %d\n", min);

    for(i=0; i<term; i++){   // sorting array in ascending order
        for(j=i+1; j<term; j++){
            if(arr[i] > arr[j]){
                c= arr[i];
                arr[i]= arr[j];
                arr[j]= c;

            }
        }
    }
    printf("ascending array: ");
    for(i=0; i<term; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("descending array: ");
    for(i=(term-1); i>=0; i--){
        printf("%d ", arr[i]);
    }

    return 0;
    
}