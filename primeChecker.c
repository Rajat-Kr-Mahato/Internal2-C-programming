#include<stdio.h>
int main(){
    int num, count=0;
    printf("enter the numner to check whether prime or not: ");
    scanf("%d", &num);
    for(int i=1; i<num/2; i++){
        if( num % i == 0 ){
            count+= 1;
        }
    }
    if( count == 1 ){
        printf("%d is a prime number\n", num);
    }  
    else{
        printf("%d is not a prime number", num);
    }
    return 0;
}