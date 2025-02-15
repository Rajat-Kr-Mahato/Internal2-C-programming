#include<stdio.h>

int area(int *l, int *b);
int perimeter(int *l, int *b);

int area(int *l, int *b){
    int a= *l*(*b);
    return a;
}

int perimeter(int *l, int *b){
    int p= 2*(*l+*b);
    return p;
}

int main(){
    int l,b;
    printf("enter the length and breadth of the rectangle: \n");
    scanf("%d %d", &l,&b);
    int a= area(&l,&b);
    int p= perimeter(&l,&b);
    printf("the area of the rectangle: %d\n", a);
    printf("the perimeter of the rectangle: %d\n", p);
    return 0;
}
