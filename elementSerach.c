#include<stdio.h>
int main(){
    int term,i,num,count=0;
    printf("enter the number of terms of the array: ");
    scanf("%d", &term);
    int arr[term];
    for(i=0; i<term; i++){
        printf("%d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(i=0; i<term; i++){
        printf("%d ", arr[i]);
    }
    printf("\nenter the element you want to search: ");
    scanf("%d", &num);
    for(i=0; i<term; i++){
        if( arr[i] == num ){
            count+= 1;
        }
    }
    if( count > 0 ){
        printf("the number %d is found %d times\n", num, count);
    }
    else{
        printf("the number %d is not found", num);
    }
    return 0;
}