#include<stdio.h>
int main(){
    
    printf("enter two numbers: \n");
    int divd, divs;;
    scanf("%d %d",&divd,&divs);
    int rem=divd%divs;    
    while(rem!=0){
        
        divd= divs;
        divs= rem;
        rem= divd%divs;
    }
    printf("gcd: %d", divs);
    return 0;
}