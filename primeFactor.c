#include<stdio.h>
int main(){
    int num, count=0;
    printf("enter a number to find its prime factors: \n");
    scanf("%d", &num);
    printf("prime factors of %d are :\n", num);
    for(int i=1; i<num/2; i++){
        count=0;
        if(num%i==0){
            for(int j=1; j<i; j++){
                if(i%j==0){
                    count+=1;
                }
            }
        }
        if(count==1){
            printf("%d ", i);
        }
            
        }
    
    return 0;
}
