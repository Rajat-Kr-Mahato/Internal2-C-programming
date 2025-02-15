#include<stdio.h>
int main(){
    int i,j,num;
    printf("enter the number: \n");
    scanf("%d", &num);
    
    for(i=65; i<=(65+num); i++){
        for(j=65; j<=i; j++){
            printf("%c\t", (char)j);
        }
        printf("\n");
}
    return 0;
}