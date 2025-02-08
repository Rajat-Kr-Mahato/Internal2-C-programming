#include <stdio.h>


int main(){
    int term;
    printf("enter the number of terms of fibonacci series\n");
    scanf("%d", &term);
   
    int a=0,b=1,fab=0,i;
    printf("%d\t", a);
    printf("%d\t", b);
    for(i=1; i<=term; i++)
    {
        
        fab =a+b;
        printf("%d\t", fab);
        a=b;
        b=fab;
    }

    return 0;
}