#include<stdio.h>

int lcm(int a, int b);

int lcm(int a, int b){
    for(int i= 1; i<=b; i++){
        if((a*i)%b==0){
            
            return a*i; 
            break;
        }
    }

}
int main(){
    int a,b;
    printf("enter two numbers to find the lcm: \n");
    scanf("%d%d", &a,&b);
    int l= lcm(a,b);
    printf("lcm: %d", l);

    return 0;
}