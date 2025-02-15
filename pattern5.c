#include <stdio.h>

int main(){

    int i,j,k,n;
    printf("enter the nth number for the pattern\n");
    scanf("%d", &n);
    for(i=1; i<=n; i++){
        for(j=n; j>i; j--){
            printf("\t");
        }
        for(k=1; k<=i; k++){
            printf("%d\t", k);
        }
        printf("\n");

    }

    return 0;
}
