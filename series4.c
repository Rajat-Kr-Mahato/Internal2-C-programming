#include<stdio.h>

int factorial(int num);

int factorial(int num){
    int fact=1;
    for(int i=1; i<=num; i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int term,i,sum=0;
    printf("enter the nmuber of terms: ");
    scanf("%d", &term);
    for(i=1; i<=term; i++){
        sum+= 1/factorial(i);
        if(i==term){
            printf("(1/%d!)", i);
        }
        else{
            printf("(1/%d!) + ", i);
        }
    }
    printf("\nthe sum of the series: %d", sum);
    return 0;
}