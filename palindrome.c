#include<stdio.h>
#include<math.h>
int main(){
    int num,i,rem,quo,count,new_num=0,n;
    printf("enter the number to check whether palindrome or not\n");
    scanf("%d", &num);
    count=0;
    n= num;
    int orig= num; 
    while(quo!=0){  //counting the number of digits
        quo= num/10;
        num= quo;
        count+= 1;
    }
    printf("no of digits= %d\n", count);
    int th_places= pow(10,(count -1));
    int q=1;
    while(q!=0){
        rem= n%10;
        n= n/10;
        q=n;
        printf("q=%d\n", q);
        new_num+= rem*th_places;
        th_places= th_places/10;
        
    }
    //new_num= new_num/10;
    printf("%d\n", new_num);
    if(new_num==orig){
        printf("it is a palindrome number");
    }
    else{
        printf("it is not a palindrome number");
    }

    return 0;
}