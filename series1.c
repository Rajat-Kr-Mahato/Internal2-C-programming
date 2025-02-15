#include<stdio.h>
int main(){   // sum of n natural number
    int num,i,sum=0;
    printf("enter the number of terms: \n");
    scanf("%d", &num);
    for(i=1; i<=num; i++){
        sum+= i;
    }
    printf("sum till %dth term: %d", num, sum);

    return 0;
}