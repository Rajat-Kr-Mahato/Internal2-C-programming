#include<stdio.h>
#include<math.h>
int main(){
    int num,n,m;
    printf("enter any number to find its armstrong: ");
    scanf("%d", &num);
    printf("%d \n",sizeof(num));
    int len= sizeof(num);
    int arm=0;
    int p= len-1;
    for(int i=0; i<len; i++){
        m= pow(10,p);
        n= num/m;
        num= num%m;
        p--;
        arm+= pow(n,len);
        
    }
    printf("armstrong of the number %d is: %d", num,arm);
    

    return 0;
}