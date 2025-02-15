#include<stdio.h>
#include<math.h>
int main(){
    printf("THIS IS A SERIES IN POWER OF X\n");
    int x,num,i,sum=0;
    printf("enter the number of terms: \n");
    scanf("%d", &num);
    printf("enter the value of x: ");
    scanf("%d", &x);
    for(i=1; i<=num; i++){
        if( i % 2 == 0 ){
            sum-= (1/i)*pow(x,i);
            printf("-(1/%d)*X^%d", i,i);
        }
        else{
            sum+= (1/i)*pow(x,i);
            printf("+(1/%d)*X^%d", i,i);
        }
    }
    printf("\n");
    printf("sum of the series: %d", sum);
    return 0;
}