#include<stdio.h>

int main(){
    int x=10;
    int*p;
    p=&x;

    printf("%d",x);
    printf("%p",&x);
    printf("%p",p);
}