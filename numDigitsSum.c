//tried to calculate the number of digits in any number... but failed;;;
/*#include<stdio.h>
int main(){
int num;
printf("enter any number: \n");
scanf("%d", &num);
int count=0;
for(int i=0; i<num; i++){
    int rem= num%10;
    num= num/10;
    if(rem<10){
        count++;
        break;
    }
    count++;
}
printf("number of digits in the given number: %d\n", count);
return 0;
}*/

#include<stdio.h>
int main(){
    int num,a,b,c;
    printf("enter any three digit number: ");
    scanf("%d", &num);
    a= num/100;
    b= (num%100)/10;
    c= num%10;
    printf("sum of digits of the number %d is %d", num,a+b+c);
    return 0;
}


